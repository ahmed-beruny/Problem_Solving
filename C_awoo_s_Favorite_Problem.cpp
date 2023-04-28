#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
const long long mod = 1e9 + 7;

void solve(){
    int n;  cin >> n;
    string a,b; cin >> a >> b;
    string c = "",d="",e="",f="";
    for(auto it:a){
        if(it != 'b'){
            c += it;
        }
    }
    for(auto it:b){
        if(it != 'b'){
            d += it;
        }
    }
    for(auto it:a){
        if(it != 'c'){
            e += it;
        }
    }
    for(auto it:b){
        if(it != 'c'){
            f += it;
        }
    }

    if(c!=d){
        cout << "NO" << endl;
        return;
    }

    //dbug(e);
    //dbug(f);

    for(int i = 0;i<n-1;i++){
        if(e[i] == f[i])continue;

        else if(e[i] != f[i] and e[i] =='a' and e[i+1] == 'b'){
            swap(e[i],e[i+1]);
        }
    }


    vector<int> cnt_e,cnt_f;

    int cnt = 0;
    for(auto it:e){
        if(it == 'a')cnt++;
        else{
            cnt_e.push_back(cnt);
        }
    }
    cnt = 0;
    for(auto it:f){
        if(it == 'a')cnt++;
        else{
            cnt_f.push_back(cnt);
        }
    }


    for(int i = 0;i<cnt_e.size();i++){
        if(cnt_e[i] < cnt_f[i]){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;



}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}