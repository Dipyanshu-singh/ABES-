#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
double sum(double a,double b){
    return a+b;
}

int main(){
    int a=sum(10,20);
    int b=sum(10,20,30);
    double c=sum(10.5,20.5);
    cout<<"Sum of 2 integers: "<<a<<endl;
    cout<<"Sum of 3 integers: "<<b<<endl;
    cout<<"Sum of 2 doubles: "<<c<<endl;
}