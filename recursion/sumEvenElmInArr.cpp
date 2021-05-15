#include<bits/stdc++.h>
using namespace std;

int sumArr(int [], int);

int sumArr(int Arr[], int n){
	if (n <= 0){
		return 0;
	}
	if (Arr[n-1] % 2 == 0){
		return Arr[n-1] + sumArr(Arr, n-1);
	}
		
	return sumArr(Arr, n-1);
}

int main(){
	int a[] = {6,7,8,20};
	int n = sizeof(a)/sizeof(a[0]);
	
	cout << sumArr(a, n) << endl;

	return 0;
}
