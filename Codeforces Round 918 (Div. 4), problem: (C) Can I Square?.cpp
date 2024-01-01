#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F(a,b) for(int i=a;i<b;i++)
#define F2(a,b) for(int j=a;j<b;j++)
#define Fn(a,b) for(int i=a;i>=b;i--)
#define Fn2(a,b) for(int j=a;j>=b;j--)
void solve(){
    int n;
    cin>>n;
    long long s=0;
    F(0,n){
        int x;
        cin>>x;
        s+=x;
    }
    long long sr=sqrt(s);
    if((sr*sr)==s){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int tt=1;
    cin>>tt;
    while(tt--)solve();
    return 0;
}
