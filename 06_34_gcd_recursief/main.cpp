#include <iostream>
using namespace std;

int gcd(int n1, int n2){
	if(n1 > n2){
		cout<<"n1 > n2"<<endl;
		return gcd(n2, n1%n2);
	}
	if(n1 == n2){
		return n1;
	}
}

int main(){
	int n1 = 76;
	int n2 = 23;
	cout<<gcd(n1, n2)<<endl;
}