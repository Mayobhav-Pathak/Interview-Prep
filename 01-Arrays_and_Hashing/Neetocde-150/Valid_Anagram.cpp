/*
 *Problem: Valid Anagram (Leetcode Problem -242)
  *Time Complexity:O(n)
   *Space Complexity: O(1)
   Strategy: Store the letters and their frequency for both string in a hash map . Increase the frequency if the letter is in string s and decrease the frequency if the letter is in string t.
             If at the end , all frequencies are 0 , they are an anagram , else not.
  */
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> str;
        for(int i=0;i<s.length();i++){
            str[s[i]]++;
            str[t[i]]--;
        }
        for(auto pair : str){
            if(pair.second !=0) return false;
        }
        return true;
    }
};
