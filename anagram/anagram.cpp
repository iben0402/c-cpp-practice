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

int main() {

    string s="anagram", t="nagaram";

    cout << s << " " << t << ": " << isAnagram(s, t);

    s = "rat";
    t = "car";

    cout << s << " " << t << ": " << isAnagram(s, t);


}