#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+10;
int a[N];

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        int temp=0,ans=0;
        for(int i=0;i<n;i++){
            temp++;
            if(a[i]==temp){
                temp=0;
                ans++;
            }
        }
		cout<< ans <<'\n';
    }
    return 0;
}
