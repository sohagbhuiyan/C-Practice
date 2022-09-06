#include<iostream>
using namespace std;
class Wall{
private:
double length;
double width;
public: 
    Wall(double len, double wid){
        length=len;
        width=wid;
    }
    double area(){
        return length*width;
    }
};
int main(){
    Wall wal1(2.5,3.2);
    Wall wal2(3.0,5.1);
    cout<<"The Area 1 is: "<<wal1.area()<<endl;
    cout<<"The Area is 2 is: "<<wal2.area();
    return 0;
}