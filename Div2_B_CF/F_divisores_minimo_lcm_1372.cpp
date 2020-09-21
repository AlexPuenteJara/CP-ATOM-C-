/* te dan un numero n, te piden hallar dos enteros a y b tal que su suma sea
n y su lcm sea minimo */
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
/* idea: para minimizar el lcm, se demuestra que uno de ellos debe ser siempre
el divisor propio mas grande de n*/

int main(){
	int t;
	cin>>t;
	while(t--){
        int n, k=0;
        cin >> n;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                k=(n/i);
                break;
            }
        }
				// si k es 0 significa que es primo
        if(k==0) k=1;
        cout<<k<<" "<<n-k<<'\n';
	}
	return 0;
}
