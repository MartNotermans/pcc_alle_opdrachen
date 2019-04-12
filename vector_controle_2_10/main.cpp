#include <iostream>
#include <vector>
using namespace std;

int count(const vector<int> & numbers, const int & x){
	int count = 0;
	for(unsigned int i = 0; i < numbers.size(); i++){
		if(numbers[i] == x){
			count++;
		}
	}
	return count;
}

bool waar_nietwaar(const vector<int> & numbers){	
	int number_of_zeros = count(numbers, 0);
	int number_of_ones = count(numbers, 1);

	 return (number_of_ones > number_of_zeros && number_of_zeros <= 12);
}

int main(){
	vector<int> n = {0,0,1,1,0,1,1,1,0,0,0,1,1,0,1,0,1,1,1,1};
	cout<<waar_nietwaar(n)<<"\n";
}