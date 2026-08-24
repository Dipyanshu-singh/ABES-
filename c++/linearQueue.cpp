#include<iostream>
using namespace std;
#define max 5
int queue[max];
int f=-1;r=-1;
void enqueue(int val){
    if (r==max-1){
        cout<<"Overfllow";
    }
    else{
        if(f==-1){
            f=0;
        }
        r=r+1;
    }
}