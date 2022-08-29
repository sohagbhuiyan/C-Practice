// program to print a text

#include <iostream>
using namespace std;

// display a number
void displayNum(int a, float b) {
    cout << "The 1st number is "<<a;
    cout << "\n The 2nd number is "<<b;
};

int main() {
     
     int a;
     double b;
    cout<<"1st num:";
    cin>>a;
    cout<<"\n2nd num: ";
    cin>>b;
    // calling the function
    displayNum(a, b);
    return 0;
}