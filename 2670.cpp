#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int cnt[100] = {1};
    for(int i = 1; i < n; i++){
        int tmp = 0;
        for(int j = i - 1; j >= 0; j--){
            if(v[i] == v[j]){
                tmp = 1;
                break;
            }
        }
        if(tmp == 0){
            cnt[i] = cnt[i - 1] + 1;
        }
        else{
            cnt[i] = cnt[i - 1];
        }
    }
    
}
