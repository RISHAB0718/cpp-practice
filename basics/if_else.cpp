#include <iostream>
using namespace std;
int main(){

    //1.To find if the number is positive or negative

    int a;
    cout << "Enter your number : ";
    cin >> a;
    if(a>=0){
        cout << "your number is positive" << endl;
    }else {
        cout << "your number is negative" << endl;
    }

   // 2.To find whether eligible to vote

   int age;
   cout << "Enter your age : ";
   cin >> age;
   if(age>=18){
    cout << "eligible to vote" << endl;
   }else{
    cout << "not eligible to vote\n";
   }

   //3.To find whether number is even or odd

   int b;
   cout << "Enter the number : ";
   cin >> b;
   if(b%2==0){
    cout << "Your number is even" << endl;
   }else{
    cout << "Your number is odd" << endl;
   }

   //4. Grading System

   int marks;
   cout << "Enter your marks : ";
   cin >> marks;
   if(marks>=90){
    cout << "Your grade is A\n";
   }else if(marks<90 && marks>=80){
    cout << "Your grade is B\n";
   }else if(marks<80 && marks>=70){
    cout << "Your grade is C\n";
   }else{
    cout << "You are Fail";
   }
    return 0;
}