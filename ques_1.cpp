#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;

void two_smallest_ele(vector<int> &arr){
    vector<int> res;
    set<int> hash;
    for (auto a : arr){
        hash.insert(a);
    }

    for (auto h : hash){
        res.push_back(h);
        if (res.size()==2) break;
    }
    cout<<"Smallest"<<endl;
    cout<<res[0]<<endl;
    cout<<"Second Smallest"<<endl;
    cout<<res[1]<<endl;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    two_smallest_ele(arr);

    return 0;
}

