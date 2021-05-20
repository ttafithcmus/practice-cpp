// Calcuting the arevage of the double numbers using A Dynamic Array.
#include <iostream>
#include <string>
using namespace std;

typedef double* Doubles;

void calAverage(int);

void calAverage(int numDoubles){
	double average=0;

	Doubles arrDoubles;
	arrDoubles = new double[numDoubles];

	for (int i=0; i<numDoubles; i++){
		cin >> arrDoubles[i];
		average += arrDoubles[i];
	}

	cout << "The average: " << average / numDoubles << endl;
}

int main(){
	
	cout << "Type the size: ";
	int numDoubles;
	cin >> numDoubles;

	calAverage(numDoubles);

	return 0;
}
