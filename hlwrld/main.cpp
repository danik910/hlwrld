//
//  main.cpp
//  hlwrld
//
//  Created by Danil Valiullin on 21.11.2021.
//

#include <iostream>
#include <vector>
//#include <map>
#include <string>
#include <map>
//#include <cmath>
//#include <algorithm>
//#include <chrono>
using namespace std;
//using namespace std::chrono;

//commit
const vector<int> months = {31,28,31,30,31,30,31,31,30,31,30,31};

map<char, int> Letters(const string& s) {
    map<char, int> m;
    for (int j=0;j<s.size();j++) {
        ++m[s[j]];
    }
    return m;
}

int main(int argc, const char * argv[]) {
    
    string s1, s2;
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> s1 >> s2;
        if (Letters(s1)==Letters(s2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

