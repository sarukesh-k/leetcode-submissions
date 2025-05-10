class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            string x = to_string(i);
            int sum=0;
            for(char c: x){
                sum += c-'0';
            }
            if(sum%2==0) count++;
        }
        return count;
    }
};