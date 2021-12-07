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
    
    map<string, vector<string>> buses;
    map<string, vector<string>> stops;
    string command;
    string country;
    string new_capital;
    string old_capital;
    string old_country_name, new_country_name;

    
    int n;
    cin >> n;
    int stop_count;
    string bus;
    string stop;
    for (int i=0;i<n;i++) {
        cin >> command;
        if (command=="NEW_BUS") { //NEW_BUS bus stop_count stop1 stop2 .
            cin >> bus;
            cin >> stop_count;
            for (int j=0;j<stop_count;j++) {
                cin >> stop;
                buses[bus].push_back(stop);
                stops[stop].push_back(bus);
            }
        } else if (command=="BUSES_FOR_STOP") {
            cin >> stop;
            if (stops.count(stop)>0) {
            Toilets_for_shit(stops[stop]);
            }
            else
                cout << "No stop" << endl;
        } else if (command=="STOPS_FOR_BUS") {
            cin >> bus;
            if (buses.count(bus)>0) {
                for (auto& b:buses[bus]) {
                cout << "Stop " << b << ": ";
                   Buses_for_stop(stops[b], bus);
                }
            
            }
            else
                cout << "No bus" << endl;
        } else {
            if (!buses.empty())
            for (const auto& b : buses) {
                cout << "Bus " << b.first << ": ";
                Toilets_for_shit(buses[b.first]);
            }
            else
                cout << "No buses" << endl;
                
        }
    }
}

