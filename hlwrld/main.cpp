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
using namespace std;
//using namespace std::chrono;

//commit


int main(int argc, const char * argv[]) {
    int m, j;
    vector<int> s;
    cin >> m;
    for (int i=0;i<m;i++) {
        cin >> j;
        s.push_back(j);
    }
    sort(begin(s),end(s),[](int x, int y){ return abs(x)<abs(y);});
    for (auto& j:s) {
        cout << j << " ";
    }
    cout << endl;
}

