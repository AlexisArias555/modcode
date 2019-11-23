#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a,n,m,x,exp;
	cout<<"base: ";
	cin>>a;
	cout<<"exponente: ";
	cin>>n;
	cout<<"modulo: ";
	cin>>m;
	exp=1;
	x=a%m;
	while (n>0){
		if (n%2!=0){
			exp=(exp*x)%m;
		}
		x=(x*x)%m;
		n=n/2;
	}
	cout<<exp;
	return 0;
}
