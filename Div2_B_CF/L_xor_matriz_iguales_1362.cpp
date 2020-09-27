/*te dan un vector, te dicen que encuentres un k / al hacer xor con cada uno de los
elementos, al final los elementos sean los mismos(esten permutados o no)*/
#include <bits/stdc++.h>
using namespace std;
/*idea : hacer fuerza bruta y probar con todos los k posibles, ya que n <1024*/
bool b[1026];
// el b me dice si ya visite ese numero
int n;
int a[1025];
int com(int k){
    for(int i=0;i<n;i++){
        if(!b[a[i]^k]) return false;
        //significa que por lo menos 1 elemento que no deberia ser tomado, se tomo
    }
    return true;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<=1025;i++) b[i]=false;
        int l=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]=true;
        }

        for(int k=1;k<1024;k++){
            if(com(k)){
               cout<<k<<"\n";l++;
               break;
            }

        }
        if(l==0) cout<<-1<<"\n";
    }

	return 0;
}
