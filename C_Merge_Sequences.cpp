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


int32_t main(){
    fastio;

    int n,m;    cin >> n >> m;

    vector<int> posA,posB;

    vector<int> a(n),b(m);

    for(int i = 0;i<n;i++)cin >> a[i];
    for(int i = 0;i<m;i++)cin >> b[i];
    int cnt = 1;
    int p1 = 0,p2=0;
    for(int i = 0;i<n+m;i++){
        if(p1>=n){
            for(int j = p2;j<m;j++){
                posB.push_back(cnt);
                cnt++;
            }break;
        }
        else if(p2>=m){
            for(int j = p1;j<n;j++){
                posA.push_back(cnt);
                cnt++;
            }break;           
        }
        if(a[p1]<b[p2]){
            posA.push_back(cnt);
            cnt++;
            p1++;
        }
        else if(a[p1] > b[p2]){
            posB.push_back(cnt);
            cnt++;
            p2++;
        }

    }

    _print(posA);
    _print(posB);

    return 0;
}