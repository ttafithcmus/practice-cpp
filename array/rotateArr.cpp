#include <iostream>
using namespace std;

void rotateArr(int [100][100], int, int);

void rotateArr(int a[100][100], int n, int m){
	cout << "Rotate 90 degree: " << endl;

	for (int i=0; i<m; i++){
		for(int j=n-1; j>=0; j--){
			cout << a[j][i] << ' ';
		}

		cout << endl;
	}
}

int main(){
	
	int n, m;
	cin >> n;
	cin >> m;
	int a[100][100];

	for (int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}

	rotateArr(a, n, m);

	return 0;
}
