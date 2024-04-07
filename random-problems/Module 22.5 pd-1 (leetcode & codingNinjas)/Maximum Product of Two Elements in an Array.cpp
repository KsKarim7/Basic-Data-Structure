// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int j = 1;
//         int sum = 0;
//         for(int i = 0;i<nums.size()-1;i++){
//             for(int j = i+1;j<nums.size();j++){
//                 if((nums[i]-1)*(nums[j]-1) > sum){
//                     sum = (nums[i]-1)*(nums[j]-1);
//                 }
//             }
//         }
//         return sum;
//     }
// };