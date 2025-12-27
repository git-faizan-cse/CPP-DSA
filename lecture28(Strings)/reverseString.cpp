#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string str = "hello World";
    int st= 0;
    int end = str.length() - 1;

    cout << "String before reversed: " << str << " " << endl;

    while (st <= end){
        swap(str[st],str[end]);
        st++;
        end--;
    }

    cout << "String after reversed: " << str << " " << endl;

    cout << "Now we will reverse string using reverse(begin,end):"<< endl;

    reverse(str.begin(),str.end());

    cout << "String after reversed: " << str << " " << endl;    
    return 0;
}