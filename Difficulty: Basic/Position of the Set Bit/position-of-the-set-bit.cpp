class Solution {
  public:
    int findPosition(int n) {
        // code here
        if((n&(n-1))==0 && n>0)
            return (log2(n) + 1);
        
        return -1;
    }
};