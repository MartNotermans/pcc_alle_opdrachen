#include <iostream>
#include <vector>
using namespace std;

bool control_vector(const vector<int> & vector){
	for(unsigned int i = 0; i<vector.size()-1; i++){
		if(vector[i] > vector[i+1]){
			return false;
		}
	}
	return true;
}

int main(){
	vector<int> n1 = {1,2,3,4,5,6,7,8,9};
	vector<int> n2 = {3,6,5,7,2,8,6,3};
	bool check = control_vector(n2);
	if(check == 1){
		cout <<"de vector is gesorteerd van laag naar hoog"<<endl;
	}else{
		cout <<"de vector is niet gesorteerd van laag naar hoog"<<endl;
	}
}