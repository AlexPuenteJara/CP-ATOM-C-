/*un juego de 2 jugadores consiste en que cada turno escojan
la cantidad que quieran >0 de la bolsa mas a la izquierda que tenga por lo menos
1 piedra, pierde el que ya no puede escoger mas(te piden quien gana)*/

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+5;
int a[N];
/*idea:
CASO 1(todas las bolsas son ==1): Necesariamente cada jugador debe sacar en la respectiva bolsa de
su respectivo turno, por lo tanto solo importa la paridad

CASO 2(existe una bolsa que sea !=1): El primero que escoja en una bolsa que tiene >1 piedras,tiene la opcion de sacar
hasta que solo quede 1(para que el agarre de la siguiente bolsa necesariamente) o sacar todos las piedras
(para que el 2 jugador agarre de la siguente bolsa necesariamente).Asi que tendria su estrategia
ganadora
*/

int main(){
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        bool ok=false,b=true;
        // el b verifica que si todas la bolsas son 1s
        /* el ok verifica que haya por lo menos un 1,
        aqui me webie porque pudo haber estado en el CASO 2*/
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                 b&=1;
                 ok=true;
            }else b&=0;
        }
        if(!ok) cout<<"First\n";
        else{
            if(b){
              //CASO 1
                if(n&1) cout<<"First\n";
                else cout<<"Second\n";
            }else{
                for(int i=0;i<n;i++){
                    if(a[i]!=1){
                      //CASO 2
                        if(i&1) cout<<"Second\n";
                        else cout<<"First\n";
                        break;
                    }
                }
            }
        }
	}
	return 0;
}
