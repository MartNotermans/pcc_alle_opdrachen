#include <vector>
#include <string>
#include <iostream>
using namespace std;

struct student{
	string naam;
	int leeftijd;
	vector <float> cijfers;
	string huisdieren;
};

struct klas_gegevens{
	string naam;
	vector <string> lijst_studenten;
	vector <string> docenten;
};

vector <klas_gegevens> klassen;
vector <student> studenten;

float gemiddelde(string klas_naam){
	float som = 0;
	int aantal_cijfers = 0;
	for(unsigned int i = 0; i < klassen.size(); i++){
		if(klassen[i].naam == klas_naam){
			for(unsigned int j = 0; j < klassen[i].lijst_studenten.size(); j++){
				for(unsigned int k = 0; k < studenten.size(); k++){
					if(klassen[i].lijst_studenten[j] == studenten[k].naam){
						for(unsigned int l = 0; l < studenten[k].cijfers.size(); l++){
							som += studenten[k].cijfers[l];
							aantal_cijfers++;
						}
					}
				}
			}
		}
	}
	return som/aantal_cijfers;
}

int main(void){
	student leerling1 = {"Mart Notermans",20,{5.7,7.3,6.8},"hond"};
	student leerling2 = {"Daniel de Jong",21,{6.7,8.6,5.8},"hond"};
	student leerling3 = {"jan jansen",19,{6.7,8.6,5.8},"hond"};
	
	klas_gegevens klas1 = {"V1E", {leerling1.naam, leerling2.naam}, {"jorn", "brian"}};
	klas_gegevens klas2 = {"V1A", {leerling3.naam}, {"piet"}};
	
	klassen = {klas1,klas2};
	studenten = {leerling1,leerling2,leerling3};
	
	cout<<gemiddelde("V1E")<<endl;
}