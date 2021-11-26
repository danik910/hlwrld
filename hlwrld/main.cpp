//
//  main.cpp
//  hlwrld
//
//  Created by Danil Valiullin on 21.11.2021.
//

#include <iostream>
#include <vector>
//#include <map>
//#include <string>
//#include <cmath>
//#include <algorithm>
using namespace std;

//commit

int Factorial(int n) {
    int f=1;
    if (n>0) {
        for (int i=2;i<=n;++i) {
            f *= i;
        }
        return f;
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    cout << Factorial(n);
}
