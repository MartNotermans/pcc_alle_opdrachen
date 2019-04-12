#include <iostream>
#include <vector>
using namespace std;

vector <float> som(const vector <vector <float> > & v){
	vector <float> andwoord;
	for(unsigned int i = 0; i < v.size(); i++){
			float sum = 0;
		for(unsigned int j = 0; j < v[i].size(); j++){
			sum = sum + v[i][j];
		}
		andwoord.push_back (sum);
	}
	return andwoord;
}

int main(){
	vector<vector<float> > n1 = {{37.7,4.4,9.8},{4.2,9.4,37.7},{3.8,5.3,0.9},{4.3,1.4,7.5}};
	vector<vector<float> > n2 = {{5.5,5.5,5.5},{5.5,5.5,5.5},{5.5,5.5,5.5},{5.5,5.5,5.5,5.5}};
	vector<vector<float> > n3 = {{1.1,2.2},{3.3,4.4}};
	vector<float> test = som(n2);
	
	cout << "de som per rij is: ";
	for(int i; i<n2.size(); i++){
		cout << test[i]<<' ';
	}
	cout<<endl;
}