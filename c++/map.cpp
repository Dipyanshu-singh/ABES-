#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,string> m1;
    map<int,string> m2={{1,"ABES"},{2,"KIET"},{3,"JSS"}};
    m2.insert({4,"IMS"});
    cout<<m2[1]<<endl;
    cout<<m2.at(2)<<endl;
    m2[0]="ABES"; // add 
    m2[1]="ABESEC"; //update


    for(auto& p:m2){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;

}