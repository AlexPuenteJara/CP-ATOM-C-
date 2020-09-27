/* en cada caso te daran una cadena binaria a la que haras operaciones para
obtener la cadena mas pequeña(en tamaño y lexicograficamente).Una operacion
consiste en encontrar s[i]='1' ^ s[i+1]='0' y eliminar exactamente uno de
los dos caracteres */
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
/*Idea : Lo primero a notar es que si no hay ningun "10", no se puede
hacer ninguna operacion por lo tanto la respuesta es el mismo string.
Lo segundo a notar es que con los 0s iniciales y los 1s finales es
imposible hacer una operacion por lo que si o si estaran en la respuesta final,
si estamos en este caso el string sera de la forma : 0..01....01..1,
haciendo ejemplos podemos darnos cuenta que la parte de en medio siempre
se convertira a 0*/

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        string s,ans;
        bool ok=false;
        cin >> n;
        cin >> s;
        for(int i=0;i<n;i++){
            //primero
            if(s[i]=='1' and s[i+1]=='0'){
                ok=true;
            }
        }
        if(!ok){
            cout<< s <<'\n';
        }else{
            //segundo
            for(int i=0;i<n;i++){
                if(s[i]=='1') break;
                ans.push_back('0');
            }
            ans.push_back('0');
            for(int i=n-1;i>=0;i--){
                if(s[i]=='0') break;
                ans.push_back('1');
            }
            cout<< ans <<'\n';
        }
    }
}
