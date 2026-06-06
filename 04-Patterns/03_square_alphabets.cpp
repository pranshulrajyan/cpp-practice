#include <iostream>
using namespace std;

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