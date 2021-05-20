#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char*);

bool isPalindrome(char* str){
	char* front = str;
	char* back = str + strlen(str)-1;
	int i=0;

	while (front < back){
		if (str[i] != str[strlen(str)-(i+1)]){
			return false;
		}

		i++;
		front++;
		back--;
		cout << "Front: " << front << endl;
		cout << "Back: " << back << endl;
	}

	return true;
}

int main(){
 
	char s1[50] = "neveroddoreven";
	char s2[50] = "not a palindrome";

	cout << isPalindrome(s1) << endl;
	//cout << isPalindrome(s2) << endl;
	
	return 0;
}

