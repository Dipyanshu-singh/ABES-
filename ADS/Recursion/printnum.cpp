#include <iostream>
using namespace std;
void printnum(int n){
    if(n==1){
        cout<<"1\n";
        return;
    }
    cout<<n<<endl;
    printnum(n-1);
}

int main(){
    printnum(100);

}