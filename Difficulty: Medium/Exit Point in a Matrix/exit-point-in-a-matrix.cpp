class Solution {
  public:
    vector<int> exitPoint(vector<vector<int>>& mat) {
        // code here
         vector<int> ans;
        int n=mat.size(),m=mat[0].size();
        int i=0,j=0,k=1,f=1;
        while(i>=0&&i<n&&j>=0&&j<m){
            if(mat[i][j]==0){ if(k==1) j++;  else if(k==2) i++; else if (k==3) j--; else i--; }
              else{    mat[i][j]=0; f=k; 
                         if(k==1){  k=2; i++;  }
                    else if(k==2){  k=3; j--;  }
                    else if(k==3){  k=4; i--;   }
                    else if(k==4){  k=1;  j++;}
                  }
        }
        
             if (f==4&&k!=4) j--;
        else if (f==3&&k!=3) i++;
        else if (f==2&&k!=2) j++;
        else if (f==1&&k!=1) i--;
        else if (f==4&&k==4) i++;
        else if (f==3&&k==3) j++;
        else if (f==2&&k==2) i--;
        else if (f==1&&k==1) j--;
         ans.push_back(i);
         ans.push_back(j);
        return ans;
    }
};