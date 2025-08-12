#include <bits/stdc++.h>

using namespace std;
#define int long long

signed main() {
    vector<string> activity = {"Swimming", "Running", "Football"};

    // for 2 days
    for(int i = 0;i < 3;i++){
        string a = activity[i];
        for(int j = 0;j < 3;j++){
            if(i == j){
                continue;
            }
            cout << a << ' ' <<  activity[j] << endl;
        }
    }
    
    // for 3 days
    for(int i = 0;i < 3;i++){
        string a = activity[i];
        for(int j = 0;j < 3;j++){
            if(i == j){
                continue;
            }
            string b = activity[j];
            for(int k = 0;k < 3;k++){
                if(k == j){
                    continue;
                }
                cout << a << ' ' << b << ' ' <<  activity[k] << endl;
            }
        }
    }
    return 0;
}