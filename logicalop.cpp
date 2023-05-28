//c++ program to illustrate "&&"(AND),"||"(OR),"!"(NOT) operators
#include <iostream>
using namespace std;
int main() {
     int x = 5;
     int y = 2;
     cout << (x > 2 && x < 10) <<endl;
     cout << (x > 2 || x < 4) <<endl;
     cout << (!(x > 2 && x < 10)) <<endl;
     return 0;
}
