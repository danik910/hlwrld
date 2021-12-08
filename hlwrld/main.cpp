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
#include <algorithm>
//#include <chrono>
#include <ctype.h>
using namespace std;
//using namespace std::chrono;
string PrintOut (vector<string>& s) {
    string names=s[s.size()-1];
    if (s.size()>1) {
        names += " (";
        for (int i=s.size()-2; i>0 ;i--) {
            names += s[i];
            names += ", ";
        }
    names += s[0];
    names+=")";
    }
    return names;
}

class Person {
public:
  void ChangeFirstName(int year, const string& first_name) {
          name[year]=first_name;

    // добавить факт изменения имени на first_name в год year
  }
  void ChangeLastName(int year, const string& last_name) {
      surname[year]=last_name;// добавить факт изменения фамилии на last_name в год year
   }
  string GetFullName(int year) {
      string full_name, full_surname;
      bool name_valid=false, surname_valid=false;
      for (auto& n:name) {
          if (n.first>year)
              break;
          full_name=n.second;
          name_valid=true;
      }
      for (auto& n:surname) {
          if (n.first>year)
              break;
          full_surname=n.second;
          surname_valid=true;
      }
      if (!surname_valid && !name_valid) {
          return "Incognito";
      
      } else {
          full_name+=' ';
          full_name+=full_surname;
          return full_name;
      }
    // получить имя и фамилию по состоянию на конец года year
    }
    string GetFullNameWithHistory(int year) {
        // получить все имена и фамилии по состоянию на конец года year
        vector<string> full_names, full_surnames;
        bool name_valid=false, surname_valid=false;
        for (auto& n:name) {
            if (n.first>year)
                break;
            if (full_surnames.empty() || full_names[full_names.size()-1]!=n.second)
                full_names.push_back(n.second);
            name_valid=true;
        }
        for (auto& n:surname) {
            if (n.first>year)
                break;
            if (full_surnames.empty() || full_surnames[full_surnames.size()-1] != n.second)
                full_surnames.push_back(n.second);
            surname_valid=true;
        }
        if (!surname_valid && !name_valid) {
            return "Incognito";
        } else if (!surname_valid && name_valid) {
            return PrintOut(full_names) + " with unknown last name";
        } else if (surname_valid && !name_valid) {
            return PrintOut(full_surnames) + " with unknown first name";
        } else {
            return PrintOut(full_names) + " " + PrintOut(full_surnames);
        }
      }
private:
  // приватные поля
    map<int, string> surname;
    map<int, string> name;
    //string last_last_name="", last_first_name="";
    };

int main() {
  Person person;
  
  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
  for (int year : {1900, 1965, 1990}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeFirstName(1970, "Appolinaria");
  for (int year : {1969, 1970}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeLastName(1968, "Volkova");
  for (int year : {1969, 1970}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeFirstName(1990, "Polina");
  person.ChangeLastName(1990, "Volkova-Sergeeva");
  cout << person.GetFullNameWithHistory(1990) << endl;
  
  person.ChangeFirstName(1966, "Pauline");
  cout << person.GetFullNameWithHistory(1966) << endl;
  
  person.ChangeLastName(1960, "Sergeeva");
  for (int year : {1960, 1967}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeLastName(1961, "Ivanova");
  cout << person.GetFullNameWithHistory(1967) << endl;
  
  return 0;
}
