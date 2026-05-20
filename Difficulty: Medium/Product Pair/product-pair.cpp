class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        // code here
        unordered_map<long long,int> mp;

        for(auto x : arr)
        {
            mp[x]++;
        }

        for(auto x : arr)
        {
            // Handle zero separately
            if(x == 0)
            {
                if(target == 0 && mp[0] > 1)
                    return true;

                continue;
            }

            // Product possible only if divisible
            if(target % x != 0)
                continue;

            long long y = target / x;

            if(mp.find(y) != mp.end())
            {
                // same element case
                if(x != y || mp[x] > 1)
                    return true;
            }
        }

        return false;
    }
};