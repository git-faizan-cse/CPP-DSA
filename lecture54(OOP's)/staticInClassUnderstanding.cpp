#include <iostream>
#include <string>


using namespace std;
class A{
  public:
  static int x;
  void incX(){
      x++;
  }
};

int A::x = 0;
int main(){
  A obj, obj2;
  obj.x = 100;
  obj2.x = 200;
  cout << obj.x << endl;
  obj.incX();
  cout << obj.x << endl;
  obj.incX();
  cout << obj.x << endl;
  obj.incX();
  cout << obj.x << endl;
  obj.incX();
  cout << obj2.x << endl;
    
    return 0;
}