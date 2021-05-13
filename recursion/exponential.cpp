#include <iostream>

using namespace std;

int exponential(int, int);

int exponential(int n, int exp){
    if (exp == 0){
        return 1;
    }
    else{
        return n * exponential(n, exp - 1);
    }
}

int main(){
    
    cout << exponential(6, 4) << endl;
    return 0;

}