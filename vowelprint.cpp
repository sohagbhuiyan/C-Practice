#include<iostream>
using namespace std;
int main(){
    char a;
    bool lowercase,uppercase ;
    cout<<"Enter a char: ";
    cin>>a;
    uppercase =(a=='A'|| a=='B'||a=='C'|| a=='D'||a=='E');
    lowercase = (a=='a'|| a=='b'||a=='c'|| a=='d'||a=='e');
    if(!isalpha(a)){
        cout<<"Is not a alphabet!"<<endl;
    }
    else if(lowercase||uppercase){
        cout<<"Is a Vowel!"<<endl;
    }
    else{
        cout<<"Is a Consonent!"<<endl;

    }
    return 0;
}
