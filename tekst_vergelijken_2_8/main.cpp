#include <iostream>
#include <string>
using namespace std;

int diffrence(const string  & sentence1,const string  & sentence2){
	
	int lengte;
	if (sentence1.size() > sentence2.size()){
		lengte = sentence2.size();
	}else{
		lengte = sentence1.size();
	}
	//zoek het verschil
	int index = lengte;
	for (int i = 0;i < lengte;i++){
		if(sentence1[i] != sentence2[i]){
			index = i;
			break;
		}
	}
	return index;
}

int main(){
	//vraag 2 strings
	string string1;
	cout<<"geef een string: ";
	getline(cin,string1);
	cout<<string1.size()<<"\n";
	string string2;
	cout<<"geef een string: ";
	getline(cin,string2);
	cout<<string2.size()<<"\n";

int answer = diffrence(string1,string2);
	cout<<"Het eerste verschil zit op index: "<<answer<<"\n";
}