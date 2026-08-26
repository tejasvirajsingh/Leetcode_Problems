class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

        int low = 0;
        int high = 1;
         
         while(high<arr.size() && arr[low] < arr[high]){
            low++;
            high++;
         }
         if(low==0 || high==arr.size())
         return false;

         while(high<arr.size() && arr[low] > arr[high]){
         low++;
         high++;
   }
         return high == arr.size();
    }
};