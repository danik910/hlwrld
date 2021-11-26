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
    int a,b;
    cin >> a >> b;
    while (a>0 && b>0) {
    if (a>b) {
        a = a % b;
    }
    else {
        b = b % a;
    }
    }
    cout << a+b;
    return 0;
}
