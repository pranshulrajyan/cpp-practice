#include <iostream>
using namespace std;
//functions are a set of code which performs something for you
//they are used to modulariase code and increase readability and reusability.


    void printName(string name){
        cout << "hey " << name << endl;
    }
int main(){
    string name;
    cout << "enter your name: ";
    cin >> name;
    printName("pranshul");

    string name2;
    cout << "enter your name: ";
    cin >> name2;
    printName(name2);
    return 0;
  
}
// Take two numbers and print its sum:
int sum(int a,int b){
    return a+b;
}

int main(){
    int a,b;
    cout << "enter value of a: ";
    cin >> a ;
    cout << "enter value of b: ";
    cin >> b ;
    
    cout << "sum is: " << sum(a,b) << endl;
}

//pass by value;
void doSomething(int a){
    a += 100;
    cout << a << endl;
    a+= 5;
    cout << a << endl;
}

int main(){
    int a;
    cin >> a;
    doSomething(a);
    cout << a << endl;
    //pass by value means that we are passing a copy of the variable to the function, so any changes made to the variable inside the function will not affect the original variable outside the function.
    return 0;
}

//pass by reference;
void doSomethingNew(int &a){
    a += 100;
    cout << a << endl;
    a+= 5;
    cout << a << endl;
}   

int main(){
    int a;
    cin >> a;
    doSomethingNew(a);
    cout << a << endl;
    //pass by reference means that we are passing the address of the variable to the function, so any changes made to the variable inside the function will affect the original variable outside the function.
    return 0;
}
//Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.
class Solution{
public:
void reverse(vector<int>& arr){
        int n = arr.size();
        for(int i = 0; i < n/2; i++){
            swap(arr[i],arr[n-i-1]);
        }
         for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }

}
};
int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
         cin >> arr[i];
    }

    Solution obj;
    obj.reverse(arr);
    cout << endl;
    return 0;
}
