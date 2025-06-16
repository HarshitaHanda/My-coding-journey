// class Solution {
// public:
//     string reverseWords(string s) {
//         stack<string> st;string h="";
//         for(int i=0; i<s.length();i++){
//             if(s[i]!=' ') h+=s[i];
//             else{
//                 st.push(h);
//                // st.push(" ");
//                 h="";
//             }
//         }
//         if(!h.empty()) st.push(h);
//         string result="";
//          while (!st.empty()) {
//             result += st.top(); 
//             //result+=" ";
//             st.pop();
//             if (!st.empty()) result += " ";  // add space between words
//         } return result;
//     }
// };

class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word = "", result = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (!word.empty()) {
                    st.push(word);
                    word = "";
                }
            }
        }

        // Push the last word if exists
        if (!word.empty()) st.push(word);

        // Build result by popping from stack
        while (!st.empty()) {
            result += st.top();
            st.pop();
            if (!st.empty()) result += " ";
        }

        return result;
    }
};
