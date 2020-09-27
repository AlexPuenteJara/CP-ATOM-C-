#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+10;
int a[N];

int main(){
    int t;
    cin >> t;
    while (t--){
        vector<int> res;
        int n,ans=0;
        cin >> n;
        for(int i=0;i<n;i++) cin>> a[i];
        res.push_back(a[0]);
        for(int i=1;i<n-1;i++){
            if((a[i-1] < a[i] and a[i] > a[i+1]) or (a[i-1] > a[i] and a[i] < a[i+1])){
                res.push_back(a[i]);
                ans++;
            }
        }
        res.push_back(a[n-1]);
        cout<<ans+2<<'\n';
        for(auto x : res) cout<<x<<" ";
        cout<<'\n';
    }
    return 0;
}
