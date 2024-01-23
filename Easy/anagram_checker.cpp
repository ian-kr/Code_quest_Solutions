#include <bits/stdc++.h>

using namespace std;

int main(){

    //cin.tie(0)->sync_with_stdio(0);

    int tt;
    cin >> tt;
    cin.ignore();

    while(tt--){
        string s;
        getline(cin,s);
        map<char,int> a;
        set<char> keys;
        string aa = "";
        string bb = "";
        bool flag = false;
        bool anagram = true;
        for(auto c : s){
            if(c == '|'){
                flag = true;
                continue;
            }
            if(!flag){
                a[c]++;
                aa.push_back(c);
            }
            if(flag){
                a[c]--;
                bb.push_back(c);
            }
            keys.insert(c);
        }

        for(auto key:keys){
            if(a[key] != 0){
                anagram = false;
                break;
            }
        }

        if(aa == bb){
            cout << s << " = NOT AN ANAGRAM" << endl;
        }
        else if(anagram){
            cout << s << " = ANAGRAM" << endl; 
        }
        else{
            cout << s << " = NOT AN ANAGRAM" << endl;
        }
    }

    return 0;
}