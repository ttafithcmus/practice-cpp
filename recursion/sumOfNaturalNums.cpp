// Problem: Find the sum of natural numbers using recursion
// Example: Input: 3
//          Output: 6
//          Explanation: 1 + 2 + 3 = 6

#include <iostream>

using namespace std;

int sumOfNaturalNums(int);

int sumOfNaturalNums(int n){
    if (n == 0){
        return 0;
    }
    else{
        return n + sumOfNaturalNums(n-1);
    }
} 

int main(){
    cout << "Sum: " << sumOfNaturalNums(6) << endl;
    return 0;
}