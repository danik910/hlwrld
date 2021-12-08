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
#include <set>
//#include <cmath>
#include <algorithm>
//#include <chrono>
#include <ctype.h>
using namespace std;
//using namespace std::chrono;

//commit
string Tolower(string& s) {
    for (auto& j:s) {
        j=(char)tolower(j);
    }
    return s;
}


int main(int argc, const char * argv[]) {
    int m;
    string j;
    vector<string> s;
    cin >> m;
    for (int i=0;i<m;i++) {
        cin >> j;
        s.push_back(j);
    }
    sort(begin(s),end(s),[](string x, string y){ return Tolower(x)<Tolower(y);});
    for (auto& j:s) {
        cout << j << " ";
    }
    cout << endl;

}

