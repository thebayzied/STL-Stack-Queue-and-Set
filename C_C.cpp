#include<bits/stdc++.h>
using namespace std;
int main (){
    int n, q; cin >> n >> q;
    vector <priority_queue<int>> pq(n);
    while(q--){
        int a; cin >> a;
        if(a == 0){
            int t, x; cin >> t >> x;
            pq[t].push(x);
        }
        else if(a == 1){
            int t; cin >> t;
            if(pq[t].empty()) continue;
            else cout << pq[t].top() << endl;
        }
        else if(a == 2){
            int t; cin >> t;
            if(pq[t].empty()) continue;
            else pq[t].pop();
        }
    }
}