class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());

        int sum=0;

        for(int i:apple)
            sum+=i;
        
        for(int i=0;i<capacity.size();i++)
        {
            
                sum=sum-capacity[capacity.size()-1-i];
            
            if(sum<=0)return i+1;
        }

        return capacity.size();

    }
};