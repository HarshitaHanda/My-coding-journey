

class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        // Your code here
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            int x=s[i]-'a';
            arr[x]++;
        }
        int maxi=-1, ans=0;
        for(int i=0;i<26;i++){
            if(maxi<arr[i]){
                maxi=arr[i];
                ans=i;
            }
        }
        ans=ans+'a';
        return ans;
    }
};