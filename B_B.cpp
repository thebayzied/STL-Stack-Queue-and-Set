#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q; cin >> n >> q;
    vector <queue <int>> qe(n);
    while(q--){
        int a; cin >> a;
        if(a == 0){
            int t, x; cin >> t >> x;
            qe[t].push(x);
        }
        else if(a == 1){
            int t; cin >> t;
            if(qe[t].empty()) continue;
            else cout << qe[t].front() << endl;
        }
        else if(a == 2){
            int t; cin >> t;
            if(qe[t].empty()) continue;
            else qe[t].pop();
        }
    }
}