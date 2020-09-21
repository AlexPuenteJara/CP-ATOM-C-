/* te piden encontrar cualquier tripleta de numeros l<= a,b,c <=r / existe un n entero
positivo que cumple la ecuacion a*n + b -c = m, teniendo en cuenta que l,r,m son dato */
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
/*idea : fijar variables, en este problema solo podemos fijar 1 variable( ya que las
constreins son altas) y en este caso nos conviene fijar a; tambien una vez fijada a, minimizar
abs(b-c), asi siempre habra respuesta*/

int main(){
  //mi codigo no esta muy limpio, talvez lo arregle despues
	int t;
	cin>>t;
	while(t--){
        int l,r;
        ll m;
        cin>>l>>r>>m;
        //fijando a
        for(int a=l;a<=r;a++){
            //res= resto de m%a minimo, con signo - si es por exceso
            int x=m%a,y=a-x;
            int res=min(x,y);
            if(res==y) res*=(-1);
            if(m-a>=0){
              // aqui b-c puede ser positivo o negativo
                int p;
                if(r-l>=abs(res)){
                  //se verifica esto porque sino no se puede
                    res>=0? p=l : p=r;
                    //hago esto para no elegir numeros aleatorios de b y c
                    //y mejor escojo numeros que se que siempre van a cumplir
                    cout<<a<<" "<<p+res<<" "<<p<<'\n';
                    break;
                }
            }else{
              // aqui necesariamente b-c es negativo
                if(r-l>=abs(m-a)){
                  // tiene que cumplir que >=abs(m-a)
                  //ya que n>=1
                    cout<<a<<" "<<r-y<<" "<<r<<'\n';
                    break;
                }
            }

        }
	}
	return 0;
}
