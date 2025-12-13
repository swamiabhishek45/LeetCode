class Solution {
public:

    bool isVowel(char c){
        return string("aeiouAEIOU").find(c) != string::npos;
    }
    string reverseVowels(string s) {
        int l = 0, r = s.size() - 1;

        while(l < r){
           while(l < r && !isVowel(s[l])) l++;
           while(l < r && !isVowel(s[r])) r--;


           char c = s[l];
           s[l] = s[r];
           s[r] = c;

           l++;
           r--;
        }

        return s;
    }
};
