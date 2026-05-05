class Solution {
  public:
    long long sumXOR(vector<int> &arr) {
        // code here
        int n = arr.size();
        long long sum = 0;
        for(int i=0;i<32;i++)
        {
            long long oc = 0,zc = 0;
            for(int j=0;j<n;j++)
            {
                if(arr[j]&(1<<i))
                oc++; //increase count of one
            }
            zc = n - oc; // calculate zero count
            sum += oc*zc*(1<<i);
        }
        return sum;
    }
};