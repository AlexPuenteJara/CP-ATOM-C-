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
  int kil,gaso,come,cant=0,mcm;
  cin >> kil>>gaso>>come;


  cant+=kil/gaso;
  if(kil%gaso==0)cant--;


  cant+=kil/come;
  if(kil%come==0)cant--;
  mcm=gaso*come/__gcd(gaso,come);

  if(mcm>=kil)
  {
    cout<<cant;
  }
  else
  {
    if(kil%mcm==0)
    {
      cant-=kil/mcm;
      cout<<cant+1;
    }else{
    cant-=kil/mcm;
    cout<<cant;
    }
  }

  cout<<"\n";
	return 0;
  }
