#include <iostream>

using namespace std;

int sum (int);

int sum(int n){
    if (n == 0){
        return 0;
    }
    else{
        return (n % 10) + sum(n/10);
    }
} 

int main(){
    cout << "Sum: " << sum(12) << endl;
    return 0;
}