#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    int p[n], at[n], bt[n];
    int ft[n], tat[n], wt[n];

    for(int i = 0; i < n; i++) {
        p[i] = i + 1;
        cout << "\nProcess P" << p[i] << endl;
        cout << "Arrival Time: ";
        cin >> at[i];
        cout << "Burst Time: ";
        cin >> bt[i];
    }

    for(int i = 0; i < n - 1; i++) {
        int flag = 0;
        for(int j = 0; j < n - i - 1; j++) {
            if(at[j] > at[j + 1]) {
                swap(at[j], at[j + 1]);
                swap(bt[j], bt[j + 1]);
                swap(p[j], p[j + 1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }

    ft[0] = at[0] + bt[0];

    for(int i = 1; i < n; i++) {
        if(ft[i - 1] < at[i])
            ft[i] = at[i] + bt[i];
        else
            ft[i] = ft[i - 1] + bt[i];
    }

    float avgWT = 0, avgTAT = 0;

    for(int i = 0; i < n; i++) {
        tat[i] = ft[i] - at[i];
        wt[i] = tat[i] - bt[i];

        avgWT += wt[i];
        avgTAT += tat[i];
    }

    avgWT /= n;
    avgTAT /= n;

    // Output
    cout << "\nP\tAT\tBT\tFT\tTAT\tWT\n";

    for(int i = 0; i < n; i++) {
        cout << "P" << p[i] << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << ft[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << endl;
    }

    cout << "\nAverage Waiting Time = " << avgWT;
    cout << "\nAverage Turn Around Time = " << avgTAT;

    return 0;
}