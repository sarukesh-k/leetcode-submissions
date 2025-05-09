class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_word = 0;
        for (const string& sentence : sentences){
            int space = count(sentence.begin(), sentence.end(), ' ');
            max_word = max(max_word, space + 1);
        }
        return max_word;
    }
};