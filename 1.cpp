#include <iostream>
using namespace std;

class Human {

private:
    string name;
    unsigned int height;
    unsigned int weight;

public:
    Human(string n, unsigned int h, unsigned int w) {
        name = n;
        height = h;
        weight = w;
    }

};


int main() {

    Human chel1("Ivan", 195, 82);
    Human chel2("Marina", 165, 55);
    Human chel3("Oleg", 197, 94);
    return 0;
}
