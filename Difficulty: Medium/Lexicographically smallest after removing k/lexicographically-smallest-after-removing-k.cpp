class Solution {
  public:
    string lexicographicallySmallest(string &s, int k) {
        // code here
        int n = s.size();
        if((n&(n-1))==0)
         k /= 2;
         else
         k *= 2;
         if(k>=n)
         return "-1";
         string ans = "";
         for(int i=0;i<n;i++)
         {
              while(!ans.empty()&&ans.back()>s[i]&&k>0)
              {
                  ans.pop_back();
                  k--;
              }
              ans.push_back(s[i]);
         }
          while(!ans.empty()&&k>0)
              {
                  ans.pop_back();
                  k--;
              }
         
         return ans;
         
    }
};