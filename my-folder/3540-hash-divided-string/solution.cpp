class Solution {
public:
    string stringHash(string s, int k) {
        map<char, int> mp;
        map<int, char> mp2;

        for(int i = 0; i<26; ++i){
            mp['a' + i] = i;
            mp2[i] = 'a' + i;
        }

        string ans = "";
        int len = s.length();

        for(int i = 0; i< len;){
            int chars = k;
            int sum = 0;

            while(chars-- && i < len){
                sum += mp[s[i]];
                i++;
            }

            ans += mp2[sum % 26];
        }

        return ans;
    }
};
