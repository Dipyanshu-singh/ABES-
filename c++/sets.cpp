#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> set1, set2, unionSet;
    int n1, n2, x,a = 0;

    // First set
    cout << "Enter number of elements in first set: ";
    cin >> n1;

    cout << "Enter elements of first set: ";
    for(int i = 0; i < n1; i++) {
        cin >> x;
        set1.insert(x);
    }

    // Second set
    cout << "Enter number of elements in second set: ";
    cin >> n2;

    cout << "Enter elements of second set: ";
    for(int i = 0; i < n2; i++) {
        cin >> x;
        set2.insert(x);
    }

    // Union
    // unionSet = set1;

    // for(int num : set2) {
    //     unionSet.insert(num);
    // }
    // Intersection
    cout << "Intersection: ";
()
    for(int num : set1) {
        if(set2.count(num)) {
            cout << num << " ";
            a++;
        }
    }
    cout<<a;
    // cout<<unionSet.size();
    // Difference (A-B)
    // cout << "Difference (A-B): { ";

    // for(int num : set1) {
    //     if(set2.find(num) == set2.end()) {
    //         cout << num << " ";
    //     }
    // }

    // Print union
    // cout << "Union of two sets: { ";
    // for(int num : unionSet) {
    //     cout << num << " ";
    // }
    // cout << "}";

    return 0;
}