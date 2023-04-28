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

void solve(){
    string s;   cin >> s;

    map<char,int> m;

    char c = 'a';
    int mx = 0;

    for(auto it:s){
        m[it]++;
        if(m[it]>mx){
            mx = m[it];
            c = it;
        }
    }

    int ans = 0;
    int n = s.size();
    if(mx==1){
        while(n>1){
            n/=2;
            ans++;
        }

        cout << ans << endl;
        return;
    }


    
    int final_l = n;
    for(char j = 'a';j<='z';j++){

            int l = 0;
            int cnt = 0;
            for(int i = 0;i<n;i++){
                if(s[i]==j){
                    cnt = 0;
                    continue;
                }
                cnt++;
                l = max(l,cnt);
            }

            final_l = min(final_l,l);

    }


    //dbug(final_l);
    while(final_l>0){
        final_l/=2;
        ans++;
    }

    

    cout << ans << endl;


}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}