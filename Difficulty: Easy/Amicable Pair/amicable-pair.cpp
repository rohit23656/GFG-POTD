
class Solution {
  public:
    int isAmicable(int A, int B) {
        // code here
        int suma=0,sumb=0;
        for(int i=1;i<sqrt(A);i++)
        {
            if(A%i==0)
            {
            suma += i;
            if(i!=A/i && A/i!=A )
            suma += A/i;
            }
        }
         for(int i=1;i<sqrt(B);i++)
        {
            if(B%i==0)
            {
            sumb += i;
            if(i!=B/i && B/i!=B )
            sumb += B/i;
            }
        }
        if(suma==B && sumb==A)
        return 1;
        else
        return 0;
    }
};