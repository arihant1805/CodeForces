#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F(a,b) for(int i=a;i<b;i++)
#define F2(a,b) for(int j=a;j<b;j++)
#define Fn(a,b) for(int i=a;i>=b;i--)
#define Fn2(a,b) for(int j=a;j>=b;j--)
void solve(){
    int a=0,b=0,c=0;
    F(0,9){
        char x;
        cin>>x;
        if(x=='A')a++;
        if(x=='B')b++;
        if(x=='C')c++;
    }
    if(a<b){
        cout<<"A"<<endl;
    }else{
        if(c<b){
            cout<<"C"<<endl;
        }else{
            cout<<"B"<<endl;
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
