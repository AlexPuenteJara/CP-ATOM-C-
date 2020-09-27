#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+10;
int a[N];

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int ans;
        int su0=0,su1=0;
        for(auto x:s){
            if(x=='1') su1++;
            else su0++;
        }
        ans=min(su0,su1);
        int pre0=0,pre1=0;
        for(auto x:s){
            if(x=='1'){
                pre1++;
                su1--;
            }else{
                pre0++;
                su0--;
            }
            ans=min(ans,pre0+su1);
            ans=min(ans,pre1+su0);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
