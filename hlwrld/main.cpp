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
      } else if (!surname_valid && name_valid) {
          return full_name + " with unknown last name";
      } else if (surname_valid && !name_valid) {
          return full_surname + " with unknown first name";
      } else {
          full_name+=' ';
          full_name+=full_surname;
          return full_name;
      }
    // получить имя и фамилию по состоянию на конец года year
  }
private:
  // приватные поля
    map<int, string> surname;
    map<int, string> name;
    };

int main(int argc, const char * argv[]) {

      Person person;
      
      person.ChangeFirstName(1965, "Polina");
      person.ChangeLastName(1967, "Sergeeva");
      for (int year : {1900, 1965, 1990}) {
        cout << person.GetFullName(year) << endl;
      }
      
      person.ChangeFirstName(1970, "Appolinaria");
      for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
      }
      
      person.ChangeLastName(1968, "Volkova");
      for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
      }
      
    }
