class Solution {
  public:
    bool wifiRange(string &s, int x) {
        // code here
        int last = -1;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
            {
                int l = i-x;
                int r = i+x;
                if(l-last > 1)
                    return false;
                last = r;
            }
        }
        if(last < n-1)
            return false;
        return true;
    }
};