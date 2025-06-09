#include<iostream>

using namespace std;

class Operation{
    public:
        int number1;
        int number2;

        Operation(int a, int b){
            this->number1 = a;
            this->number2 = b;
        }

        Operation operator+(int p){
            cout << "Operation of summing Nums and subtracting given p " << number1 * number2 - p << endl;
        }
};

int main(){

    Operation* op = new Operation(4, 5);

    op->operator+(1);
    
}