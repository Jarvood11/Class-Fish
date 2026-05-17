// Class Fish.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;

class Dog {
public:
    string name;
    string breed;
    string high;

    void display() {
        cout << "Dog Name: " << name << endl;
        cout << "Breed: " << breed << endl;
        cout << "high :" << high << endl;
    }
};

class Bird : public Dog {
public:

    string name;
    string breed;
    string length;

      void display() {
           cout << "Fish Name: " << name << endl;
            cout << "Breed: " << breed << endl;
           cout<<"length :"<<length<<endl;
       }
};

int main() {
    Dog tuffy;

    tuffy.name = "Tuffy";
    tuffy.breed = "Papillon";
    tuffy.high = "90";

    Bird nalim;
    nalim.name = "nalim";
    nalim.breed = "fish";
    nalim.length = "45";


    tuffy.display();

    nalim.display();

    return 0;
}




