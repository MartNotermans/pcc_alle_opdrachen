#include <iostream>
#include <vector>
#include <string>
using namespace std;

//controleren of de vector gesorteerd is
bool control_vector(const vector<int> & vector){
	for(int i = 0; i<vector.size()-1; i++){
		if(vector[i] > vector[i+1]){
			return false;
		}
	}
	return true;
}

//de gemiddelde waarde van de vector bepalen
float gemiddelde_waarde(const vector<int> & numbers){
	float gemiddelde = 0;
	for(unsigned int i = 0; i < numbers.size(); i++){
		gemiddelde += numbers[i];
		}
	gemiddelde = gemiddelde / numbers.size();
	return gemiddelde;
}

//de kleinste waarde van de vector bepalen
float minimum(const vector<int> & numbers){
	float min = numbers[0];
	for(unsigned int i = 0; i < numbers.size(); i++){
		if(min > numbers[i]){
			min = numbers[i];
		}
	}
	return min;
}

int main(){
	int input;
	vector<int> v;
	while(input>=0){
		cout<<"geef een getal: ";
		cin >> input;
		if(input>=0){
			v.push_back(input);
		}
	}

	bool gecontroleerd = control_vector(v);
	if(gecontroleerd == 1){
		cout<<"De reeks is gesorteerd"<<endl;
	}else{
		cout<<"De reeks is niet gesorteerd"<<endl;
	}

	float gemiddelde = gemiddelde_waarde(v);
	cout<<"De gemiddelde waarde is: "<<gemiddelde<<endl;
	
	float smallest_number = minimum(v);
	cout << "het kleinste getal is: " << smallest_number << "\n";

	int aantal = v.size();
	cout<<"De reeks bevat "<<aantal<<" getallen"<<endl;
}