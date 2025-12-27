#include <iostream>
using namespace std;

int main(){

    // string str1 = "Faizan";
    // string str2 = "Faizan";

    // string str3 = str1 + " " + str2; // concatenation of strings.
    // cout << str3 << endl;

    // cout << "areEqual: " << ( str1 == str2);

    // string str1;

    // // cin >> str1 ;
    // getline(cin,str1);

    // cout << str1 ;

    string str = "Faizan Hamid.";

    for(int i = 0; i < str.length(); i++){
        cout << str[i] << " ";
    }
    cout << endl;
    for(char ch : str){
        cout << ch << " ";
    }

    return 0;
}