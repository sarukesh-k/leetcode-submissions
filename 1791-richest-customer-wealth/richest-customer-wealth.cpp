class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth;
        for(int i = 0; i < accounts.size(); i++){
            int sum = 0; //resets to 0, after 2nd for loop finishes and calculates max(x,y);
            for(int j = 0; j < accounts[i].size(); j++){
                sum += accounts[i][j];
            }
        maxWealth= max(maxWealth, sum); 
        }
    return maxWealth;
    }
};

