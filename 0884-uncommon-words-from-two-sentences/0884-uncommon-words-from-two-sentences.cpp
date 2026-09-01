class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {

        unordered_map<string, int> mp;
        string word;

        stringstream ss1(s1);

        while (ss1 >> word) {
            mp[word]++;
        }

        stringstream ss2(s2);

        while (ss2 >> word) {
            mp[word]++;
        }

        vector<string> ans;

        for (auto x : mp) {

            if (x.second == 1) {
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};