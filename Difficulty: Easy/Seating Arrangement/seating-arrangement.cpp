class Solution {
  public:
    bool canSeatAllPeople(int k, vector<int> &seats) {
        // code here
      int n = seats.size();

    for(int i = 1; i < n; i++) {
        if(seats[i] == 1 && seats[i-1] == 1)
            return false;
    }

    for(int i = 0; i < n; i++) {
        if(seats[i] == 0) {
            bool leftEmpty = (i == 0 || seats[i-1] == 0);
            bool rightEmpty = (i == n-1 || seats[i+1] == 0);

            if(leftEmpty && rightEmpty) {
                seats[i] = 1;
                k--;
            }
        }
    }

    return k <= 0;
    }
};