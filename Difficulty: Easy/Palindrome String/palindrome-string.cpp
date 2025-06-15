class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        int l=0, r=s.length()-1;
        while(l<=r){
            if(s[l]!=s[r]) return false;
            r--,l++;
        } return true;
    }
};