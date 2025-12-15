class Solution {
public:

    bool detectCapitalUse(string word) {

        int cnt = 0;

        if(word.size() == 1) return true;

        for(int i = 0; i<word.size(); i++){
            if(isupper(word[i])){
                cnt++;
            }
        } 

        if(cnt == 0 || cnt == word.size()){
            return true;
        }

        if(cnt == 1 && isupper(word[0])){
             return true;
        }

        return false; 
      
    }
};
