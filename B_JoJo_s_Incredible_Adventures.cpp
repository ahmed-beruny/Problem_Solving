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
    int n = s.size();

    int mx = 0;

    bool zero = false;

    int cnt = 0;
    if(s[0] == '1')cnt = 1;
    else zero = true;

    mx = max(mx,cnt);

    for(int i = 1;i<n;i++){
        if(s[i]=='1')cnt++;
        else {cnt=0;zero = true;}

        mx = max(mx,cnt);
    }

    if(zero){
        int c = 0;
        for(int i = 0;s[i]!='0';i++){
            c++;
        }

        for(int i = n-1;s[i]!='0';i--){
            c++;
        }

        mx = max(mx,c);
    }





    if(zero == false){
        cout << n*n << endl;
        return;
    }
    else if(mx == 0){
        cout << 0 << endl;
        return;
    }
    else{
        mx++;
        int mid = (mx)/2;

        

        cout << mid*(mx-mid) << endl;
    }



}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}