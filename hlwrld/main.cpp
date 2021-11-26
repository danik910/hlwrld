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
void Reverse(vector<int>& v) {
    int len=v.size();
    int median=len/2;
    for (int i=0;i<median;++i) {
        int tmp=v[i];
        v[i]=v[len-i-1];
        v[len-i-1]=tmp;
    }

}


int main(int argc, const char * argv[]) {
    vector<int> numbers = {1, 5, 3, 4, 2};
    Reverse(numbers);
    for (auto n:numbers) {
        cout << n << " ";
    }
    cout<< endl;
}

