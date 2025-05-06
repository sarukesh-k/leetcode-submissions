class Solution {
public:
    int passThePillow(int n, int time) {
        return ((time/(n-1))&1)==0 ? 1+(time%(n-1)) : n-(time%(n-1));
    }
};  