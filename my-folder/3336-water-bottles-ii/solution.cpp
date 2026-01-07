class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int alldrank = numBottles;
        int allempty = numBottles;

        while(allempty >= numExchange){
            allempty -= numExchange;

            alldrank += 1;
            allempty++;
            numExchange++;
        }

        return alldrank;
    }
};
