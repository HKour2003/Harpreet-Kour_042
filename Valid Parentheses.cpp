class Solution {
public:
    bool isValid(string s) {
       stack<char>stack;
        for(auto i:s ){
            if(i=='('||i=='{'||i=='['){
                stack.push(i);
            }
            else if (i==')'){
                if(stack.empty()||stack.top()!='('){
              return false;

                }
                else{
               stack.pop();
                }
            }
            else if (i==']'){
                if(stack.empty()||stack.top()!='['){
                  return false;
                }
                else{
                    stack.pop();
                }}
                else if (i=='}'){
                if(stack.empty()||stack.top()!='{'){
                    return false;
                }
                else{
                   stack.pop();
                }

            }
        }
        return stack.empty();
            
    }
};
