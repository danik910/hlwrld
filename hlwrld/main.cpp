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
//#include <chrono>
using namespace std;
using namespace std::chrono;

//commit

void UpdateIfGreater(int first, int& second) {
    if (first>second)
        second=first;
}

int main(int argc, const char * argv[]) {
    int a,b;
    while (1) {
        cin >> a >> b;
        UpdateIfGreater(a,b);
        cout << a << " "<< b << endl;
    }
}

