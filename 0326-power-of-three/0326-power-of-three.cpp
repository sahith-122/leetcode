class Solution {
public:
    bool isPowerOfThree(int n) {
        long long i=pow(3,19);
          return (n>0 && i%n==0);
    }
};