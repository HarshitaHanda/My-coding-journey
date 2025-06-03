// User function Template for C++

class Solution {
  public:
    int minimumDays(int S, int N, int M) {
        // code here
        int sunday=S/7;
        int buyingdays=S-sunday;
        int totalfood=S*M;
        int ans=0;
        
        // If daily need is more than we can possibly store for a Sunday
if (N < M) return -1;

// Special case: If you need more food than you can store across the week
if (((N - M) * 6) < M && S > 6) return -1;

        
        if(totalfood%N==0){
            ans=totalfood/N;
            
        } 
        else{
             ans= totalfood/N +1;
             
        }
        if(ans<=buyingdays) {return ans;}
        else {return -1;}
        
        
        
    }
};