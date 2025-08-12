#include <bits/stdc++.h>

using namespace std;
#define int long long
signed long long INF = 1e18;


vector<string> activity = {"Swimming", "Running", "Football"};
void recur(int x, vector<string> curr_scheduale) {
    if(x == 0){
        for(auto s: curr_scheduale){
            cout << s << ' ';
        }cout << endl;
        return;
    }
    for(string s: activity){
        if(curr_scheduale.size() == 0){
            vector<string> t = curr_scheduale;
            t.push_back(s);
            recur(x - 1, t);
        }
        else if(curr_scheduale.back() != s){
            vector<string> t = curr_scheduale;
            t.push_back(s);
            recur(x - 1, t);
        }
    }
}

int power(int x, int n){
    int ans = 1;
    for(int i = 0;i < n;i++){
        ans *= x;
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    recur(n, {});
    cout << "COUNT: " << 3 * power(2, n - 1);
}

signed main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}