class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int idx=-1;
        for(int i=arr.size()-2;i>-1;i--){
            if(arr[i]<arr[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){reverse(arr.begin(),arr.end());return;}
        int justGreater=arr[idx];
        int diff=INT_MAX;
        for(int i=idx+1;i<arr.size();i++){
            if(arr[i]>arr[idx]){
                int temp=arr[i]-arr[idx];
                if(diff>temp){
                    diff=temp;
                    justGreater=i;
                }
            }
        }
        swap(arr[justGreater],arr[idx]);
        reverse(arr.begin()+idx+1,arr.end());
    }
};