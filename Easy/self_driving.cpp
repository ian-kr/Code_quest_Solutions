#include <bits/stdc++.h>

using namespace std;

int main(){

    cin.tie(0)->sync_with_stdio(0);

    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        double speed = 0;
        double dist = 0;
        string speed_s = "";
        string dist_s = "";
        bool flag = false;
        for(int i = 0; i < s.size(); i++){
            if(!flag){
                if(s[i] == ':'){
                    flag = true;
                    continue;
                }
                speed_s.push_back(s[i]);
            }
            if(flag){
                dist_s.push_back(s[i]);
            }
        }
        speed = stod(speed_s);
        dist = stod(dist_s);
        if(speed >= dist) cout <<"SWERVE\n";
        else if((speed*5) >= dist) cout << "BRAKE\n";
        else cout << "SAFE\n";
    }

    return 0;
}