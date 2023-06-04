#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _input(x) for(auto &it:x)cin >> it
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
const long long mod = 998244353;

vector<ll>dp_fact(1e6,-1);
ll fact(ll n){
    if(dp_fact[n]!=-1)return dp_fact[n];
    if(n == 0)return 1;
    return dp_fact[n] = ((n%mod)*fact(n-1)) % mod;
}


ll power(ll a, ll b){
  if(b == 0)return 1;
  return (b%2 == 0) ? (power((a * a)%mod,b/2))%mod : (a * power(a,b-1))%mod;
}

bool impossible = false;

int ans = 1;

vector<int> a,seg,lazy;

void build(int idx,int left,int right){
    if(left == right){
        seg[idx] = a[left];
        return;
    }
    int mid = (left+right)/2;
    build(2*idx+1,left,mid);
    build(2*idx+2,mid+1,right);

    int mx = max(seg[2*idx+1], seg[2*idx+2]);
    int mn = min(seg[2*idx+1], seg[2*idx+2]);

    int depth = log2(idx+1);

    int val = power(2,depth);

    if(mx!=-1 and mn!=-1){
        //dbug(idx);
        if(mn>val or mx<=val)
            impossible = true;
    }

    if(mn == -1)mn = mx;

    if(mn <= val)seg[idx] = mn;


}

void dfs(int idx,int left,int right){
    if(left == right)return;
    int mid = (left+right)/2;
    dfs(2*idx+1,left,mid);
    dfs(2*idx+2,mid+1,right);

    if(seg[2*idx+1] == -1 and seg[2*idx+2] == -1)ans = (ans*2)%mod;

}



void solve(){
    int depth;  cin >> depth;

    int n = power(2,depth);

    a.resize(n);    _input(a);
    seg.assign(2*n-1,-1);
    build(0,0,n-1);

    //_print(seg);

    dfs(0,0,n-1);

    //dbug(ans);
    for(int i = 2;i<=depth;i++){
        int st = power(2,i)-1;
        int cnt = 0;
        int val = power(2,i)/2;
        for(int j = st;j<st+power(2,i);j++){
            if(seg[j]>val)cnt++;
        }
        //dbug(fact(val-cnt));
        ans = (ans*fact(val-cnt))%mod;

    }

    if(impossible)cout << 0 << endl;
    else cout << ans << endl;

}

int32_t main(){
    fastio;
    int t=1;  //cin >> t;
    while(t--)solve();

    return 0;
}