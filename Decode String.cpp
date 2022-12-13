class Solution {
public:
    string decodeString(string s) {
        stack<string> stack;
        string curStr = "";
        int curNum = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='['){
                stack.push(curStr);
                stack.push(to_string(curNum));
                curNum = 0;
                curStr = "";
                i++;
            }
            if(s[i]==']'){
                int num = stoi(stack.top());
                stack.pop();
                string prevStr = stack.top();
                stack.pop();
                string mulStr="";
                while(num!=0){
                    mulStr+=curStr;
                    num--;
                }
                curStr = prevStr + mulStr;
            }
            if(isdigit(s[i]))curNum = curNum *10+(s[i]-'0');
            else if(s[i]!=']')curStr+=s[i];
        }
        return curStr;
    }
};