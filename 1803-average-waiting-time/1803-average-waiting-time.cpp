class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        
        int currTime = 0;
        double totalWait = 0;
        for(int i = 0; i < customers.size(); ++i){
            int arrivalTime = customers[i][0];
            int waitTime = customers[i][1];
            if(currTime < arrivalTime){
                currTime += arrivalTime - currTime + waitTime;
                totalWait += waitTime;
            }
            else{
                currTime += waitTime;
                totalWait += currTime - arrivalTime;
            }
        }
        return totalWait / customers.size();


    }
};