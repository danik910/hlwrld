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
//#include <algorithm>
//#include <chrono>
using namespace std;
//using namespace std::chrono;

//commit


int main(int argc, const char * argv[]) {
    
    set<string> ss;
    string s;
        
    int n;
    cin >> n;

    for (int i=0;i<n;i++) {
        cin >> s;
        ss.insert(s);
    }
    cout << ss.size() << endl;
}

