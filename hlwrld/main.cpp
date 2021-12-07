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


int main(int argc, const char * argv[]) {
    
    map<string, string> countries;
    string command;
    string country;
    string new_capital;
    string old_capital;
    string old_country_name, new_country_name;

    
    int n;
    cin >> n;
    
    for (int i=0;i<n;i++) {
        cin >> command;
        if (command=="CHANGE_CAPITAL") {
            cin >> country >> new_capital;
            if (countries.count(country)==0) {
            countries[country]=new_capital;
            cout << "Introduce new country " << country << " with capital " << new_capital << endl;
            } else if (countries[country]==new_capital) {
            cout << "Country " << country << " hasn't changed its capital" << endl;
            } else {
                old_capital=countries[country];
                countries[country]=new_capital;
                cout << "Country " << country << " has changed its capital from " << old_capital << " to " << new_capital << endl;
            }
            
        } else if (command=="RENAME") {
            cin >> old_country_name >> new_country_name;
            
            
            // если запрос корректен и страна имеет столицу capital.
            if (countries.count(old_country_name)!=0 && countries.count(new_country_name)==0 && old_country_name != new_country_name ) {
                countries[new_country_name]=countries[old_country_name];
                countries.erase(old_country_name);
                cout << "Country " << old_country_name << " with capital " << countries[new_country_name] << " has been renamed to " << new_country_name << endl;
            }
            else {
            // если новое название страны совпадает со старым, страна old_country_name не существует или страна new_country_name уже существует;
                cout << "Incorrect rename, skip" << endl;
            }
        } else if (command=="ABOUT"){
            cin >> country;
            if (countries.count(country)==0)
                cout << "Country " << country << " doesn't exist" << endl;
            else
                cout << "Country " << country << " has capital " << countries[country] << endl;
        } else { //"DUMP"
            if (countries.empty())
            cout << "There are no countries in the world" << endl;
            else {
                PrintMap(countries);
            }
        }
    
    }
}

