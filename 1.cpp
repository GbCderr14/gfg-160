class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int maxi=INT_MIN;
        int ans=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]>ans && arr[i]<maxi){
                ans=arr[i];
            }
        }
        return ans!=INT_MIN?ans:-1;
    }
};