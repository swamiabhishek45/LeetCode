class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string s1 = to_string(num1);
        string s2 = to_string(num2);
        string s3 = to_string(num3);

        s1 = string(4 - s1.length(), '0') + s1;
        s2 = string(4 - s2.length(), '0') + s2;
        s3 = string(4 - s3.length(), '0') + s3;

        vector<int> vec(4);
        for(int i = 0; i< 4 ; i++){
            vec[i] = min(s1[i] - '0', min(s2[i] - '0', s3[i] - '0'));
        }

        int ans = 0;
        for(int i = 0; i < 4; i++){
            ans = ans * 10 + vec[i];
        }

        return ans;
    }
};
