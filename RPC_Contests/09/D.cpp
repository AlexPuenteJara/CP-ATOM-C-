#include<bits/stdc++.h>
using namespace std;
using dll= double long ;
int main() {
    dll r,Area,resp,deci;
    cin>>r;
    Area=2*r + (sqrt(6)+sqrt(2))*r;
    Area=Area*Area;
    cout<<setprecision(5)<<fixed<<Area<<"\n";
	return 0;
}
