#include <iostream>
#include <string>
using namespace std;

struct furniture {
	int number;
	string name;
	float weight;
	float length;
};

void get_data(){
	furniture ID1 = {};
	
	cout<<"nummer: ";
	cin>>ID1.number;
	
	cout<<"naam: ";
	cin>>ID1.name;
	
	cout<<"weight: ";
	cin>>ID1.weight;
	
	cout<<"length: ";
	cin>>ID1.length;
	
	cout<<ID1.name<< " heeft nummer "<<ID1.number<<", weegt "<<ID1.weight<<" kilo en is "<<ID1.length<<" cm. "<<endl;
}

int main(){
	get_data();
}