// C++ Program to illustrate BITWISE SHIFT Operator
#include <iostream>
int main() {
      int num = 315, i;
      cout << "\nShift Right:" << endl;
      for (i = 0; i < 4; i++) {
      cout << "315 >> " << i << " = " << (315 >> i) << endl;
    }
      cout << "\nShift Left:" << endl;
      for (i = 0; i < 4; i++) {
      cout << "315 << " << i << " = " << (315 << i) << endl;
    }
      return 0;
}
