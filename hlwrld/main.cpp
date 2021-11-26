//
//  main.cpp
//  hlwrld
//
//  Created by Danil Valiullin on 21.11.2021.
//

#include <iostream>
//#include <vector>
//#include <map>
#include <string>

//#include <algorithm>
using namespace std;

//commit
int main(int argc, const char * argv[]) {
    string a, b, c;
    cin >> a >> b >> c;
    if (a<b) {
        if (a<c) {
            cout << a << endl;
        }
        else {
            cout << c << endl;
        }
    }
    else {
        if (b<c) {
            cout << b << endl;
        }
        else {
            cout << c << endl;
        }
    }
    return 0;
}
