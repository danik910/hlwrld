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
#include <map>
#include <set>
//#include <cmath>
//#include <algorithm>
//#include <chrono>
using namespace std;
//using namespace std::chrono;

//commit


int main(int argc, const char * argv[]) {
    set<set<string>> synonyms;
    string command;
    string word;
    int m;
    string s1, s2;
    cin >> m;
    for (int i=0;i<m;i++) {
        cin >> command;
        if (command=="ADD") {
            cin >> s1 >> s2;
            set<string> pair={s1,s2};
            synonyms.insert(pair);
        } else if (command=="COUNT"){
            cin >> word;
            int v=0;
            for (auto& j:synonyms) {
                if (j.count(word)>0)
                    v++;
            }
            cout << v << endl;
        } else {
            cin >> s1 >> s2;
            set<string> pair={s1,s2};
            if (synonyms.count(pair)>0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    set<string> ss;
    string s;
        
    int n;
    cin >> n;

    for (int i=0;i<n;i++) {
        cin >> s;
        ss.insert(s);
    }
    cout << ss.size() << endl;
}

