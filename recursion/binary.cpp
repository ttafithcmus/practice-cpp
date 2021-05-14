// Problem: Convert decimal to binary number using recursion

#include <iostream>

using namespace std;

void decToBin(int);

void decToBin(int n){
    if (n == 0){
        return;
    }
    else{
        decToBin(n/2);
        cout << n % 2;
    }
}

int main(){

    cout << "Binary: ";
    decToBin(23);

    return 0;
}