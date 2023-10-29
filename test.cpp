#include <bits/stdc++.h>  
#define int long long  
using namespace std;
void sol() {
    int n, d; cin>>n>>d;
    vector<int> vec(n);
    int ans = 0;
    for(int &u: vec) cin>>u;
    for(int i=1 ; i<n ; i++) {
        if(vec[i]>vec[i-1]) continue;
        int diff = vec[i-1]-vec[i];
        int times = diff/d+1;
        ans+=times;
        vec[i] += d*times;
    }
    cout<<ans<<endl;
}
signed main() {  
    int t=1;
    // cin>>t;
    while(t--) {sol();} 
}  