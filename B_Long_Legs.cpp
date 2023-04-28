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

const int N = 32005;
vector<bool> mark(N+1,1);
vector<int> prm;
void sieve_prime(){
    for(int i = 2;i<N;i++){
        if(mark[i]==0)continue;
        prm.pb(i);
        for(int j = i*i;j<N;j+=i){
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

void solve(){
    int a,b;    cin >> a >> b;

    if(a>b)swap(a,b);

    int x = 1,y=b;

    while(x<y){
        if(mark[y] == 1)break;
        x*=spf[y];
        y/=spf[y];
    }

    if(x>y)swap(x,y);

    int ans = 0;

    ans = x-1;

    ans += (y);

    int prev = x;

    x = 1,y=a;

    while(x<y){
        if(mark[y] == 1)break;

        x*=spf[y];
        y/=spf[y];
    }

    if(x>y)swap(x,y);



    if(x>prev)ans += (x-prev);

    ans += (y);

    cout << ans << endl;

    

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    generate_spf();
    sieve_prime();
    while(t--)solve();

    return 0;
}