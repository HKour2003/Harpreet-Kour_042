class Solution {
public:
    string removeDuplicateLetters(string s) {
map<char,int>f;
stack<char>st;
map<char,bool>visit;

 for (auto i : s) {
            f[i]++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (visit[s[i]]) {
                f[s[i]]--;
                continue;
            }
            while (!st.empty() && st.top() > s[i] && f[st.top()] > 0) {
                visit[st.top()] = false;
                st.pop();
            }        
            st.push(s[i]);
            visit[s[i]] = true;
            f[s[i]]--;
        }
        string result = "";
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
 reverse(result.begin(), result.end());

        return result;
    }
};
