
class Solution {
  public:
    string findMax(string N) {
        // code here
        vector<int>v(10,0);
        int n = N.size();
        for(int i=0;i<N.size();i++)
        {
            int index = N[i]-'0';
            v[index]++;
        }
        string ans="";
        for(int i=9;i>=0;i--)
        {
            while(v[i])
            {
                ans += i+'0';
                v[i]--;
            }
        }
        return ans;
    }
};