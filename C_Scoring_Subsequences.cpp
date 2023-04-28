#include<iostream>
#include<math.h>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
#define ll long long
#define pb push_back
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
const ll mod = 1e9 + 7;

void solve(){
    int n;  cin >> n;
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
 
    for(int i = 1;i<=n;i++){
        int l = 1,r=i;
        int mid;
        while(l<=r){
            mid = (l+r)/2;
            if(l==r){
                break;
            }
            int pos = i-mid;
            
            if(a[pos]>mid){
                l = mid;
            }
            else{
                r = mid;
            }
 
            if(r-l==1){
                if(a[i-r]>=r){
                    mid = r;
                    break;
                }
                mid = l;
                break;
            }
 
        }
        cout << mid << " ";
    }
 
    cout << endl;
 
}

int main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}