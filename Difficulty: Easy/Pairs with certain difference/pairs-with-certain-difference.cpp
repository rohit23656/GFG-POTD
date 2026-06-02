class Solution {
  public:
    int sumDiffPairs(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int sum = 0;
        sort(arr.begin(),arr.end());
        for(int i = n-1;i>=0;i--)
        {
            if(i>0)
            {
                if(arr[i]-arr[i-1]<k)
                {
                sum += arr[i]+arr[i-1];
                i--;
                }
            }
        }
        return sum;
    }
};