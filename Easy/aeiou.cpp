#include <bits/stdc++.h>

using namespace std;

int main(){

    cin.tie(0)->sync_with_stdio(0);

    int tt;
    cin >> tt;
    int res = 0;
    cin.ignore();
    while(tt--){
        res = 0;
        string s;
        getline(cin,s);
        for(auto c: s){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                res++;
            }
        }
        cout << res << endl;
    }

    return 0;
}
