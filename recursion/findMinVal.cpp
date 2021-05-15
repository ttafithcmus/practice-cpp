#include<bits/stdc++.h>
using namespace std;

void findMinVal(int [], int, int &);

void findMinVal(int Arr[], int n, int &min){
	if (n <= 0){
		return;
	}
	
	if (min == 0){
		min = Arr[n-1];
	}
	else if (min > Arr[n-1]){
		min = Arr[n-1];
	}
	
	findMinVal(Arr, n-1, min);
}

int main(){
	int a[] = {6,7,8,13,25,50,20};
	int min = 0;

	findMinVal(a, 7, min);
	cout << min << endl;

	return 0;
}
