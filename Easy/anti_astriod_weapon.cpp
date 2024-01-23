#include <bits/stdc++.h>

using namespace std;

int main(){

    cin.tie(0)->sync_with_stdio(0);

    int tt; 
    cin >> tt;

    while(tt--){
        vector<tuple<double,double,double>> astroids;
        double n;
        cin >> n;
        for(int i = 0; i < n ; i++){
            int x,y;
            cin >> x >> y;
            double dist = sqrt((pow(x,2) ) + (pow(y,2))); 
            astroids.emplace_back(make_tuple(dist,x,y));
        }
        sort(astroids.begin(),astroids.end());
        for(int i = 0; i < n ; i++){
            cout << get<1>(astroids[i]) << " " << get<2>(astroids[i]) << endl;
        }
    }

    return 0; 
}