#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F(a,b) for(int i=a;i<b;i++)
#define F2(a,b) for(int j=a;j<b;j++)
#define Fn(a,b) for(int i=a;i>=b;i--)
#define Fn2(a,b) for(int j=a;j>=b;j--)
bool check(char c){
     return !(c=='b'||c=='d'||c=='c'||c=='.');
}
void solve(){
    int n;
    cin>>n;
    char x;
    vector<char> ans;
    F(0,n){
        char c;
        cin>>c;
        ans.push_back(c);
    }
    F(2,n){
        if(!check(ans.at(i-1))&&!check(ans.at(i))){
            ans.insert(ans.begin()+i,'.');
            i++;n++;
        }else if(check(ans.at(i))&&check(ans.at(i-2))){
            ans.insert(ans.begin()+i-1,'.');
            i++;n++;
        }
        
    }
    n=ans.size();
    F(0,n)cout<<ans.at(i);
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int tt=1;
    cin>>tt;
    while(tt--)solve();
    return 0;
}
