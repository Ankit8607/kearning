// https://www.codechef.com/problems/TWODIFFPALIN

#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
    int a,b; cin>>a>>b;
	if(a<=1 or b<=1) cout<<"NO"<<endl;
	else if(a%2 and b%2) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
    }
	return 0;
}
