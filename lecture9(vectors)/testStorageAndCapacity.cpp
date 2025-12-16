#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    for(int i = 0; i< 3; i++){
        vec.push_back(i);
        cout << "vector size: " << vec.size() << " vector capacity: " << vec.capacity() << endl;
    }
    return 0;
}