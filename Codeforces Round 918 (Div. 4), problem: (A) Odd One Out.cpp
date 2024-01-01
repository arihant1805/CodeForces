#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F(a,b) for(int i=a;i<b;i++)
#define F2(a,b) for(int j=a;j<b;j++)
#define Fn(a,b) for(int i=a;i>=b;i--)
#define Fn2(a,b) for(int j=a;j>=b;j--)
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b){
        cout<<c<<endl;
    }else{
        if(b==c){
            cout<<a<<endl;
        }else{
            cout<<b<<endl;
        }
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
