
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);

        while (ss >> word) {
            words.push_back(word);
        }

        if (pattern.size() != words.size())
            return false;

        for (int i = 0; i < pattern.size(); i++) {
            for (int j = i + 1; j < pattern.size(); j++) {

                if ((pattern[i] == pattern[j]) !=
                    (words[i] == words[j])) {
                    return false;
                }
            }
        }

        return true;
    }
};
