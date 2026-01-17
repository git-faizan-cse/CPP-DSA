#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    cout << "Front element: " << dq.front() << endl; // 10
    cout << "Back element: " << dq.back() << endl;   // 30  
    dq.pop_front();
    cout << "Front element after pop_front: " << dq.front() << endl; // 20
    dq.pop_back();
    cout << "Back element after pop_back: " << dq.back() << endl;   // 20
    return 0;
}