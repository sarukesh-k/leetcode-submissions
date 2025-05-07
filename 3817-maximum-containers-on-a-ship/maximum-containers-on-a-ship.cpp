class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int count= maxWeight/w;

        int cell= n*n;

        return (cell>count)? count: cell;
    }
};