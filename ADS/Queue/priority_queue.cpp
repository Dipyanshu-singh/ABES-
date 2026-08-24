#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int main(){
    priority_queue<int> pq;
    
    pq.push(10);
    pq.push(30);
    pq.push(50);
    pq.push(70);
    cout<< "priority queue (max-heap)\n";
    while(!pq.empty()){
        cout<<"top element"<<pq.top()<<endl;
        pq.pop();
        cout<<"Remaining size: "<<pq.size()<<"\n";
    }
    if(pq.empty()){
        cout<<"empty priority queue"<<endl;
    }

}