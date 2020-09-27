#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+10;
int a[N];
int dp[N];

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for(int i=1;i<=n;i++) cin >> a[i];
        for(int i=1;i<=n;i++) dp[i]=1;
        for(int i=1;i<=n;i++){
            for(int j=2*i;j<=n;j+=i){
                if(a[i]<a[j]){
                    dp[j]=max(dp[j],dp[i] + 1);
                }
            }
        }
        int ans = 0;
		for(int i=1;i<=n;i++){
			ans = max(ans,dp[i]);
		}
		cout<< ans <<'\n';
    }
    return 0;
}
