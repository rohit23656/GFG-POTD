class Solution {
  public:
    bool isBinaryPalindrome(int n) {
        // code here
        int x = n,y=0;
        while(x>0)
        {
            y = y<<1 | (x&1);
            x = x>>1;
            
        }
        return n==y;
    }
};