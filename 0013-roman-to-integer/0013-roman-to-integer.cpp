class Solution {
public:

    int romToInt(char k) {
        if(k == 'I')
            return 1;
        if(k == 'V')
            return 5;
        if(k == 'X')
            return 10;
        if(k == 'L')
            return 50;
        if(k == 'C')
            return 100;
        if(k == 'D')
            return 500;
        if(k == 'M')
            return 1000;

        return 0;
    }

    int romanToInt(string s) {
        int n = s.length();
        int sum = 0;

        for(int i = 0; i < n - 1; i++) {

            if(romToInt(s[i]) < romToInt(s[i + 1]))
                sum -= romToInt(s[i]);
            else
                sum += romToInt(s[i]);
        }

        
        sum += romToInt(s[n - 1]);

        return sum;
    }
};