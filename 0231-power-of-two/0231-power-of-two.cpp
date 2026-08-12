class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0) return false;
        long long m=n,coutt=0;
        if(n==1) return true;
        if(n==0) return false;
        if(n%2!=0){
        while(m!=0){
           m=m/2;
           coutt++;
        }
        }
         if(n%2==0){
        while(m!=1){
           m=m/2;
           coutt++;
        }
        }
        if(pow(2,coutt)==n){
            return true;
        }
        return false;
    }
};