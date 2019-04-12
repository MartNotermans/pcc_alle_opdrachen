#include <iostream>
using namespace std;

int supersom(int getal){
	if (getal < 10){
		return getal;
	}
	return getal%10 + supersom(getal/10);
}

int main(){
	int getal = 12345;
	int andwoord = supersom(getal);
	cout<<andwoord<<endl;
}