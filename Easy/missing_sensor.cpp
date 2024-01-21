#include <bits/stdc++.h>

using namespace std;


int main(){

    int tt;
    cin >> tt;

    while(tt--){
        int n;
        cin >> n;
        set<int> s;
        for(int i = 0 ; i < n-1 ; i++){
            int val;
            cin >> val;
            s.insert(val);
        }
        int curr = 1;
        bool found = true;
        for(auto v : s){
            if(v != curr){
                cout << curr << endl;
                found = false;
                break;
            }
            curr++;
        }
      if(found) cout << curr << endl;  
    }

    return 0;
}