class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end() );
        int l=0 ,r=0;
        int n= nums.size();
        int arr[2]={0};
        for(int i=0;i<n;i++){
            int count1=0;
           while(r<n && nums[l]==nums[r]){
            count1++;
            r++;
           }
           if(arr[1]<count1){
            arr[1]=count1;
            arr[0]=nums[l];
           }
           l=r;
      //     if(l>=n) break;
           
        }
        return arr[0];
    }
};