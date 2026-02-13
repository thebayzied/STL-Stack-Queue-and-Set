#include<bits/stdc++.h>
using namespace std;
int main (){
    int n, q; cin >> n >> q;
    vector <stack <int>> s(n);
    while(q--){
        int a; cin >> a;
        if(a == 0){
            int t, x; cin >> t >> x;
            s[t].push(x);
        }
        else if(a == 1){
            int t; cin >> t;
            if(s[t].empty()) continue;
            else cout << s[t].top() << endl;
        }
        else if(a == 2){
            int t; cin >> t;
            if(s[t].empty()) continue;
            else s[t].pop();
        }
    }
}