//
//  main.cpp
//  hlwrld
//
//  Created by Danil Valiullin on 21.11.2021.
//

#include <iostream>
//#include <vector>
//#include <map>
//#include <string>
//#include <cmath>
//#include <algorithm>
using namespace std;

//commit
int main(int argc, const char * argv[]) {
    string x;
    cin >> x;
    int i=0, j=0;
    for (auto X:x) {
        if (X=='f') {
            if (++i==2) {
                cout << j <<endl;
            }
            
        }
        ++j;
    }
    if (i==0) {
        cout << -2 <<endl;
    } else if (i==1) {
        cout << -1 <<endl;
    }
    
    return 0;
}
