//1.10 piramide
#include <iostream>
using namespace std;

int main2(){
	cout<<"Hoe groot? ";
	int groote = 0;
	cin>>groote;
	for(int i = 1; i <= groote; ++i){
		for(int j = 1; j <= i; ++j){
				cout << "* ";
		}
			cout << "\n";
	}		
	for(int k = groote-1; k >= 1; --k){
		for(int l = 1; l <= k; ++l){
				cout << "* ";
		}
			cout << "\n";
	}
		return 0;
}
int main(){
	cout<<"Hoe groot? ";
	int groote = 0;
	cin>>groote;
	int i = 0;
	while(i<groote){
		++i;
		int j = 0;
		while(j<i){
			++j;
			cout <<"* ";
		}
		cout<<"\n";
	}
	int k = groote;
	while(k>=1){
		--k;
		int l = 0;
		while(l<k){
			++l;
			cout <<"* ";
		}
		cout<<"\n";
	}
}