class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool>lowwer(26,false);
        vector<bool>upper(26,false);

        for(char c : word){
            if(c >= 'a' &&  c <= 'z'){
                lowwer[c - 'a'] = true;
            }
            else if(c >= 'A' && c<= 'Z'){
                upper[c - 'A'] = true;
            }
        }
            int count = 0;

                for(int i=0 ;i<26;i++){
                    if(lowwer[i] && upper[i]){
                        count++;
                    }
                }
                return count;
    }
};