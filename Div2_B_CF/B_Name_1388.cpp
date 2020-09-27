/*Dado un número x de "n" dígitos:
 k=número que es resultado de la concatenación de la representación binaria de cada dígito de x
 r= es k pero sin los últimos "n" dígitos,
 la tarea es dado "n", imprimir el menor x que maximiza r(representación entera) */

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define f(i,a,b) for( ll i = a; i < b ; i++ )
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
int n,cont=0;
const int MAXN=1e5;
const int inf=1e9;

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
  int t; cin >> t;
  while(t--)
  {
    int n; cin >> n;//ingresa el valor de n(número de dígitos de x)
    /*x debe ser de sólo dígitos 8 y 9 para que en su representación binaria cada dígito
    tenga 4 dígitos y de esa forma maximizar r*/

            int w = (n + 3) / 4;
            //w es la cantidad de dígitos 8 que tiene el número r
            for (int i = 0; i < n - w; ++i) {
                cout << 9;
            }
            /*los primeros dígitos de x deben ser 9, para garantizar el máximo r */
            for (int i = 0; i < w; ++i) {
                cout << 8;
            }
            /*los últimos dígitos deben ser 8 para minimizar el número x, pero garantizando que r
            sigue siendo el número máximo*/

    cout<<"\n";
  }



  return 0;
}
