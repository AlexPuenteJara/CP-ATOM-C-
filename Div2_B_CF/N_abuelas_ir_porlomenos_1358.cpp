#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+10;
int a[N];

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]<=i+1){
                ans=i+2;
                break;
            }
        }
        if(ans==0) cout<< 1 <<'\n';
        else cout<< ans <<'\n';

    }
    return 0;
}
