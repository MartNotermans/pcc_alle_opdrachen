//1.6 1337
#include <iostream>
#include <string>
using namespace std;

int main(){
	cout<<"Geef een string om te vertalen:\n";
	string zin;
	getline(cin,zin);

	for (int i = 0;i < zin.size();i++){
		if (zin[i] == 'e'){
			cout<<'3';
		}else if (zin[i] == 'l'){
			cout<<'1';
		}else if (zin[i] == 't'){
			cout<<'7';
		}else if (zin[i] == 'o'){
			cout<<'0';
		}else if (zin[i] >= 'a' && zin[i] <= 'z'){
			cout<<(char) (zin[i]-('a'-'A'));
		}else{
			cout<< zin[i];
		}
	}
}
