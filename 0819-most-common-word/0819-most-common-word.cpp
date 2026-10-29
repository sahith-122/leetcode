
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        
        for (int i = 0; i < paragraph.size(); i++) {
            paragraph[i] = tolower(paragraph[i]);
        }

    
        for (int i = 0; i < paragraph.size(); i++) {
            if (!isalpha(paragraph[i])) {
                paragraph[i] = ' ';
            }
        }

        
        string words[100000];
        int n = 0;
        string word = "";

        for (int i = 0; i <= paragraph.size(); i++) {
            if (i < paragraph.size() && paragraph[i] != ' ') {
                word += paragraph[i];
            } else if (word != "") {
                words[n++] = word;
                word = "";
            }
        }

        string answer = "";
        int maxCount = 0;

        
        for (int i = 0; i < n; i++) {
            bool isBanned = false;

            for (int j = 0; j < banned.size(); j++) {
                string b = banned[j];

                for (int k = 0; k < b.size(); k++) {
                    b[k] = tolower(b[k]);
                }

                if (words[i] == b) {
                    isBanned = true;
                    break;
                }
            }

            if (isBanned) {
                continue;
            }

            
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (words[i] == words[j]) {
                    count++;
                }
            }

            if (count > maxCount) {
                maxCount = count;
                answer = words[i];
            }
        }

        return answer;
    }
};
