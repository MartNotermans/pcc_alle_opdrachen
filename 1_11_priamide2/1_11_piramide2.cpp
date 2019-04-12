//1.11 piramide 2clTabCtrl
#include <iostream>
using namespace std;

int main(){
	cout<<"Hoe groot? ";
	int groote = 0;
	cin>>groote;
	for(int i = 1; i <= groote; ++i){
		for(int j = groote; j >= i; --j){
			cout<<' ';
		}
		for(int k = 1; k <= i; ++k){
			cout << "*";
		}
		cout << "\n";
	}		
	for(int l = groote-1; l >= 1; --l){
		for(int m = groote; m >= l; --m){
			cout<<' ';
		}
		for(int n = 1; n <= l; ++n){
				cout << "*";
		}
			cout << "\n";
	}
		return 0;
}