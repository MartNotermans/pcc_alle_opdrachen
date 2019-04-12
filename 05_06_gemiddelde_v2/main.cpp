#include <iostream>
#include <vector>
using namespace std;

float average(const vector<int> & numbers, int size){
	if(size == 1){
		return numbers[size-1];
	}
	float sum =  numbers[size-1] + average(numbers, size-1);
	if(size < numbers.size() ){
		return sum;
	}
	return sum / numbers.size();
}

int main(){
    vector<int> values = {5,6,3,5,1,3};
    float avg = average(values, values.size());
    cout << avg << endl;
}