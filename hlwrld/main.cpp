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


class SortedStrings {
public:
  void AddString(const string& s) {
      set_of_strings.push_back(s);
      
      // добавить строку s в набор
  }
  vector<string> GetSortedStrings() {
      sort(begin(set_of_strings),end(set_of_strings));
// получить набор из всех добавленных строк в отсортированном порядке
    return set_of_strings;
  }
private:
    vector<string> set_of_strings;
  // приватные поля
};



    void PrintSortedStrings(SortedStrings& strings) {
      for (const string& s : strings.GetSortedStrings()) {
        cout << s << " ";
      }
      cout << endl;
    }

int main(int argc, const char * argv[]) {
      SortedStrings strings;
      
      strings.AddString("first");
      strings.AddString("third");
      strings.AddString("second");
      PrintSortedStrings(strings);
      
      strings.AddString("second");
      PrintSortedStrings(strings);
      
      return 0;
    }
