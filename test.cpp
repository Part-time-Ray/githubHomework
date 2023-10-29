#include <bits/stdc++.h>  
#define int long long  
using namespace std;
int mypow(int a, int b, int mod) {
    if(b==0) return 1%mod;
    if(b==1) return a%mod;
    int mid = mypow(a, b/2, mod);
    if(b%2) return a*mid%mod*mid%mod;
    return mid*mid%mod;
}
signed main() {  
    cout<<mypow(23, 1e9, 1e9+7)<<endl;
}  