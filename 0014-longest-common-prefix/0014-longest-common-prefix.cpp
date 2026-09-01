class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int *arr=new int[n];
        for(int i=0;i<n;i++) arr[i]=strs[i].size();
        int m=arr[0];
        for(int i=0;i<n;i++)    { if(m>arr[i]) m=arr[i]; }
        int x=m;
       for(int j=0;j<m;j++){
        for(int i=0;i<n-1;i++){
        
          if(strs[i][j]!=strs[i+1][j]){
            x=j;
 return strs[0].substr(0, x);
          }
          }
       }
 return strs[0].substr(0, x);
        
    }
};