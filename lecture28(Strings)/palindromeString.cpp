#include <iostream>

using namespace std;

int main(){
    string str = "racecar";  // madam , racecar
    int st = 0, end = str.length() - 1;
    bool isPalindrome = true;
    while ( st < end){
        if(str[st] != str[end]){
            isPalindrome = false;
        }
        st++;
        end--;
    }

    if(isPalindrome){
        cout << "This string is palindrome " << str << endl;

    }else {
        cout << "This string is Not a palindrome: " << str << endl;
    }
    return 0;
}