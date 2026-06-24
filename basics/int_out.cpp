#include <iostream>
using namespace std;
// Calculator
int main(){
    float a,b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    int sum = a+b;
    float product = a*b;
    float difference = a-b;
    float division = a/b; 
    cout << "Sum = "<< sum << endl;
    cout << "Product = "<< product << endl;
    cout << "Difference = "<< difference << endl;
    cout << "division = "<< division << endl;

return 0;
}
