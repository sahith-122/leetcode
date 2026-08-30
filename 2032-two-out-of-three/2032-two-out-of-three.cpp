class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;

        for (int x : nums1) {
            bool in2 = false, in3 = false;

            for (int y : nums2) {
                if (x == y) {
                    in2 = true;
                    break;
                }
            }

            for (int y : nums3) {
                if (x == y) {
                    in3 = true;
                    break;
                }
            }

            if (in2 || in3) {
                bool already = false;

                for (int y : ans) {
                    if (x == y) {
                        already = true;
                        break;
                    }
                }

                if (!already)
                    ans.push_back(x);
            }
        }

        for (int x : nums2) {
            bool in1 = false, in3 = false;

            for (int y : nums1) {
                if (x == y) {
                    in1 = true;
                    break;
                }
            }

            for (int y : nums3) {
                if (x == y) {
                    in3 = true;
                    break;
                }
            }

            if (in1 || in3) {
                bool already = false;

                for (int y : ans) {
                    if (x == y) {
                        already = true;
                        break;
                    }
                }

                if (!already)
                    ans.push_back(x);
            }
        }

        for (int x : nums3) {
            bool in1 = false, in2 = false;

            for (int y : nums1) {
                if (x == y) {
                    in1 = true;
                    break;
                }
            }

            for (int y : nums2) {
                if (x == y) {
                    in2 = true;
                    break;
                }
            }

            if (in1 || in2) {
                bool already = false;

                for (int y : ans) {
                    if (x == y) {
                        already = true;
                        break;
                    }
                }

                if (!already)
                    ans.push_back(x);
            }
        }

        return ans;
    }
};
