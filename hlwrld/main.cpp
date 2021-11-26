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
    int a, b;
    cin >> a >> b;

    if (b==0) {
            cout <<"Impossible"<< endl;
        } else {
            cout << a/b << endl;
        }
    
    return 0;
}
