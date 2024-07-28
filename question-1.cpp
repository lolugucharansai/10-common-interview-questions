
/*Given two strings sl and s2,check if they're anagrams.Two strings are anagrams if they're made of the same characters with the same
frequencies.*/
#include <iostream>
#include <unordered_map>
using namespace std;

string check_anagrams(string s1, string s2) {
    unordered_map<char, int> mp;
    for (auto x : s1) {
        mp[x]++;
    }
    for (auto y : s2) {
        mp[y]--;
    }
    for (const auto &z : mp) {
        if (z.second != 0) {
            return "These strings are not anagrams";
        }
    }
    return "They are anagrams!";
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << check_anagrams(s1, s2);
    return 0;
}