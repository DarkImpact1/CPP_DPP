#include <iostream>
using namespace std;
class Euclids {
private:
    int num1;
    int num2;

public:
    void setData(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    int computeGCD() {
        if (num1 <= 0 || num2 <= 0) {
            return 0;
        }

        int a = num1;
        int b = num2;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void display() {
        cout << num1 << " " << num2 << endl;
        int gcd = computeGCD();
        cout << gcd << endl;
    }
};

int main() {
    Euclids euclids;
    int num1, num2;

    cin >> num1 >> num2;
    euclids.setData(num1, num2);
    euclids.display();

    return 0;
}
