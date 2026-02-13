#include<bits/stdc++.h>
using namespace std;
int main (){
    stack <int> st;
    string s; getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            continue;
        }
        int n = s[i] - '0';
        if(s[i] == '+' || s[i] == '-' || s[i] == '*'){
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            int res = 0;
            if(s[i] == '+') res = a + b;
            else if(s[i] == '-') res = a - b;
            else if(s[i] == '*') res = a * b;
            st.push(res);  
        }
        else if (isdigit(s[i])){
            int num = 0;
            while(i < s.size() && isdigit(s[i])){
                num = num * 10 + (s[i] - '0');
                i++; // next number digit naki na for full numbers
            }
            st.push(num);
            i--; 
        }
    }
    cout << st.top() << endl;
}