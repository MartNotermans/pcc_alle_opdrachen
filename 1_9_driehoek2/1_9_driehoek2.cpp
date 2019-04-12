//1.9 driehoek 92
#include <iostream>
using namespace std;

int main(){
	cout<<"Hoe groot? ";
	int groote = 0;
	cin>>groote;
	for(int i = groote; i >= 1; --i){
			for(int j = 1; j <= i; ++j){
				cout << "* ";
			}
		cout << "\n";
	}
    return 0;
}