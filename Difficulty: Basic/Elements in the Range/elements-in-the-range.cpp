class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // code here
        unordered_map<int,int>mp;
        for(auto it : arr)
        {
            mp[it]++;
        }
        for(int i=start;i<=end;i++)
        {
            if(mp.find(i)==mp.end())
            return 0;
        }
        return 1;
    }
};
