#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter number of processes: "; cin>>n;
    vector<int> p(n),bt(n);
    vector<int> at(n),ct(n),tat(n),wt(n),pr(n);
    for(int i=0;i<n;i++){
        p[i] = i+1;
        cout<< endl<<"Process P" << p[i] << endl;
        cout<< "Arrival Time: ";
        cin>> at[i];
        cout<< "Burst Time: ";
        cin>> bt[i];
    }

}