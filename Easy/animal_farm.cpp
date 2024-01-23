#include <bits/stdc++.h>

using namespace std;

int main(){

    int tt;
    cin >> tt;

    while(tt--){
        int res=0;
        int a,b,c;
        cin >> a >> b >> c;
        res+=a*2;
        res+=b*4; 
        res+=c*4;
        cout << res << endl;
    }

    return 0;
}