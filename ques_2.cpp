#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;

priority_queue<int> maxheap;
priority_queue<int , vector<int> , greater<int>> minheap;

void findMedian() {
        if (minheap.size()==maxheap.size()){
            cout<<(double)(minheap.top()+maxheap.top())*0.5<<endl;
        }
        else {
            cout<<(double)(minheap.top())<<endl;
        }
    }

void add_num(int num) {
        minheap.push(num);

        if (minheap.size() > maxheap.size()+1){
            maxheap.push(minheap.top());
            minheap.pop();
        }

        if (!minheap.empty() && !maxheap.empty() && minheap.top()<maxheap.top()){
            int x = minheap.top();
            int y = maxheap.top();
            minheap.pop();
            maxheap.pop();
            minheap.push(y);
            maxheap.push(x);
        }

        findMedian();

    }

int main() {
    int n;
    cin>>n;
    vector<int> arr;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
        add_num(x);
    }
    return 0;
}
