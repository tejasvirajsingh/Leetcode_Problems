class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiopQWERTYUIOP";
        string row2 = "asdfghjklASDFGHJKL";
        string row3 = "zxcvbnmZXCVBNM";
        
         vector<string> ans;

            for(int i=0;i<words.size();i++){

                bool r1 = true;
                bool r2 = true;
                bool r3 = true;

                for(char ch : words[i]){

                    if(row1.find(ch) == string::npos)
                     r1 = false;

                    if(row2.find(ch) == string::npos)
                    r2 = false;

                    if(row3.find(ch) == string::npos)
                    r3 = false;
                }
                if(r1 || r2 || r3)
                ans.push_back(words[i]);
            }
        return ans;
    }
};