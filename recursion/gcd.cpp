#include <iostream>
using namespace std;

// Greatest common diviosr
void GCD(int a, int b){
    if (a % b == 0){
        cout << "GCD: " << b << endl;
    }
    else{
        GCD(b, a % b);
    }
}

int main(){
    GCD(18, 12);
    return 0;
}