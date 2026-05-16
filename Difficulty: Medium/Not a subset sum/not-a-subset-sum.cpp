class Solution {
  public:
    int findSmallest(vector<int> &arr) {
        // code here.
        int sum = 1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>sum)
            {
                break;
            }
            else
            {
                sum += arr[i];
            }
        }
        return sum;
    }
};