#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
//	int getal = 0;
//	cout<<"geef een getal: ";
//	cin>>getal;
//vector<int> getallen {};
//getallen.insert(getal);
//cout<<"vector getallen"<<getallen<<endl;

int input;
vector<int> v;
cout<<"geef een getal: ";
while(cin >> input){
	cout<<"geef een getal: ";
	v.push_back(input);
//	if(v.size == 5){
//		break;
//	}
}

for(int i = 0; i<v.size(); i++){
 cout<< v[i] <<endl;
}
}