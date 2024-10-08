class Solution {
public:
    int minSwaps(string s) {
        int count = 0;
        int maxCount = 0;

        for(char ch : s){
            if(ch == '['){
                count--;
            }else{
                count++;
            }
            maxCount = max(count, maxCount);
        }
        return (maxCount+1)/2;
    }
};
