#include "Calculator.h"


class Factorial:public Calculator{
private:
int number;
public:
Factorial(int n) {
    number = n;
}
void calculate() {
    result = 1;
    int i = 1;
    while (i <= number) {
        result = result * i;
        i = i + 1;
    }
}
 void print(){
        cout << "FactorialCalculator: " << number << "! = " << result <<endl;
    }


};