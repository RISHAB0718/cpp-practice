#include <iostream>
using namespace std;

//1. To print numbers from 1 to n.
    //--> using while loop

int main(){
    int i = 1;
    int n;
    cout << "Enter the number : ";
    cin >> n;

    while(i <= n){
        cout << i << " ";
        i++;
    }
    cout << endl;

    //--> using for loop

    cout << "Enter the number : ";
    cin >> n;
    for(int i=1 ; i <= n ; i++){
        cout << i << " ";
    }
    cout << endl;
  
 //2. To print the odd numbers only
 
 cout << "Enter the number : ";
 cin >> n;
 for(int i=1 ; i <= n ; i++){
    if(i % 2 != 0){
        cout << i << " ";
    }
 }
 cout << endl;

 //3. Sum of numbers from 1 to n.

 int sum = 0;
 cout << "Enter the number for sum : ";
 cin >> n;
 for(int i=1 ; i <= n ; i++){
    sum += i;
 }
 cout << sum << endl;

 //4. Sum off all odd numbers from 1 to n.

 int oddSum = 0;
 int a = 1;
 cout << "Enter the number : ";
 cin >> n;
 while(a <= n){
    if(a % 2 != 0){
        oddSum += a;
    }
    a++;
 } 
 cout << "oddSum = " << oddSum << endl;

 //5. Sum of all the even numbers from 1 to n.

 int evenSum = 0;
 cout << "Enter the number : ";
 cin >> n;
 for(int i=1 ; i <= n ; i++){
    if(i % 2 == 0){
        evenSum += i;
    }
 }
 cout << "evenSum = " << evenSum << endl;

    return 0;
}