#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {

    vector <int> vect;
    stringstream ss(str);
    int val;
    char ch;
    ss >> val;
    vect.push_back(val);
    while (ss >> ch >> val){
        vect.push_back(val);
    }
    
    return vect;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}