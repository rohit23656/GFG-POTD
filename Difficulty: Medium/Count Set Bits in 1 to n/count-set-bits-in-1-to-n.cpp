class Solution {
  public:
    int countSetBits(int n) {
        // code here
        if(n==0)
        return 0;
        int mx_power2 = log2(n);
        int first = mx_power2*pow(2,mx_power2-1);
        int second = n+1 - pow(2,mx_power2);
        int rest = n - pow(2,mx_power2);
        return first + second + countSetBits(rest);
        
    }
};
