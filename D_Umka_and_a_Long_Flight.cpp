#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
const long long mod = 1e9 + 7;

vector<int> f(50,-1);

int fib(int n){
    if(n==0 || n==1)return 1;
    if(f[n] != -1)return f[n];
    return f[n] = fib(n-1)+fib(n-2);
}



bool possible(int h,int w,int a,int b){
    // dbug(w);
    // dbug(h);
    // dbug(a);
    // dbug(b);
    // cout << endl;

    if(h==w)return true;

    if(w>h){

        int ls = b-1;
        int rs = w-b;

        if(ls<h and rs<h)return false;

        if(ls>=h)b = b-h;
        

        w = w-h;

        return possible(h,w,a,b);

    }
    else if(h>w){
        int us = a-1;
        int ds = h-a;

        if(us<w and ds<w)return false;

        if(us>=w)a = a-w;
        

        h = h-w;

        return possible(h,w,a,b);
    }


    return false;
}

void solve(){
    int n,a,b;  cin >> n >> a >> b;
    int h = fib(n);
    int w = fib(n+1);
    if(possible(h,w,a,b)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}