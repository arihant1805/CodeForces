#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define b begin()
#define e end()
#define ll long long int
#define F(a,b) for(int i=a;i<b;i++)
#define F2(a,b) for(int j=a;j<b;j++)
#define Fn(a,b) for(int i=a;i>=b;i--)
#define Fn2(a,b) for(int j=a;j>=b;j--)
#define el cout<<endl;
#define pb push_back
#define Y cout<<"YES"<<endl;
#define N cout<<"NO"<<endl;
#define p(a) cout<<a<<endl;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
void solve(){
    int n;
    cin>>n;
    vector<pair<ll,ll>>a(n);
    F(0,n){
        cin>>a[i].first>>a[i].second;
        }
    sort(a.begin(),a.end());
    ordered_set s;
    ll ans=0;
    F(0,n){
        ans+=(s.size()-s.order_of_key(a[i].second));
        s.insert(a[i].second);
    }
    p(ans)
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int tt=1;
    cin>>tt;
    while(tt--)solve();
    return 0;
}
