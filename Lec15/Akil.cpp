#include <iostream>
#include <string>

using namespace std; 

class Person {
private:
    string name;
    int age;

public:
    Person() {
        cout << "Default constructor is called" << endl;
    }

    void setName(const string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void display() {
        cout << "Name of current object: " << name << endl;
        cout << "Age of current object: " << age << endl;
    }
};

int main() {
    Person person;

    string name;
    int age;

    cin >> name >> age;

    person.setName(name);
    person.setAge(age);

    person.display();

    return 0;
}
