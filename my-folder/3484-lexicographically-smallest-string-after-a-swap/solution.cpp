class Solution {
public:
    string getSmallestString(string s) {
        int i = 0;
        int j = i + 1;
        while (j < s.size()){
            int digit1 = s[i] - '0';
            int digit2 = s[j] - '0';
            if((digit1 % 2 == digit2 % 2) && ( s[j] < s[i])){
                swap(s[i], s[j]);
                return s;
            }
            i++;
            j++;
        }
        
        return s;
        
    }
};
