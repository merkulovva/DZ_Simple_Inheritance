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


    string getName() {
        return name;
    }

    unsigned int getHeight() {
        return height;
    }

    unsigned int getWeight() {
        return weight;
    }

    void setName(string n) {
        name = n;
    }

    void setHeight(unsigned int h) {
        height = h;
    }

    void setWeight(unsigned int w) {
        weight = w;
    }


};


class Granny : public Human {
private:
    unsigned int age;

public:

    Granny(string n, unsigned int h, unsigned int w, unsigned int age): Human(n, h, w) {
        this->age = age;
    }

    unsigned int getAge() {
        return age;
    }

};



class Daughter : public Granny {
public:
    Daughter(string n, unsigned int h, unsigned int w, unsigned int age): Human(n, h, w) {}
};



class GrandDaughter : public Daughter {
public:
    GrandDaughter(string n, unsigned int h, unsigned int w, unsigned int age): Human(n, h, w) {}
};



class Father : public Granny {
public:
    Father(string n, unsigned int h, unsigned int w, unsigned int age): Human(n, h, w) {}
};



class Child: public Father, public Granny {

};



class SuperPrekol
{
public:
    virtual void zvuk() = 0;

};


class Prekol : public SuperPrekol
{
public:
    void zvuk() override {
        cout << "hello world" << endl;
    }
};


int main() {

    Human chel1("Ivan", 195, 82);
    Human chel2("Marina", 165, 55);
    Human chel3("Oleg", 197, 94);

    Granny b1("Valentina", 160, 70, 68);
    cout << b1.getName() << endl;

    b1.setName("Irina");
    cout << b1.getName() << endl;

    cout << b1.getName() << " " << b1.getHeight() << "cm " << b1.getWeight() << "kg " << b1.getAge() << "y.o. " << endl;


    return 0;
}

