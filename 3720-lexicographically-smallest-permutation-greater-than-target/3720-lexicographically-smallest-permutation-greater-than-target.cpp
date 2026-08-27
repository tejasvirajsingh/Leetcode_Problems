class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.size();
        vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        int i = 0;

        while (i < n) {
            int x = target[i] - 'a';

            if (freq[x] == 0)
                break;

            freq[x]--;
            i++;
        }

        int start = min(i, n - 1);

        for (int j = start; j >= 0; j--) {
            if (j < i)
                freq[target[j] - 'a']++;

            int x = target[j] - 'a';

            for (int c = x + 1; c < 26; c++) {
                if (freq[c] > 0) {
                    string ans = target.substr(0, j);

                    ans += char('a' + c);
                    freq[c]--;

                    for (int k = 0; k < 26; k++) {
                        while (freq[k] > 0) {
                            ans += char('a' + k);
                            freq[k]--;
                        }
                    }

                    return ans;
                }
            }
        }

        return "";
    }
};