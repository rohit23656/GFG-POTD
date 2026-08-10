class Solution {
  public:
    bool checkYear(int n) {
        // code here
        if(n%100!=0 && n%4==0)
        return true;
        else if(n%400==0)
        return true;
        else
        return false;
    }
};