class Solution {
public:
    string clearDigits(string s) {
        string ans;

        for(char x : s){
            if(isdigit(x)){
                ans.pop_back();
            }
            else {
                ans.push_back(x);
            }
        }
        return ans;
    }
};