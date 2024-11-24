class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int sum=INT_MIN;
        int currSum=0;
        for(int i=0;i<arr.size();i++){
                currSum+=arr[i];
                sum=max(currSum,sum);
                if(currSum<0)currSum=0;
        }
        return sum;
    }
};