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
    double n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;
    if (n>b) {
        cout << (100-y)/100*n <<endl;
    } else if (n>a) {
        cout << (100-x)/100*n <<endl;
    } else {
        cout << n << endl;
    }
    return 0;
}
