#include <iostream>
#include <vector>
using namespace std;

float verschil(float nummer1,float nummer2){
	if(nummer1 > nummer2){
		return nummer1 - nummer2;
	}else{
		return nummer2 - nummer1;
	}
}

float grootste_verschil(const vector<float> & numbers){
	float diffrence = 0.0;
	float new_diffrence = 0.0;
	for(unsigned int i = 0; i < numbers.size()-1; i++){
		new_diffrence = verschil(numbers[i],numbers[i+1]);
		if(new_diffrence > diffrence){
			diffrence = new_diffrence;
		}
	}
	return diffrence;
}


int main(){
	 vector<float> n = {37.5,4.5,9.7,4.2,9.5,37.7,3.3,5.8,0.2,4.4,1.4,99};
	 float verschil3 = grootste_verschil(n);
	 cout << "het grootste verschil is: " << verschil3 << "\n";
}