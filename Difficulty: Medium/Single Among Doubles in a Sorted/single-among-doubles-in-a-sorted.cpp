class Solution {
  public:
    int single(vector<int>& arr) {
        // code here
        int x = 0;
        for(int i=0;i<arr.size();i++)
        x^=arr[i];
        
        return x;
        
    }
};