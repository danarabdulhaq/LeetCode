class Solution {
public:
    int romanToInt(string s) {
        int vals[26];
        vals['I' - 'A'] = 1;
        vals['V' - 'A'] = 5;
        vals['X' - 'A'] = 10;
        vals['L' - 'A'] = 50;
        vals['C' - 'A'] = 100;
        vals['D' - 'A'] = 500;
        vals['M' - 'A'] = 1000;

        int res = 0;
        int prev = 0;

        for (int i = 0; s[i] != '\0'; i++) {
            int curr = vals[s[i] - 'A'];
            res += curr;
            if (curr > prev) {
                res -= 2 * prev;
            }
            prev = curr;
        }

        return res;
    }
};