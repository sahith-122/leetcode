class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans;

        sort(nums.begin(), nums.end());

        int num = 1;

        for (int i = 0; i < n; i++) {

            if (nums[i] == num) {
                num++;
            }
            else if (nums[i] > num) {
                ans.push_back(num);
                num++;
                i--;
            }

        }

        while (num <= n) {
            ans.push_back(num);
            num++;
        }

        return ans;
    }
};