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
    return 0;
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
    return 0;
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
    return 0;
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
    return 0;
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
    return 0;
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
    return 0;
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
    return 0;
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
      return 0;
    }
//reverse triangle pattern for numbers:
int main(){
     int n = 4;

     for(int i=0; i<n; i++){
        for(int j = i+1; j>0; j--){
            cout << j << " ";
        }
        cout << endl;
     }
     
     return 0;
}
//floyd's triangle pattern:
int main(){
    int n = 5;
    int num = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j <i+1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;

    }
    return 0;
}
//inverted triangle pattern:
int main(){
    int n = 4;
    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){ 
            cout << " ";
        }
         for(int j = 0; j<n-i; j++){
        cout << (i+1);
         }
    cout << endl;
    }
    return 0;
}
//inverted triangle pattern of charecters:
int main(){
    int n = 5;
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < n-i; j++){
            cout << ch;
            
        }
        ch = ch+ 1;
        cout << endl;
    }
    return 0;
}
//pyramid pattern:
