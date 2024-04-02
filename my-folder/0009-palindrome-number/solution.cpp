class Solution {
public:
    bool isPalindrome(int x) {

        if(x == 0){
            return true;
        }
        if( x < 0){
            return false;
        }
        int num = x;
        double rev;

        while(num != 0){
            int digit = num % 10;
            rev = (rev * 10)+ digit;
            num = num / 10;
        }

        if(x == rev){
            return 1;
        }else {
            return 0;
        }
    }
};
