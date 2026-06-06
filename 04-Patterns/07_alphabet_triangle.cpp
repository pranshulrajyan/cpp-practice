#include <iostream>
using namespace std;

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