#include<bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    queue <int> q;
    while(t--){
        int a; cin >> a;
        if(a == 1){
            int n; cin >> n;
            q.push(n);
        }
        else if(a == 2){
            if(q.empty()) continue;
            else q.pop();
        }
        else if(a == 3){
            if(q.empty()) cout << "Empty!" << endl;
            else cout << q.front() << endl; 
        }
    }
}