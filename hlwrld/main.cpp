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
        for (int i=a*(a<b)+b*(a>=b);i>=1;--i) {
            if ((b % i==0) && (a % i==0)) {
                cout << i << endl;
                break;
            }
        }
    return 0;
}
