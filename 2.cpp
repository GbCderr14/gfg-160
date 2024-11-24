class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int i=0;
        int j=0;
        while(i<arr.size()&&j<arr.size()){
            if(arr[j]!=0){
                swap(arr[i],arr[j]);
                i++;
            }
            j++;
        }
    }
};