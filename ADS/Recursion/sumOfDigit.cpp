#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = sumOfDigits(n);
    cout << "Sum of digits: " << sum << endl;
    return 0;
} 


#include <iostream>
using namespace std;
int power(int x, int n)
{
    if(n==0)
        return 1;
    else
        return x*power(x,n-1);
}

int main(){
    int x,n;
    cout<<"enter base and exponent"<<endl;
    cin>>x>>n;
    cout<<power(x,n);
}