#include <iostream>
#include <string>

using namespace std;

class Welcome {
public:
    string name;
    Welcome(string name) {
        cout << "Welcome "<<name;
    }
};

class Hello {
public:
    string name;
    Hello(string name) {
        cout << "Hello "<<name;
    }
};

int main() {
    string name;
    cin>>name;
    Welcome welcome(name);
    cout<<endl;
    Hello hello(name);

    
    return 0;
}
