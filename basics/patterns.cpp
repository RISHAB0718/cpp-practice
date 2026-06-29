#include <iostream>
using namespace std;
int main(){

    //square patterns 

    // 1.
    
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for(int i=0 ; i < n ; i++){
        for(int j=1 ; j <= n ; j++){
            cout << j <<" " ;
        }
        cout << endl;
    }
    cout << endl;

    // 2.

    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < n ; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // 3.

    for(int i=0 ; i < n ; i++){
        char ch = 'A';
        for(int j=0 ; j < n ; j++){
            cout << ch <<" " ;
            ch += 1;
        }
        cout << endl;
    }
    cout << endl;

    // 4.
    
    int num=1;
    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < n ; j++){
            cout << num <<" " ;
            num += 1;
        }
        cout << endl;
    }
    cout << endl;

     // 5.

    char ch = 'A';
    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < n ; j++){
            cout << ch <<" " ;
            ch += 1;
        }
        cout << endl;
    }
    cout << endl;

    // 6.

    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < i+1 ; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // 7.

    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < i+1 ; j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 8.

    char cha='A';
    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < i+1 ; j++){
            cout << cha <<" " ;
        }
        cha += 1;
        cout << endl;
    }
    cout << endl;

    // 9.

    for(int i=0 ; i < n ; i++){
        for(int j=1 ; j <= i+1 ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 10.

    for(int i=0 ; i < n ; i++){
        for(int j=i+1 ; j > 0 ; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 11.

    int numb=1;
    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < i+1 ; j++){
            cout << numb << " ";
            numb++;
        }
        cout << endl;
    }
    cout << endl;

    // 12.

    char chara='A';
    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < i+1 ; j++){
            cout << chara << " ";
            chara++;
        }
        cout << endl;
    }
    cout << endl;

    // 13.

    for(int i=0 ; i < n ; i++){
         char charac='A' + i;
        for(int j=0 ; j < i+1 ; j++){
            cout << charac << " ";
            charac--;
        }
        cout << endl;
    }
    cout << endl;

    // 14.

    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < i ; j++){
            cout << " ";
        }
        for(int j=0 ; j < n-i ; j++){
            cout << i+1;     
        }
        cout << endl;
    }
    cout << endl;

    // 15.

    char charact='A';
    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < i ; j++){
            cout << " ";
        }
        for(int j=0 ; j < n-i ; j++){
            cout << charact;
        }
        charact++;
        cout << endl;
    }
    cout << endl;

    // 16.

    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < n-i-1 ; j++){
            cout << " ";
        }
        for(int j=1 ; j <= i+1 ; j++){
            cout << j;
        }
        for(int j=i ; j > 0 ; j--){
            cout << j;
        }
        cout << endl;
    }
    cout << endl;

    // 17.

    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < n-i-1 ; j++){
            cout << " ";
        }
        cout << "*";
        if(i != 0){
            for(int j=0 ; j < 2 * i - 1 ; j++){
            cout << " ";
        }
        cout << "*";
        }
        cout << endl;
    }

    for(int i=0 ; i < n-1 ; i++){
        for(int j=0 ; j < i+1 ; j++){
            cout << " ";
        }
        cout << "*";
        if(i != n-2){
            for(int j=0 ; j < 2*(n-i)-5 ; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // 18. 
    
    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < i+1 ; j++){
            cout << "*";
        }
        if(i != n-1){
            for(int j=0 ; j < 2*(n-i)-2 ; j++){
            cout << " ";
        }
        }
        for(int j=0 ; j < i+1 ; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i=1 ; i < n ; i++){
        for(int j=0 ; j < n-i ; j++){
            cout << "*";
        }
            for(int j=0 ; j < 2*i ; j++){
                cout << " ";
            }
        for(int j=0 ; j < n-i ; j++){
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}