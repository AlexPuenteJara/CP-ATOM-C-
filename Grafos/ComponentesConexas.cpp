/*Cuenta la cantidad de componentes conexas
e imprime cada una de estas compoentes*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define f(i,a,b) for( ll i = a; i < b ; i++ )
typedef long long ll;
int n,cont=0;
const int MAXN=1e5;
vector<int> g[MAXN] ;
bool used[MAXN] ;
vector<int> comp ;
/*Input Ejemplo:
15
5
1 2
1 3
4 5
4 6
6 7
*/
void dfs(int v) {//recorre una componente conexa
    used[v] = true ;

    comp.push_back(v);//vértice por vértice almacena los nodos.
    for (size_t i = 0; i < (int) g[v].size(); ++i) {//recorre todos los nodos hijos
        int to = g[v][i];
        if (!used[to])//si el nodo no está visitado entonces realiza el dsf del hijo
            dfs(to);//va más profundo
    }
}

void find_comps() {//es el solve encuentra las componentes
    for (int i = 0; i < n ; ++i)
        used [i] = false;//inicializa a todos los nodos en false(no visitado)
    for (int i = 0; i < n ; ++i)
        if (!used[i]) {
            comp.clear();//limpia la componente conexa anterior
            dfs(i);//almacena la nueva componente conexa en comp
            cont++;
            cout << " Components:" ;
            for (size_t j = 0; j < comp.size(); ++j)
                cout << ' ' << comp[j];
            cout << endl ;
        }
}

int main ()
{
  fastio;
  int a,b,m;
  cin>>n;
  cin>>m;//número de aristas

  for(int i=0;i<m;i++)//ingreso de datos
  {
  	cin>>a>>b;
  	a--;b--;//comenzamos del nodo 0, pero por el teclado es nodo 1
  	g[a].push_back(b);
  	g[b].push_back(a);

  }
 find_comps();
 cout<<"Existen "<<cont<<" componentes conexas";
  }
