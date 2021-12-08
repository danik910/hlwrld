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
    map<string,set<string>> synonyms;
    string command;
    string word;
    int m;
    string s1, s2;
    cin >> m;
    for (int i=0;i<m;i++) {
        cin >> command;
        if (command=="ADD") {
            cin >> s1 >> s2;
            //set<string> pair={s1,s2};
            synonyms[s1].insert(s2);
            synonyms[s2].insert(s1);
        } else if (command=="COUNT"){
            cin >> word;
            //int v=0;
            //for (auto& j:synonyms) {
            //    if (j.count(word)>0)
            //        v++;
            //}
            cout << synonyms[word].size() << endl;
        } else {
            cin >> s1 >> s2;
            set<string> pair={s1,s2};
            if (synonyms[s1].count(s2)>0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

}

