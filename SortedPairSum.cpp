//
// Created by theflilux on 23/04/22.
//

#include<bits/stdc++.h>
#include <vector>
using namespace std;

//Expected Time Complexity: O(N)
//Hint: Two Pointer Approach
//https://www.geeksforgeeks.org/two-pointers-technique/

pair<int, int> closestSum(vector<int> arr, int x){

    int res_l, res_r;
    int n = arr.size();
    int l=0, r=n-1, diff = INT_MAX;

    while(r > l){
        if(abs(arr[l] + arr[r] - x) < diff){
            res_l = l;
            res_r = r;
            diff = abs(arr[l] + arr[r] - x);
        }

        if(arr[l] + arr[r] > x){
            r--;
        } else{
            l++;
        }
    }

    return {arr[res_l],arr[res_r]};
}

int main(){
    vector<int> vec = {10,22,28,29,30,40};
    int x = 54;

    pair<int, int> result = closestSum(vec, x);

    cout << result.first << " " << result.second;

    return 0;
}