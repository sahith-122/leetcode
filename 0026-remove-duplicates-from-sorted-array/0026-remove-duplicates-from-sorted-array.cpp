class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int m = 0;

for (int i = 1; i < nums.size(); i++) {
    if (nums[i] != nums[m]) {
        m++;
        nums[m] = nums[i];
    }
}
    return m+1;
    }
};