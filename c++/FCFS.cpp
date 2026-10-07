#include <iostream>
using namespace std;

int main() {
    int n;cout<<"enter number of processes: "; cin>>n;
    vector<int> p(n),bt(n);
    vector<int> at(n),ct(n),tat(n),wt(n);
    for(int i=0;i<n;i++){
        p[i] = i+1;
        cout<< endl<<"Process P" << p[i] << endl;
        cout<< "Arrival Time: ";
        cin>> at[i];
        cout<< "Burst Time: ";
        cin>> bt[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(at[j]>at[j+1]){
                swap(at[j],at[j+1]);
                swap(bt[j],bt[j+1]);
                swap(p[j],p[j+1]);
            }

        }
    }
    ct[0]=at[0]+bt[0];
    for(int i=1;i<n;i++){
        if(ct[i-1]<at[i]){
            ct[i]=at[i]+bt[i];
        }
        else{
            ct[i]=ct[i-1]+bt[i];
        }
    }
    float avgtat=0,avgwt=0;
    for(int i=0;i<n;i++){
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];

        avgtat+=tat[i];
        avgwt+=wt[i];
        
    }
    avgtat/=n;
    avgwt/=n;

    cout<<"Name: Dipyanshu Singh"<<endl<<"2503201000469"<<endl<<"CSE-14"<<endl<<endl;
    cout<<endl<<"PID"<<"\t"<<"AT"<<"\t"<<"BT"<<"\t"<<"CT"<<"\t"<<"TAT"<<"\t"<<"WT"<<endl;
    for(int i=0;i<n;i++){
        cout
        <<"P"<<p[i]<<"\t"
        <<at[i]<<"\t"
        <<bt[i]<<"\t"
        <<ct[i]<<"\t"
        <<tat[i]<<"\t"
        <<wt[i]<<"\t"<<endl;

    }
    cout<<endl;
    cout<<"Average TAT: "<<avgtat;
    cout<<"Average WT: "<<avgwt;


}