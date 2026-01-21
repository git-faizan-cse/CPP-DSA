class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int countGas = 0, countCost = 0;
        for(int i : gas){
            countGas += i;
        }
        for(int j : cost){
            countCost += j;
        }

        if(countGas < countCost){
            return -1;
        }

        int start = 0, currGas = 0;

        for(int i = 0; i < gas.size(); i++){
            currGas += (gas[i] - cost[i]);
            if( currGas < 0){
                start = i + 1;
                currGas = 0;
            }
        }
        return start;
    }
};