class Solution {
public:
    int maxRepeating(string s, string s1) {
        int m = s1.size(),n = s.size(),i = 1;
        string temp = s1;
        while(s.find(temp) != string::npos && i++) temp += s1;
        return i - 1;
    }
};