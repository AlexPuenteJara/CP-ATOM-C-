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
    int n; cin >> n; //cantidad inicial de tablones en la empresa de la amiga de Applejack
  int p; cin>>p;


if(n==1){cout<<p;}
else{
  cout<<p+(p-2)*(n-1);

}




  cout<<"\n";


  	return 0;
  }
