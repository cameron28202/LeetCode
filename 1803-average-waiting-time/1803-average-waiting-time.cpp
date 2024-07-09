class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        
        int currTime = 0;
        double totalWait = 0;
        for(int i = 0; i < customers.size(); ++i){
            if(currTime < customers[i][0]){
                currTime += customers[i][0] - currTime + customers[i][1];
                totalWait += customers[i][1];
            }
            else{
                currTime += customers[i][1];
                totalWait += currTime - customers[i][0];
            }
        }
        return totalWait / customers.size();


    }
};