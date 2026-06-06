class Solution {
  public:
    int numOfWays(int n, int m) {
        // code here
        long total = (n*m)*(n*m-1);
        long attack = 4*(n-1)*(m-2) + 4*(n-2)*(m-1);
        int ans = total - attack;
        return ans;
    }
};