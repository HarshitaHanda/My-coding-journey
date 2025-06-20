class Solution {
public:
    int getSum(int x){
        int sum=0;
        while(x>0){
            int digit=x%10;
            sum+=digit*digit;
            x=x/10;
        } return sum;
    }
    bool isHappy(int n) {
        if(n==1) return true;
        int slow=n;
        int fast=getSum(n);
        while(fast != 1 && slow != fast){
            slow=getSum(slow);
            fast=getSum(getSum(fast));
        } return fast==1;
    }
};