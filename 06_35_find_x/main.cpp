#include <vector>
#include <iostream>
using namespace std;

int index(vector<int> v, int size, int x){
	if(v[size-1] == x){
		return size-1;
//	}else{
//		return -1;
	}
	return index(v, size-1, x);
	return -1;
}

void show(vector<int> v, int index){
	for(unsigned int i = 0; i < v.size(); i++){
		cout<<v[i];
		if(i != v.size()-1){
			cout<<',';
		}
	}
	cout<<endl;
	for(int j = 0; j < index; j++){
		if(v[j] < 10){
			cout<<"  ";
		}
		else if(v[j] < 100){
			cout<<"   ";
		}
	}
	if(v[index] < 10){
			cout<<"^"<<endl;
		}
	else if(v[index] < 100){
		cout<<"^^"<<endl;
	}
}

int main(){
	vector <int> numbers1 = {3,5,7,4,78,32,6,54,87,46};
	vector <int> numbers2 = {5};
	int place = index(numbers1, numbers1.size(), 99);
	cout<<place<<endl;
	show(numbers1, place);
}