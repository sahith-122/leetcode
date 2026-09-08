class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        bool flag=false;
        if(n==1 && nums[0]==1) return 0; 
        int sum=0;
        int max=nums[0];
        for(int i=0;i<n;i++) {if(max<nums[i]){max=nums[i];} if(nums[i]==n){flag=true;}sum+=nums[i];}
        int x= ((max)*(max+1))/2-(sum);
        if(flag==false) return n;
         if(x==0 && flag==true) return 0;
        return x;

    }
};