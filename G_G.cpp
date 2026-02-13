#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        priority_queue<int, vector <int>, greater <int>> pq; //minHEAP
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            pq.push(x);
        }
        ll sum = 0;
        while(pq.size() > 1){
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            int res = a + b;
            sum += res;
            pq.push(res);
        }
        cout << sum << endl;
    }
}