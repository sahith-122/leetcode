class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0,r=1;
        
        for(int i=0;i<n/2;i++){
            if(nums[l]!=nums[r]){
                return nums[l];
            }
            l=l+2;
            r=r+2;
        }
        return nums[n-1];
        
        
    }
};