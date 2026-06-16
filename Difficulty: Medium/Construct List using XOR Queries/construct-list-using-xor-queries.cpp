class Solution {
  public:
    vector<int> constructList(vector<vector<int>> &queries) {
        // code here
        vector<int>v;
        v.push_back(0);
        int xr = 0;
        for(auto it : queries)
        {
            int first = it[0];
            int second = it[1];
            if(!first)
            v.push_back(second^xr);
            else
            {
                xr ^= second;
            }
        }
        for(auto &x : v)
            x ^= xr;
        sort(v.begin(),v.end());
        return v;
    }
};
