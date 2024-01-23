#include <bits/stdc++.h>

using namespace std;

int main(){

    cin.tie(0)->sync_with_stdio(0);

    int tt;
    cin >> tt;
    cin.ignore();

    while(tt--){
        string s;
        getline(cin,s);
        set<char> a;
        set<char> b;
        bool flag = false;
        bool agent = true;
        for(auto c : s){
            if((c >= 'a' && c <= 'z') || (c>='A' && c <= 'Z')) continue;
            if(c == '|'){
                flag = true;
                continue;
            }
            if(flag){
                if(a.count(tolower(c)) == 0){
                    agent = false;
                    break;
                }
            }
            if(!flag){
                a.insert(tolower(c));
            }
        }
        if(agent) cout << "That's my secret contact!" << endl;
        else cout << "You're not my secret agent!" << endl;
    }

    return 0;
}