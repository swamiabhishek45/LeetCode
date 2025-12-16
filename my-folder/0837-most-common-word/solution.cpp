class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        unordered_set<string> banset(banned.begin(), banned.end());
        unordered_map<string, int> frq;

        string word = "";

        for(int i = 0; i<=paragraph.size(); i++){
            if(i < paragraph.size() && isalnum(paragraph[i])){
                word += tolower(paragraph[i]);
            }else{
                if(!word.empty() && banset.find(word) == banset.end()){
                    frq[word]++;
                }

                word = "";
            }
        }


        string ans;
        int maxFrq = 0;

        for(auto &p : frq){
            if(p.second > maxFrq){
                maxFrq = p.second;
                ans = p.first;
            }
        }

        return ans;
    }
};
