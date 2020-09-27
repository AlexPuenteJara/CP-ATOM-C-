#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll> v;
ll fp(int a,int b){
  if(b==0) return 1;
  if(b&1) return a*fp(a,b-1);
  ll aux=fp(a,b/2);
  return aux*aux;
}
int main() {
    ll n;
    cin>>n;
    int ex2=0,ex5=0;
    while(true){ffiffjajfjfjjfj
        if(n%2==0){
            n/=2;
            ex2++;
        }else if(n%5==0){
            n/=5;
            ex5++;
        }else{
            break;//pongo el break
        }
    }
    int ans=(ex2+1)*(ex5+1);
    cout<<ans<<"\n";
    for(int i=0;i<=ex2;i++){
        for(int j=0;j<=ex5;j++){//que haces? ta bien asi
            v.push_back(fp(2,i)*fp(5,j));//;v
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){  //esto es c++17 creo que por eso tmb da WA, nani?
        cout<<v[i]<<"\n"; // asi esta bien?
    }
  //me da error en el atom
  //estas seguro que es por eso?lo mismo es
    return 0;
    //con el return 0 mandalo
}
