#include <iostream>
#include <vector>
using namespace std;

float minimum(const vector<float> & numbers){
	float min = numbers[0];
	for(unsigned int i = 0; i < numbers.size(); i++){
		if(min > numbers[i]){
			min = numbers[i];
		}
	}
	return min;
}

int main(){
	 vector<float> n = {37.5,4.2,9.7,4.1,9.7,37.4,3.5,5.1,0.9,4.5,1.9};
	 float smallest_number = minimum(n);
	 cout << "het kleinste getal is: " << smallest_number << "\n";
}