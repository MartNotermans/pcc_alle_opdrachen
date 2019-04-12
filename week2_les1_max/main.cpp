#include <iostream>
using namespace std;

int main(){
	vector<int> Hal={3,-1,2,4,-1,9}
	muizenval(Hal);
}
void muizenval(vector<int> &gang){
	for(unsigned int i = 0;i<gang.size();1++){
		if(gang[i]==-1){
			gang[i] = 1;
		}
	}
}