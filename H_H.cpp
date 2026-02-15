#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    for(int i = 1; i <= t; i++){
        int n; cin >> n;
        stack <int> st;
        stack <int> mx;
        cout << "Case " << i << ":" << '\n'; 
        for(int i = 0; i < n; i++){
            char ques; cin >> ques;
            if(ques == 'A'){
                int x; cin >> x;
                st.push(x);
                if(mx.empty() || x > mx.top()) mx.push(x);
            }
            else if(ques == 'R'){
                if(!st.empty()){
                    if(mx.top() == st.top()) mx.pop();
                    st.pop();
                }
            }
            else if(ques == 'Q'){   
                if(st.empty()) cout << "Empty" << '\n';
                else cout << mx.top() << '\n';
            }
        }
    }
}