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
//#include <cmath>
//#include <algorithm>
//#include <chrono>
using namespace std;
//using namespace std::chrono;

//commit


int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<int> numbers(n);
    int mean=0;
    for (int i=0;i<n;++i) {
        cin >> numbers[i];
        mean += numbers[i];
    }
    mean /= n;
    n = 0;
    int e=0;
    vector<int> numbers_exceed(n);
    for (int i:numbers) {
        if (i>mean) {
            numbers_exceed.push_back(n);
            e++;
        }
        n++;
    }
    cout << e << endl;
    for (int i:numbers_exceed) {
        cout << i << " ";
    }
    cout<< endl;
}

