#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        string s,ans;
        bool ok=false;
        cin >> n;
        cin >> s;
        for(int i=0;i<n;i++){
            if(s[i]=='1' and s[i+1]=='0'){
                ok=true;
            }
        }
        if(!ok){
            cout<< s <<'\n';
        }else{
            for(int i=0;i<n;i++){
                if(s[i]=='1') break;
                ans.push_back('0');
            }
            ans.push_back('0');
            for(int i=n-1;i>=0;i--){
                if(s[i]=='0') break;
                ans.push_back('1');
            }
            cout<< ans <<'\n';
        }
    }
}
