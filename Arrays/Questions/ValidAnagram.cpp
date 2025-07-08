#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


class Solution {
    public:
        bool isAnagram(string s, string t) {
            unordered_map<char, int> charCountS;
            unordered_map<char, int> charCountT;

            if(s.length() != t.length()) {
                return false; // If lengths differ, they cannot be anagrams
            }

            for(char c : s) {
                charCountS[c]++;
            }

            for(char c : t) {
                charCountT[c]++;
            }

            bool isAnagram = true;

            

            // Compare the character counts

            for(auto& pair : charCountS) {
                char c = pair.first;
                int count = pair.second;

                if(charCountT[c] != count) {
                    isAnagram = false;
                    break; // If any character count doesn't match, they are not anagrams
                }
            }

            
            return isAnagram;
        }

        bool isAnagram2(string s, string t) {
          unordered_map<char, int> charCount;

          if(s.length() != t.length()){
            return false;
          }

          for(char c: s) charCount[c]++;
          for(char c: t) charCount[c]--;

          for(auto& pair: charCount ){
            if(pair.second != 0){
                return false;
            
            }

          }
           
            
            return true;
    }
};



int main(){

    string s = "cat";
    string t = "atc";


    Solution solution;
    bool result = solution.isAnagram2(s, t);
    cout << "Is \"" << s << "\" an bumble of \"" << t << "\": " << (result ? "Yes" : "No") << endl;

    return 0;
}