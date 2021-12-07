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
void PrintMap(const map<string, string>& countries) {
for (auto j: countries)
    cout << j.first << '/' << j.second << ' ';
cout << endl;
}

void Toilets_for_shit(const vector<string>& toilets_shit) {
for (auto j: toilets_shit)
    cout << j << ' ';
cout << endl;
}

void Buses_for_stop(const vector<string>& toilets_shit, string exclusion) {
    if (toilets_shit.size()>1) {
for (auto j: toilets_shit)
    if (j!=exclusion)
        cout << j << ' ';
    }
    else
        cout << "no interchange";
cout << endl;
}

int main(int argc, const char * argv[]) {
    
    map<set<string>, int> buses;
    string command;
    set<string> stops;
    
    int n,m;
    cin >> n;

    int bus=0;
    string stop;
    for (int i=0;i<n;i++) {
        cin >> m;
        stops.clear();
        for (int j=0;j<m;j++) {
            cin >> stop;
            stops.insert(stop);
        }
        if (buses.count(stops)==0) {
            buses[stops]=++bus;
            cout << "New bus " << bus << endl;
        }
        else
            cout << "Already exists for " << buses[stops] << endl;

    }
}

