

class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        // Your code here
        map<char, int> mp;
        for(char i: s){
            mp[i]++;
        } int cnt=INT_MIN; char ch;
        for(auto it: mp){
            if(it.second>cnt){
                cnt=it.second;
                ch=it.first;
            }
        } return ch;
    }
};