class Solution {
public:
    int compress(vector<char>& chars) {
        int rewrite=0;
        for(int i=0;i<chars.size();i++){
            char ch=chars[i];
            int count=0;
            while(i<chars.size() && ch==chars[i]){
                count++, i++;
            }
            if(count==1) {
                chars[rewrite]=ch;
                rewrite++;
            }
            else{
                chars[rewrite]=ch;
                rewrite++;
                string str=to_string(count);
                for(char c: str){
                    chars[rewrite]=c;
                    rewrite++;
                }
            } i--;

        } return rewrite;
    }
};