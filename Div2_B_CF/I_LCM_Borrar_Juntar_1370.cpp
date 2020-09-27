/*te dan un vector a(de 2*n elementos) y te dicen que borres exactamente 2 elementos
(los que quieras), despues debes elegir dos elementos cualesquiera, sumarlos
y ponerlos en otro vector(llamemoslo b de n-1 elementos) / que el mcd de todos los
elementos de b sea >1,*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e3+10;
int a[N];
//x : conjunto donde estan los pares
//z : conjunto donde estan los impares
/*idea : la cantidad de elementos pares e impares en el vector(a) tienen la misma
paridad ya que la cantidad de elementos de a es 2*n. Si size(x) ^ size(z) son impares
sacamos 1 elemento de x y 1 elemento de z, si size(x) ^ size(z) son pares sacamos
2 elementos de x o 2 elementos de z(depende de cual tenga >=2 elementos).
Asi aseguramos que el mcd del vector b sea >=2*/

int main(){
    int t;
    cin >> t;
    while (t--){
        vector<int> pa,im;
        int n;
        cin >> n;
        int impar=0,par=0;
        for(int i=0;i<2*n;i++){
            cin >> a[i];
            if(a[i]&1){
                impar++;
                im.push_back(i+1);
            }else{
                par++;
                pa.push_back(i+1);
            }
        }
        if(par%2 and impar%2){
            pa.pop_back();
            im.pop_back();
        }else{
            if(par>impar){
                pa.pop_back();
                pa.pop_back();
            }else{
                im.pop_back();
                im.pop_back();
            }
        }
        for(int i=0;i<pa.size();i+=2){
            if(i+1<n) cout<<pa[i]<<" "<<pa[i+1]<<'\n';
        }
        for(int i=0;i<im.size();i+=2){
            if(i+1<n) cout<<im[i]<<" "<<im[i+1]<<'\n';
        }

    }
}
