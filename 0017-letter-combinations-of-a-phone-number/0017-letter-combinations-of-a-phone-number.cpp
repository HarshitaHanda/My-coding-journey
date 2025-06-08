class Solution {
public:
    void solve(string digit, string mapping[], vector<string>& ans, int index, string output){
        if(output.length()>=digit.length()){
            ans.push_back(output);
            return;
        }
        int number=digit[index]-'0';
        string value=mapping[number];

        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digit, mapping, ans, index+1, output);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
       // vector<string> mp={"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans; 
        if(digits=="") return ans;
        solve(digits, mapping, ans, 0, "");
        return ans;        
    }
};