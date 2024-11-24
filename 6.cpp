class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
    int el1 = 0, el2 = 0, ct1 = 0, ct2 = 0;

    // Phase 1: Identify potential candidates
    for (int num : arr) {
        if (num == el1) {
            ct1++;
        } else if (num == el2) {
            ct2++;
        } else if (ct1 == 0) {
            el1 = num;
            ct1 = 1;
        } else if (ct2 == 0) {
            el2 = num;
            ct2 = 1;
        } else {
            ct1--;
            ct2--;
        }
    }

    // Phase 2: Verify candidates
    ct1 = 0;
    ct2 = 0;

    for (int num : arr) {
        if (num == el1) ct1++;
        else if (num == el2) ct2++;
    }

    vector<int> result;
    if (ct1 > arr.size() / 3) result.push_back(el1);
    if (ct2 > arr.size() / 3) result.push_back(el2);

    sort(result.begin(),result.end());
    return result;
}