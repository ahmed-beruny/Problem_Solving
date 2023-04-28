#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
using namespace std;
const long long mod = 1e9 + 7;

void solve(){
    string s;   cin >> s;
    int cnt = 0,q=0;
    char exp = '2';

    int n = s.size();

    int ans = 0;
    for(int i = 0;i<n;i++){
        //dbug(q);
        if(s[i] == '?'){
            cnt++;
            q++;
            if(exp == '2')continue;
            if(exp == '1')exp = '0';
            else if(exp == '0')exp = '1';
        }
        else if(exp == '2'){
            q=0;
            cnt++;
            if(s[i] == '0')exp = '1';
            else exp = '0';
        }
        else if(s[i] == '0'){
            if(exp == '1'){
                ans += (cnt*(cnt+1))/2;
                ans -= (q*(q+1))/2;

                cnt = q+1;
                q=0;
            }
            else if(exp == '0'){
                cnt++;
                q = 0;
                exp = '1';
            }
        }
        else if(s[i]=='1'){
            if(exp == '0'){
                ans += (cnt*(cnt+1))/2;
                ans -= (q*(q+1))/2;   

                cnt = q+1;
                q=0;             
            }
            else if(exp == '1'){
                cnt++;
                q = 0;
                exp = '0';
            }
        }
    }

    ans += (cnt*(cnt+1))/2;

    cout << ans << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}