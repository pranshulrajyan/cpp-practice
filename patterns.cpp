#include <iostream>
using namespace std;
//square pattern
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = 1; i <=n; i++){ //outer loop for rows
        for(int j = 1; j <= n; j++){ //inner loop for columns
            cout << j << " ";
        }
        cout << endl;
    }
}
//same can be done for stars:
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = 1; i <=n; i++){ //outer loop for rows
        for(int j = 1; j <= n; j++){ //inner loop for columns
            cout << "* ";
        }
        cout << endl;
    }
}
//same can be done for alphabets:
int main(){
    int n;
    cout << "enter the number of rows: ";
    cin >> n;
    for(int i = 1; i <= n; i++){ //outer loop for rows
        char ch = 'A';
        for(int j = 1; j <=n; j++){ //inner loop for columns
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
//square pattern but with counting numbers:
int main(){
    int n;
    cout << " enter integer : ";
    cin >> n;
   int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
//triangle pattern for stars:
int main(){
    int n; 
    cout << "enter the number of rows: ";
    cin >> n;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
//triangle pattern for numbers:
int main(){
    int n;
    cout << "enter the number of rows: ";
    cin >> n;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
//triangle pattern for alphabets:
int main(){
    int n;
    cout << "enter integer: ";
    cin >> n;
    for(int i = 1; i <=n; i++){
       char ch = 'A' + i - 1; //to get the correct alphabet for each row
        for(int j = 1; j <=i; j++){
           
            cout << ch << " ";
            
        }
        cout << endl;
    }
} 
//
int main(){
    int n;
    cout << "enter integer: ";
    cin >> n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
        }

    }
