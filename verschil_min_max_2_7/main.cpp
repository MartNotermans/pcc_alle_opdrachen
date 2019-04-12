#include <iostream>
#include <vector>
using namespace std;

float verschil_max_min(const vector<float> & numbers){
	float max = numbers[0];
	float min = numbers[0];
	for(unsigned int i = 0; i < numbers.size(); i++){
		if(max < numbers[i]){
			max = numbers[i];
		}
		if(min > numbers[i]){
			min = numbers[i];
		}
	}
	return max - min;
}


int main(){
	 vector<float> n = {37.5,4.2,9.7,4.1,9.7,37.4,3.5,5.1,0.9,4.5,1.9};
	 float verschil = verschil_max_min(n);
	 cout << "het verschil is: " << verschil << "\n";
}