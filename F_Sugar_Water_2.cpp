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

    int n,m,k;  cin >> n >> m >> k;

    vector<pair<double,double>> a(n),b(m);

    for(int i = 0;i<n;i++){
        double x,y; cin >> x >> y;
        a[i] = {x,y};
    }
    for(int i = 0;i<m;i++){
        double x,y; cin >> x >> y;
        b[i] = {x,y};
    }

    set<double> s;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            double val = 100 * (a[i].first + b[j].first)/(a[i].first + b[j].first + a[i].second + b[j].second);
            s.insert(val);
        }
    }

    vector<double> v(s.begin(),s.end());

    reverse(v.begin(),v.end());
    cout.precision(17);
    cout << v[k-1] << endl;

    return 0;
}