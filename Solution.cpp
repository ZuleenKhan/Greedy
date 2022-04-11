#include <bits/stdc++.h>
#define next '\n'
#define ll long long int
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int i,n,oc=0,zc=0;
        string s;
        cin>>s;
        n=s.size();
        for(i=0;i<n;++i){
            (s[i]=='1'? ++oc: ++zc);
        }
        cout<<(oc==zc ? oc-1 : min(oc,zc))<<next;
        
    }
 
    return 0;
}
