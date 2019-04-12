#include <iostream>
#include <vector>
using namespace std;

float sum(const vector<float> & numbers){
	float sum = 0;
	for(unsigned int i = 0; i < numbers.size(); i++){
		sum += numbers[i];
		}
	return sum;
}

float sumvector(const vector<float> & vector1, const vector<float> & vector2){
	float cijfer1 = sum(vector1);
	float cijfer2 = sum(vector2);
	cout<<"cijfer1 "<<cijfer1<<"\n"<<"cijfer2 "<<cijfer2<<endl;
	return cijfer1 + cijfer2;
}

int main(){
	 vector<float> n1 = {2.5,2.5,2.5};
	 vector<float> n2 = {2.5,2.5};
	 float som = sumvector(n1,n2);
	 cout << som << "\n";
}