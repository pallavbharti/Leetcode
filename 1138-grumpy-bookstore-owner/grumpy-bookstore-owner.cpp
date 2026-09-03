class Solution {   // Hint :  Find MaxLoss : 
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int prevLoss =0;
        for(int i = 0; i < minutes ; i++){    // Find previous Max Loss in 1st window
            if(grumpy[i]==1) prevLoss += customers[i];
        }
        int maxLoss = prevLoss;
        // Apply Sliding Window : 
        int maxIdx = 0;
        int i=1 ;
        int j = minutes;
        while(j < n){
            int currLoss = prevLoss;
            if(grumpy[j]==1) currLoss += customers[j];
            if(grumpy[i-1]==1) currLoss -= customers[i-1];
            if(maxLoss < currLoss) {
                maxLoss = currLoss;
                maxIdx = i;
            }
            prevLoss = currLoss;
            i++;
            j++;
        
        }
        // Filling 0's in grumpy Highest loss window so that less loss can happen:
        for(int i= maxIdx ; i < maxIdx + minutes ; i++){
            grumpy[i] = 0;
        }
        // Highest number of satisfaction :
        int sum = 0;
        for(int i =0; i<n ; i++){
            if(grumpy[i]==0) sum +=customers[i];
        }
        return sum;
    }
};