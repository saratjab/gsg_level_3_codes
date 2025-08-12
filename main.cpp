#include <bits/stdc++.h>

using namespace std;
#define int long long

// week 1
// write recursive function to sum the digits of an integer
int F(int x){
    if(x == 0){
        return 0;
    }
    int last_digit = x % 10;
    return last_digit + F(x / 10);
}

// write recursive function to convert an integer to Binary
void bin(int x){
    // first time visit
    if(x == 0){
        cout << 0;
        return;
    }
    bin(x / 2);
    // second time visti
    cout << x % 2;
}
// 5
// *****
// ****
// ***
// **
// *
void triangle(int x){
    if(x == 0){
        return;
    }
    string s = string(x, '*');
    cout << s << endl;
    triangle(x - 1);
}
// 5
// *
// **
// ***
// ****
// *****
void triangleInv(int x){
    if(x == 0){
        return;
    }
    triangleInv(x - 1);
    string s = string(x, '*');
    cout << s << endl;
}
// *****
// ****
// ***
// **
// *
// *
// **
// ***
// ****
// *****
void shape(int x){
    if(x == 0){
        return;
    }
    string s = string(x, '*');
    cout << s << endl;
    shape(x - 1);
    cout << s << endl;
}

// generate all strings with 0s and 1s of length 5
void str(string s){
    if((int)s.size() == 5){
        cout << s << endl;
        return;
    }
    str(s + '1');
    str(s + '0');
}

// generate all possible phone numbers
void phone(string ph){
    if((int)ph.size() == 6){
        cout << "0592" << ph << endl;
        cout << "0595" << ph << endl;
        cout << "0597" << ph << endl;
        cout << "0598" << ph << endl;
        cout << "0599" << ph << endl;
        return;
    }
    for(int i = 0;i < 10;i++) {
        phone(ph + to_string(i));
    }
}

// generate all strings with 0s and 1s of length 5 with no 11
void str2(string s){
    if((int)s.size() == 5){
        cout << s << endl;
        return;
    }
    str2(s + '0');
    if(s.back() != '1'){
        str2(s + '1');
    }
}

// password of 3 char with a-z, A-Z, !, @, #, $, %, ^, &, *
string ch = "!@#$%^&*";
void psd(string s){
    if((int)s.size() == 3){
        cout << s << endl;
        return;
    }
    for(int i = 0;i < 26;i++){
        psd(s + char('a' + i));
    }
    for(int i = 0;i < 26;i++){
        psd(s + char('A' + i));
    }
    for(char spec: ch){
        psd(s + spec);
    }
}

// take it or leave it
vector<int> v = {7, 15, 9, 4, 2};
void takeOrLeave(int idx, vector<int> curr){
    if(idx == v.size()){
        for(auto e: curr){
            cout << e << ' ';
        }cout << endl;
        return;
    }
    takeOrLeave(idx + 1, curr);
    vector<int> new_bag = curr;
    new_bag.push_back(v[idx]);
    takeOrLeave(idx + 1, new_bag);
}

// is there group of numbers == 20
bool num(int idx, vector<int> curr){
    if(idx == v.size()){
        int total = 0;
        for(auto e: curr){
            total += e;
        }
        return total == 20;
    }
    num(idx + 1, curr);
    vector<int> t = curr;
    t.push_back(v[idx]);
    num(idx + 1, t);
    if(num(idx + 1, curr) || num(idx + 1, t))return true;
    return false;
}

//5199
//9115
//2115
//2134
// the maximum sum by going only right or down
int mx = 0;
int N, M;
vector<vector<int>> G;
int sum(int x, int y){
    if(x >= N){
        return 0;// if all numbers are pos 0 is good but if neg is allowed make it -INF
        // I have nothing so here is the minimum number possible
    }
    if(y >= M){
        return 0;
    }
    if(x == N - 1 && y == M - 1){
        return G[x][y];
    }
    int choic1 = sum(x, y + 1);// go right
    int choic2 = sum(x + 1, y);// go down
    int answer = G[x][y] + max(choic1, choic2); // take the max from your right or your bottom
    return answer;
    // every number will get back the max from it's right and it's bottom and the max take it
    // 00 will take the max from 01 and 10
    // 01 will take the max from 02 and 11
    // 10 will take the max from 11 and 20 and so on
}

// if we want the minmum
int sumMin(int x, int y){
    if(x >= N){
        // return +INF;
    }
    if(y >= M){
        // return +INF;
    }
    if(x == N - 1 && y == M - 1){
        return G[x][y];
    }
    int choic1 = sum(x, y + 1);
    int choic2 = sum(x + 1, y);
    int answer = G[x][y] + min(choic1, choic2);
    return answer;
}
signed main(){
    //cout << F(123) << endl;
    //bin(13);
    str2("");
    return 0;
}