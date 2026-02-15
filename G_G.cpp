#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        priority_queue<ll, vector <ll>, greater <ll>> pq; //minHEAP
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            pq.push(x);
        }
        ll sum = 0;
        while(pq.size() > 1){
            ll a = pq.top(); pq.pop();
            ll b = pq.top(); pq.pop();
            ll res = a + b;
            sum += res;
            pq.push(res);
        }
        cout << sum << endl;
    }
}