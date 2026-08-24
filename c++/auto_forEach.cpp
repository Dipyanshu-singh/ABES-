#include <iostream>
using namespace std;
int main(){
    string str;

    cout<<"enter string to traverse: ";
    cin>>str;
    cout<<"characters are: "<<endl;
    for(auto x: str){
        cout<<x<<endl;
    }
}