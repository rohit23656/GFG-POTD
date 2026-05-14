class Solution {
  public:
   long long int optimalKeys(int N) {
        // code here
        if(N<7) return N;
        long long int ans=-1,temp;
        
        int quo,rem;
        int n=N;
        for(int i=1;i<N/2;i++)
        {
            n=n-1;
            quo=n/(i+1);
            rem=n%(i+1);
            
            temp=(long long int)pow(quo,i+1-rem);
            temp*=(long long int)pow(quo+1,rem);
            
            ans=max(ans,temp);
        }
        
        return ans;
    }
};