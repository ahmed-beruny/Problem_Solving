#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _input(x) for(auto &it:x)cin >> it
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
const long long mod = 1e9 + 7;

void solve(){
    int n,k;    cin >> n >> k;
    vector<int> a(n);   _input(a);
    int ans = INT_MAX;


    for(int i = 1;i<n;i++){

        vector<int> b(a.begin(),a.begin()+i);
        vector<int> c(a.begin()+i,a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());

        if(b.size()>c.size())swap(b,c);

        // _print(b);
        // _print(c);

        for(int i = 1;i<b.size();i++)b[i] += b[i-1];
        for(int i = 1;i<c.size();i++)c[i] += c[i-1];

        int l = 0,r=b.size()-1;
        int mid = 0;
        while(l<r){
            mid = (l+r)/2;
            if(k-2-mid<0)r=mid;
            else if(k-2-mid>=c.size())l=mid;
            else if(b[mid] - c[k-2-mid] == 0)break;
            else if(b[mid] - c[k-2-mid] > 0)r=mid;
            else l=mid;

            if(r==l)break;

            if(r-l==1){
                if(k-2-r<0)mid = l;
                else if(k-2-l>=c.size())mid = r;
                else if(abs(b[l] - c[k-2-l]) < abs(b[r] - c[k-2-r]))mid = l;
                else mid = r;
                break;
            }

        }

        ans = min(ans,max(b[mid],c[k-2-mid]));

    }
    sort(a.begin(),a.end());
    if(k == 1)ans = a[0];
    if(k == 2){
        ans = a[1];
    }

    cout << ans << endl;

}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}