#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define dbug(x) cout << #x << " = " << x << endl
#define _input(x) for(auto &it:x)cin >> it
#define _print(x) for(auto it:x){cout << it << " ";}cout << endl
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
const long long mod = 1e9 + 7;

vector<int> a,seg,lazy;

void build(int idx,int left,int right){
    if(left == right){
        seg[idx] = a[left];
        return;
    }
    int mid = (left+right)/2;
    build(2*idx+1,left,mid);
    build(2*idx+2,mid+1,right);

    seg[idx] = seg[2*idx+1] + seg[2*idx+2];
}

int query(int idx,int left,int right,int l,int r){

    if(left>r || right < l)return 0;

    if(left>=l && right<=r)return seg[idx];

    int mid = (left + right)/2;

    int lsum = query(2*idx+1,left,mid,l,r);
    int rsum = query(2*idx+2,mid+1,right,l,r);

    return lsum+rsum;
}

void update(int idx,int left,int right,int pos,int val){
    if(left == right){
        seg[idx] = val;
        return;
    }

    int mid = (left + right)/2;

    if(pos <= mid){
        update(idx*2+1,left,mid,pos,val);
    }
    else{
        update(idx*2+2,mid+1,right,pos,val);
    }
    seg[idx] = seg[2*idx+1] + seg[2*idx+2];
}

//range update

void updateRange(int idx,int left,int right,int l,int r,int val){
    if(lazy[idx] != 0){
        seg[idx] += (right-left+1)*lazy[idx];
        if(left != right){
            lazy[2*idx+1] += lazy[idx];
            lazy[2*idx+2] += lazy[idx];
        }
        lazy[idx] = 0;
    }

    if(left > r || right < l)return;

    if(left >= l && right <= r){
        seg[idx] += (right-left+1)*val;
        if(left != right){
            lazy[2*idx+1] += val;
            lazy[2*idx+2] += val;
        }
        return;
    }

    int mid = (left + right)/2;

    updateRange(2*idx+1,left,mid,l,r,val);
    updateRange(2*idx+2,mid+1,right,l,r,val);

    seg[idx] = seg[2*idx+1] + seg[2*idx+2];
}


//query sum lazy

int queryRange(int idx,int left,int right,int l,int r){
    if(lazy[idx] != 0){
        seg[idx] += (right-left+1)*lazy[idx];
        if(left != right){
            lazy[2*idx+1] += lazy[idx];
            lazy[2*idx+2] += lazy[idx];
        }
        lazy[idx] = 0;
    }

    if(left > r || right < l)return 0;

    if(left >= l && right <= r)return seg[idx];

    int mid = (left + right)/2;

    int lsum = queryRange(2*idx+1,left,mid,l,r);
    int rsum = queryRange(2*idx+2,mid+1,right,l,r);

    return lsum+rsum;
}

void solve(){
    vector<int> a(3);

    seg.resize(4*a.size());
    lazy.resize(4*a.size());
    build(0,0,a.size()-1);

}

int32_t main(){
    fastio;
    int t=1;  //cin >> t;
    while(t--)solve();

    return 0;
}