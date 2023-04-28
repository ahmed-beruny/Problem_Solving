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
    int n,m;    cin >> n >> m;
    int x1,y1,x2,y2;    cin >> x1 >> y1 >> x2 >> y2;


    int ans = 4;

    if((x1==1 and y1 == 1) or (x1==1 and y1==m) or (x1==n and y1==m) or (x1==n and y1==1)){
        cout << 2 << endl;
        return;
    }
    if((x2==1 and y2 == 1) or (x2==1 and y2==m) or (x2==n and y2==m) or (x2==n and y2==1)){
        cout << 2 << endl;
        return;
    }

    if(abs(x1-x2)==1 and abs(y1-y2)==1){
        ans = min(m,n);
    }
    ans = min(ans,4LL);

    ans = min(ans,(x1*2)+1);
    ans = min(ans,(x2*2)+1);
    ans = min(ans,(y1*2)+1);
    ans = min(ans,(y2*2)+1);
    ans = min(ans,((n-x1+1)*2)+1);
    ans = min(ans,((n-x2+1)*2)+1);
    ans = min(ans,((m-y1+1)*2)+1);
    ans = min(ans,((m-y2+1)*2)+1);

    cout << ans << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}