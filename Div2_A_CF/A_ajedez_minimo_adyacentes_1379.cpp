/*hallar el numero minimo de turnos para colorear de forma ajedrez
tal que cada turno colorees cuadraditos adyacentes al anterior turno */

#include<bits/stdc++.h>
using namespace std;
/*idea: hacer ejemplos y darte cuenta de la induccion */
/*si se repite n veces cada tanto, el resultado tiene la forma de (x+k)/n*/
main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<n/2 + 1<<'\n';
	}
	return 0;
}
