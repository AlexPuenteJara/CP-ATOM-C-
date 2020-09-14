/*Applejack quiere construir almacenes, uno rectangular y uno cuadrado,
para el rectangular necesita dos pares de tablomes iguales.
para el cuadrado necesita 4 tablones iguales,
para ello le va a comprar a su amiga tablones y quiere saber si la
empresa de su amiga tiene lo que ella necesita después de cada operación de venta
de tablones que realiza su amiga.
*/
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define f(i,a,b) for( ll i = a; i < b ; i++ )
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
/**/
int n,cont=0;
const int MAXN=1e5;
vector<int> g[MAXN] ;
bool used[MAXN] ;
vector<int> comp ;
/*Input Ejemplo:
6
1 1 1 2 1 1
6
+ 2
+ 1
- 1
+ 2
- 1
+ 2

*/


int main ()
{
  fastio;
    int n; cin >> n; //cantidad inicial de tablones en la empresa de la amiga de Applejack
  	vi cnt(MAXN+10, 0);//inicializo en 0 el vector de enteros de tamaño MAXN+10

  	for(int i = 0; i < n; i++) {
  		int temp; cin >> temp;
  		cnt[temp]++;/*guardo cuantos tablones hay de cada longitud temp, y los agrupo, ya
      que cada grupo va a contribuir en una cantidad de grupos de 4 y grupos de 2
      que se va a necesitar para poder formar los almacenes*/
  	}

  	int cnt4 = 0, cnt2 = 0;
  	for(int i = 1; i <= MAXN; i++) {
  		cnt4 += cnt[i]/4;//cantidad de grupos de 4 tablones que tienen una misma longitud
  		cnt2 += cnt[i]/2;//cantidad de grupos de 2 tablones que tienen una misma longitud
  	}

  	int q; cin >> q;//número de eventos de la empresa
  	while(q--) {
  		char sign;
  		int temp;
  		cin >> sign >> temp;//
  /*    for(int i=1;i<=n;i++) pruebas
      { cout<<"cantidades antes de restar"<<endl;
          debug(i);debug(cnt[i]);
      }
      debug(cnt4);
      debug(cnt2);*/
  		cnt4 -= cnt[temp]/4;
      /*como ese temp es la longitud del grupo cuya cantidad de tablones es cnt[temp]
       , tenemos que restar la contribución que realiza ese grupo en el número de
       grupos de 4 que se pueden formar para luego poder acualizarlo en el número
       total de grupos de 4 (cont4) que se pueden formar.
      */
  		cnt2 -= cnt[temp]/2;
  	//   debug(cnt4);
    //   debug(cnt2);


  		if(sign == '+') cnt[temp]++;
  		else cnt[temp]--;
      /*aquí acutalizamos la cantidad de tablones que tenemos de longitud temp*/
    /*  for(int i=1;i<=n;i++) pruebas
      { cout<<"cantidades antes de sumar"<<endl;
        debug(i);debug(cnt[i]);
      }*/
  		cnt4 += cnt[temp]/4;/*
      aquí se cuenta la nueva aportación en el número de grupos de 4
      que puede contribuir el grupo de tablones de longitud temp, debido a
      que la cantidad de tablones que existe ahora cambió a cnt[temp]
      y se acumula la cantidad de grupos de 4 tablones iguales en cnt4*/
  		cnt2 += cnt[temp]/2;
      //debug(cnt4);
      //debug(cnt2);
  		if(cnt4 >= 1 and cnt2 >= 4) cout << "YES\n";
  		else cout << "NO\n";
  	}

  	return 0;
  }
