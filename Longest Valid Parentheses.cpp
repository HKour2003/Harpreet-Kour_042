/* approach 1
    class Solution {
public:
    int longestValidParentheses(string s) {
      stack<int> st;
      int n=s.length();
      st.push(-1);
      int maxl=0;
      for(int i=0;i<s.length();i++){
          if(s[i]=='('){
                st.push(i);
          }
          else{
             st.pop();
             if(st.empty()){
                    st.push(i);
                }
                else{
                    maxl = max(maxl,i - st.top());
                }
      }  
    }
    return maxl;
    }
};
*/
// approach 2
class Solution {
public:

    int longestValidParentheses(string s) {
        
        int count1=0;
        int count2=0;
        int maxl=0;
        int max2=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count1++;
            }
            else if(s[i]==')'){
                count2++;
            }
            if(count1==count2){
                maxl=max(maxl,count1+count2);
            }
            else if(count1 < count2){
                count1=0;
                count2=0;
            }
            }
count1=count2=0;            
            for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='('){
                count1++;
            }
            else if(s[i]==')'){
                count2++;
            }
            if(count1==count2){
                max2=max(max2,count1+count2);
            }
            else if(count1 > count2){
                count1=0;
                count2=0;
            }
            }
            int res= max(maxl,max2);
            return res;
            }
    };

    
