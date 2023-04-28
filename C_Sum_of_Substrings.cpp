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
    int n,op;   cin >> n >> op;

    string s;   cin >> s;

    int l = -1,r= -2;
    for(int i = 0;i<n;i++){
        if(s[i] == '1'){
            l = i;
            break;
        }
    }
    for(int i = n-1;i>=0;i--){
        if(s[i] == '1'){
            r = i;
            break;
        }
    }

    if( l == r){

        if(op>= n-1-r and s[n-1]=='0'){
            s[n-1] = '1';
            s[r] = '0';
        }
        else if(op >= l and s[0] == '0' and s[n-1] == '0'){
            s[0] = '1';
            s[l] = '0'; 
        }

    }
    else if(l != -1 and op != 0){
        if(op >= n-1-r and s[n-1]=='0'){
            s[n-1] = '1';
            s[r] = '0';
            op -= (n-1-r);            
        }

        if(op >= l and s[0] == '0'){
            s[0] = '1';
            s[l] = '0'; 
        }
    }

    int sum = 0;

    //dbug(s);

    for(int i = 0;i<n-1;i++){
        int x = s[i] - '0';
        int y = s[i+1] - '0';


        sum += x*10 + y;
    }

    cout << sum << endl;



}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}