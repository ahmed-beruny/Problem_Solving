#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const ll mod = 1e9 + 7;

const int N = 32005;
vector<bool> mark(N+1,1);
vector<ll> prm;
void sieve_prime(){
    for(ll i = 2;i<N;i++){
        if(mark[i]==0)continue;
        prm.pb(i);
        for(ll j = i*i;j<N;j+=i){
            if(mark[j]==1)mark[j]=0;
        }
    }
}

vector<int> spf(N+1,1);

void generate_spf(){
    for(int i = 2;i<=N;i++)spf[i] = i;

    for(int i = 2;i<=N;i++){
        if(spf[i] == i){
            for(int j = i*i;j<=N;j+=i){
                spf[j] = i;
            }
        }
    }
}
vector<int> prime_factors(int n){
    set<int> factors;
    while(n>1){
        factors.insert(spf[n]);
        n /= spf[n];
    }
    return vector<int>(factors.begin(),factors.end());
}

vector<ll>dp_fact(1e6,-1);
ll fact(ll n){
    if(dp_fact[n]!=-1)return dp_fact[n];
    if(n == 1)return 1;
    return dp_fact[n] = ((n%mod)*fact(n-1)) % mod;
}
ll modexp(ll a, ll b = mod-2){
  if(b == 0)return 1;
  if(b%2==0){
    return(modexp((a%mod * a%mod)%mod,b/2))%mod;
  }
  else
    return (a%mod * modexp(a,b-1))%mod;
}

ll nCr(ll n, ll r){
    if(n==r or r==0)return 1;
    else if(r>n or r<0)return -1;
    ll div = (fact(n-r)*fact(r))%mod;
    return (fact(n)*modexp(div))%mod;
}

vector<vector<pair<int,int>>> g;
vector<int> previous_node;
vector<ll> distances;
 


void solve(){

    sieve_prime();
    for(int i = 0;i<100;i++){
        cout << prm[i] << " ";
    }
    cout << endl;

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}