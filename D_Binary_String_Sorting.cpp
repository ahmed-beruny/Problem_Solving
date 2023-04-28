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
const long long c = 1e12;

void solve(){
    string s;   cin >> s;
    int n = s.size();

    vector<int> l_zeros(n,0),r_zeros(n,0),l_ones(n,0),r_ones(n,0);
    if(s[0] == '1'){
        l_ones[1] = 1;
    }else{
        l_zeros[1] = 1;
    }
    
    for(int i = 2;i<n;i++){
        if(s[i-1] == '1'){
            l_ones[i] = l_ones[i-1] + 1;
            l_zeros[i] = l_zeros[i-1];
        }
        if(s[i-1] == '0'){
            l_ones[i] = l_ones[i-1];
            l_zeros[i] = l_zeros[i-1] + 1;
        }
    }
    for(int i = 2;i<n;i++){
        if(s[i-1] == '1'){
            l_ones[i] = l_ones[i-1] + 1;
            l_zeros[i] = l_zeros[i-1];
        }
        if(s[i-1] == '0'){
            l_ones[i] = l_ones[i-1];
            l_zeros[i] = l_zeros[i-1] + 1;
        }
    }
    
    if(s[n-1] == '1'){
        r_ones[n-2] = 1;
    }else{
        r_zeros[n-2] = 1;
    }
    
    for(int i = n-3;i>=0;i--){
        if(s[i+1] == '1'){
            r_ones[i] = r_ones[i+1] + 1;
            r_zeros[i] = r_zeros[i+1];
        }
        if(s[i+1] == '0'){
            r_ones[i] = r_ones[i+1];
            r_zeros[i] = r_zeros[i+1] + 1;
        }
    }
    for(int i = n-3;i>=0;i--){
        if(s[i+1] == '1'){
            r_ones[i] = r_ones[i+1] + 1;
            r_zeros[i] = r_zeros[i+1];
        }
        if(s[i+1] == '0'){
            r_ones[i] = r_ones[i+1];
            r_zeros[i] = r_zeros[i+1] + 1;
        }
    }

    // _print(l_ones);
    // _print(r_ones);
    // _print(l_zeros);
    // _print(r_zeros);

    int ans = 1e18;

    for(int i = 0;i<n;i++){
        int tmp = 0;
        if(s[i] == '1'){
            int l = l_ones[i];
            int r = r_zeros[i];

            if(i!=n-1){
                if(s[i+1] == '0'){
                    tmp += c;
                    r--;

                }
            }
            tmp += (c+1)*(l+r);
            ans = min(ans,tmp);
        }
        
    }

    for(int i = 0;i<n;i++){
        int tmp = 0;
        if(s[i] == '0'){
            int l = l_ones[i];
            int r = r_zeros[i];

            if(i!=0){
                if(s[i-1] == '1'){
                    tmp += c;
                    l--;

                }
            }
            tmp += (c+1)*(l+r);
            ans = min(ans,tmp);
        }
        
    }
    cout << ans << endl;
}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();
    
    return 0;
}