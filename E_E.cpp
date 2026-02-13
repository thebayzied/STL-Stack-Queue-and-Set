#include<bits/stdc++.h>
using namespace std;
int main (){
    int n, k; cin >> n >> k;
    queue<pair <string, int>> q;
    for(int i = 0; i < n; i++){
        string name;
        int time;
        cin >> name >> time;
        q.push({name, time});
    }
    int ans = 0;
    while(!q.empty()){
        auto p = q.front();
        // pair <string, int> p = q.front();
        q.pop();
        string name = p.first;
        int time = p.second;
        if(time <= k){
            ans += time;
            cout << name << " " << ans << endl;
        }
        else{
            ans += k;
            q.push({name, time - k});
        }
    }
}