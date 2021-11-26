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
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;

//commit

bool IsPalindrom(string s) {
    //vector<char> s_letter_by_letter;
    int len=s.size();
    int median=len/2;
    for (int i=0;i<=median;++i) {
        if (s[i]!=s[len-1-i])
            return 0;
    }
    return 1;
}

vector<string> PalindromFilter(vector<string> words, int minLength) {
    vector<string> result;
    for (auto w:words) {
        if (IsPalindrom(w) && w.size()>=minLength) {
            result.push_back(w);
        }
    }
    return result;
}

int main(int argc, const char * argv[]) {
    auto start=steady_clock::now();
    vector<string> input={"aka","madam","toy","ejwiejwojeoq"};
    input=PalindromFilter(input, 4);
    //auto finish=steady_clock::now();
    for (auto i:input)
        cout << i << endl;
    auto finish=steady_clock::now();
    cout << duration_cast<microseconds>(finish-start).count() << endl;
}

