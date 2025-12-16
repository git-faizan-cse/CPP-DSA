#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Using For Loop" << endl;
    for(int i = 0; i< vec.size(); i ++){
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << "Using For Each Loop" << endl;
    for(int i : vec){
        cout << i << " ";
    }
    cout << endl;
    cout << "Exploring functions of vectors" << endl;
    cout << "Size function vec.size(); " << vec.size() << endl;
    vec.push_back(6);
    for (int val : vec){
        cout << val << " ";
    }

    return 0;
}