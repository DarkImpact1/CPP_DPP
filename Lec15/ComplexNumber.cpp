#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex() {
        real = 0.0;
        imaginary = 0.0;
    }

    void setValue(double realPart, double imaginaryPart) {
        real = realPart;
        imaginary = imaginaryPart;
    }

    Complex sum(const Complex& other) const {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    void display() const {
        cout << real << " + " << imaginary << "i";
    }

    ~Complex() {
    }
};

int main() {
    Complex c1, c2, c3;

    double real1, imaginary1;
    cin >> real1 >> imaginary1;
    c1.setValue(real1, imaginary1);

    double real2, imaginary2;
    cin >> real2 >> imaginary2;
    c2.setValue(real2, imaginary2);

    c3 = c1.sum(c2);

    cout << "Sum of two complex numbers is ";
    c3.display();
    cout << endl;

    return 0;
}
