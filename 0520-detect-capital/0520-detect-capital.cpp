class Solution {
public:
    bool detectCapitalUse(string word) {
        bool allCapital=true;
        bool allSmall=true;
        bool firstCapital=true;

        for (int i = 0; i < word.size(); i++) {

            if (!isupper(word[i])) {
                allCapital = false;
            }
            if (!islower(word[i])) {
                allSmall = false;
            }
            if (i == 0 && !isupper(word[i])) {
                firstCapital = false;
            }
            if (i > 0 && !islower(word[i])) {
                firstCapital = false;
            }
        }
        return allCapital || allSmall || firstCapital;
    }
};