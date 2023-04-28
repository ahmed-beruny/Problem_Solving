#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const long long mod = 1e9 + 7;

int prefix_sum[200005];
vector<int> pos_zero;

void solve(){
    int n;  cin >> n;

    pos_zero.clear();

    int zeros = 0;

    for(int i = 0;i<n;i++){
        int val;    cin >> val;
        if(val == 0)pos_zero.push_back(i);
        if(i == 0)prefix_sum[i] = val;
        else{
            prefix_sum[i] = prefix_sum[i-1] + val;
        }
        if(prefix_sum[i] == 0)zeros++;
    }

    int ans = 0;

    if(pos_zero.size() == 0){
        cout << zeros << endl;
        return;
    }

    if(pos_zero[0]!=0){
        for(int i = 0;i<pos_zero[0];i++){
            if(prefix_sum[i] == 0)ans++;
        }
    }

    for(int i = 0;i<pos_zero.size()-1;i++){


        map<int,int> m;
        int mx = 0;
        for(int j = pos_zero[i];j<pos_zero[i+1];j++){
            m[prefix_sum[j]]++;
            mx = max(mx,m[prefix_sum[j]]);
        }
        ans += mx;
    }
    map<int,int> m;
    int mx = 0;
    for(int i = pos_zero[pos_zero.size()-1];i<n;i++){
            m[prefix_sum[i]]++;
            mx = max(mx,m[prefix_sum[i]]);        
    }

    ans += mx;

    cout << ans << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}