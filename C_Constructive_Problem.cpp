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

int find_mex(vector <int> &v)
{
   set<int> s;
   for(int i = 0 ; i < v.size() ; i++)
   {
      if(v[i] < v.size())
      {
         s.insert(v[i]);
      }
   }
   vector<int> w(s.begin(),s.end());
   //sort(w.begin(), w.end());
   int i;
   for(i = 0 ; i < w.size() ; i++)
   {
      if(w[i] != i)
      {
         return i;
      }
   }
   return i;
}

void solve(){
    int n;  cin >> n;
    vector<int> a(n);

    unordered_map<int,int> m;

    for(int i = 0;i<n;i++){
        cin >> a[i];
        m[a[i]]++;
    }

    int mex = find_mex(a);

    //dbug(mex);

    if(mex == 0){
        cout << "Yes" << endl;
        return;
    }

    if(mex == n){
        cout << "No" << endl;
        return;
    }

    mex++;
    int last = -1;
    for(int i = 0;i<n;i++){

        if(last != -1 and a[i]!=mex)break;

        if(a[i] == mex){
            last = i;
        }
    }

    if(last == -1){
        cout << "Yes" << endl;
        return;
    }


    int chk = -1;

    for(int i = n-1;i>=0;i--){
        if(a[i] == mex){
            chk = i;
            break;
        }
    }

    // dbug(last);
    // dbug(chk);    

    if(last == chk){
        cout << "Yes" << endl;
        return;
    }

    for(int i = last+1;i<chk;i++){
        if(a[i] == mex)continue;

        if(a[i]<mex){
            m[a[i]]--;
            if(m[a[i]] <= 0){
                cout << "No" << endl;
                return;
            }
            
        }
    }


    cout << "Yes" << endl;


}

int32_t main(){
    fastio;
    int t=1;  cin >> t;
    while(t--)solve();

    return 0;
}