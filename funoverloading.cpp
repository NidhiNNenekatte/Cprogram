#include <iostream>
void print() {
    std::cout << "No arguments" << std::endl;
}
void print(int x) {
    std::cout << "Integer argument: " << x << std::endl;
}
void print(int x, int y) {
    std::cout << "Two integer arguments: " << x << ", " << y << std::endl;
}
int main() {
    print();
    print(10);
    print(10,28);

    return 0;
}
