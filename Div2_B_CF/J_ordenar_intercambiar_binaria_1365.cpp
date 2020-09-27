/*te dan un vector, cada elemento esta asociado con un 0 o 1, si en los elementos
asociados uno es 1 y el otro 0(solo si se da ese caso) se pueden intercambiar en el
array original, te piden saber si se puede ordenar el array de forma creciente */
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+10;
int a[N],b[N];
/*idea : notar que si hay por lo menos un 1 y por lo menos un 0, siempre se puede
ordenar, ya que cualquiera de los dos podria ser usado como "pivote" y asi poder
intercambiar cualesquiera dos elementos.Con la idea anterior nos damos cuenta que
si es array b es puros 0 o puros 1 no se puede, a menos que el array a ya este
ordenado*/

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        bool or=true;
        for(int i=0;i<n;i++) cin>>a[i];
        bool s1=true,s0=true;
        //s1: si todos son 1s
        //s0: si todos son 0s
        for(int i=0;i<n;i++){
            cin>> b[i];
            if(b[i]==1) s0=false;
            if(b[i]==0) s1=false;
        }
        for(int i=0;i<n;i++){
            if(a[i] > a[i+1]) or=false;
            //comprobamos si ya esta ordenado
        }
        if(or) cout<<"Yes\n";
        else{
            if(s0 or s1){
                cout<<"No\n";
            }else{
                cout<<"Yes\n";
            }
        }
    }
    return 0;
}
