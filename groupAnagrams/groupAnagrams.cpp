#include "iostream"
#include "vector"

using namespace std;

bool isAnagram(string s, string t) {
    if(s==t) return true;
    if(s.length()!=t.length()) return false;

    vector<int> amounts(26, 0);

    for(int i=0; i<s.length(); i++) {
        amounts[s[i]-'a']++;
        amounts[t[i]-'a']--;
    } 

    for(int i=0; i<amounts.size(); i++) {
        if(amounts[i]!=0) return false;
    }

    return true;

}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> ans;
    vector<string> temp;
    string t;
    while(true) {
        string s = strs.back();
        strs.pop_back();
        vector<string> anagrams;
        anagrams.push_back(s);

        for(int i=0; i<strs.size(); i++) {
            t = strs.back();
            strs.pop_back();
            if(isAnagram(s, t)) anagrams.push_back(t);
            else temp.push_back(t);
        }

        ans.push_back(anagrams);
        anagrams.clear();
        strs = temp;
        temp.clear();

        if(strs.size()==0) return ans;
    }

}

int main() {


}