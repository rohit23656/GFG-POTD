class Solution {
  public:
    int binarySearchable(vector<int>& arr) {
        // code here
        int n = arr.size();
        int count = 0;
        for(auto target : arr)
        {
            int low = 0, high = n-1;
            while(low<=high)
            {
                int mid = low + (high-low)/2;
                if(arr[mid] == target)
                {
                    count++;
                    break;
                }
                else if(arr[mid]>target)
                high = mid - 1;
                else
                low = mid + 1;
            }
        }
        return count;
    }
};