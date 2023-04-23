#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<int> vec;
    int n, var, count=0;
    string s;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> var;
        vec.push_back(var);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++) {
        string temp = to_string(vec[i]);
        while(vec[i]+1 == vec[i+1]){
            count++;
            i++;
        }


        if(count >= 2){
            s += temp;
            s = s + "-" + to_string(vec[i]) + " ";
        } else if(count == 1){
            s = s + temp + " ";
            s = s + to_string(vec[i]) + " ";
        } else{
            s = s + to_string(vec[i]) + " ";
        }

        count = 0;
    }

    cout << s;

    return 0;
}
