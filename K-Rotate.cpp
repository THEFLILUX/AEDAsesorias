//
// Created by theflilux on 23/04/22.
//

#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){ //O(1)

    vector<int> v;
    int n = a.size();
    k = k % n;

    for(int i = 0; i < n; i++)
    {
        if(i < k)
        {
            v.push_back(a[n + i - k]);
        }
        else
        {
            v.push_back(a[i - k]);
        }
    }
    return v;
}

int main(){

    vector<int> vec = {1, 3, 5, 7, 9};
    int k = 2;

    vector<int> result = kRotate(vec, k);

    for (int i:result) {
        cout << i;
    }

    return 0;
}