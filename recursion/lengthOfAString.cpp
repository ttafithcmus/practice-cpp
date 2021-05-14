#include <iostream>

using namespace std;

int cntLengthOfStr(char*);

int cntLengthOfStr(char* str){
    if (*str == '\0'){
        return 0;
    }
    else{
        cout << str << endl;
        return 1 + cntLengthOfStr(str + 1);
    }
}

int main(){
    
    char s[] = "abcdefg";
    cout << cntLengthOfStr(s) << endl;

    return 0;
}