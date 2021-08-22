#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n,q,i,j,val,size;
    cin >> n >> q;
    
    vector <vector<int>> vect;
    for(i =0 ;i<n;i++){
        vector <int> small_vec;
        cin >> size;
        for (j = 0;j < size ;j++){
            cin >> val;
            small_vec.push_back(val);
        }
        vect.push_back(small_vec);
    }
    
    for (i = 0; i< q ; i++){
        int x,y;
        cin >> x >> y;
        cout << vect[x][y] << endl;
    }
    
    return 0;
}