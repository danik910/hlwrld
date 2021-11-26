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
int main(int argc, const char * argv[]) {
    int n;
    vector<bool> result;
    cin >> n;
    while (n>0) {
        result.push_back(n % 2);
        n = n/2;
    }
    for (int r=result.size();r>0;--r) {
        cout << result[r-1];
    }
    cout<<endl;
}
