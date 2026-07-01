#include <iostream>

int main() {
    int age = 18;
    int leave = 5;

    if (age > 18 && leave <= 10) {
        std::cout << "Then he is okay man\n";
    }
    else {
        std::cout << "not okay\n";
    }
    int x=10,y=105;
    x>y ?  std::cout<<"c is greater" : std::cout<<"y is the greater"<< y;
    return 0;
}
