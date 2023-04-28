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
    int a,b,c,d;    cin >> a >> b >> c >> d;
    string s;   cin >> s;
    int n = s.size();
    int cntC = 0,cntD = 0;

    int as = 0,bs=0;

    for(auto it:s){
        if(it == 'A')as++;
        else bs++;
    }

    if(as != a+c+d or bs != b+c+d){
        cout << "NO" << endl;
        return;
    }
    string tmp = s;
    if(c>d){

        for(int i = 0;i<n-1;i++){
            if(s[i] == 'A' and s[i+1] == 'B' and cntC < c){
                cntC++;
                i++;
                s[i+1] = s[i] = '.';
            }
        }
        for(int i = 0;i<n-1;i++){
            if(s[i] == 'B' and s[i+1] == 'A' and cntD < d){
                cntD++;
                i++;
            }
        }
    }
    else if(c<d){
        
        for(int i = 0;i<n-1;i++){
            if(s[i] == 'B' and s[i+1] == 'A' and cntD < d){
                cntD++;
                i++;
                s[i] = s[i+1] = '.';
            }
        }

        for(int i = 0;i<n-1;i++){
            if(s[i] == 'A' and s[i+1] == 'B' and cntC < c){
                cntD++;
                i++;
            }
        }

    }

    if(c == cntC and d == cntD){
        cout << "YES" << endl;    
    }
    else{
        cout << "NO" << endl;
    }

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}