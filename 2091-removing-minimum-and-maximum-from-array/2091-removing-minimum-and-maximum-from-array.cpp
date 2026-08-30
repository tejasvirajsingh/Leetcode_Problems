class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minNum = nums[0];
        int maxNum = nums[0];

        int minIndex = 0;
        int maxIndex = 0;

        for(int i=1;i<n;i++){
          if(minNum > nums[i] ){
             minNum = nums[i];
             minIndex = i;
          }
          if(maxNum < nums[i]){
            maxNum = nums[i];
            maxIndex = i;
          }
        }
        int minPos = minIndex  + 1;
        int maxPos = maxIndex + 1;

        int option1 = max(minPos, maxPos);
        int option2 = max(n - minPos + 1, n - maxPos + 1);
        int option3 = minPos + (n - maxPos + 1);
        int option4 = maxPos + (n - minPos + 1);

        int result = min({option1,option2,option3,option4});

        return result;
    }
};