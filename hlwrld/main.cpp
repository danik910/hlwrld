//
//  main.cpp
//  hlwrld
//
//  Created by Danil Valiullin on 21.11.2021.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

struct Country {
    string Name;
    string Capital;
    int Population;
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> laapenranta={1,4,15};
    map<int,char> helsinki;
    helsinki[0]='l';
    helsinki[15]='s';
    int p;
    
    Country a_Scandinavian_country = {"Finland","Helsinki",500000};
    vector<Country> Scandinavian_countries;
    Scandinavian_countries.push_back(a_Scandinavian_country);
    Scandinavian_countries.push_back({"Norway","Oslo",10000});
    cout << laapenranta[2] << helsinki[laapenranta[1]] <<'\n'<< Scandinavian_countries[1].Population<<'\n';
    
    p=0;
    
    if (Scandinavian_countries[p].Population<20000) {
        cout<<Scandinavian_countries[p].Name<<"'s population is "<<Scandinavian_countries[p].Population <<" which is less than 20000\n";
    } else {
        cout<<Scandinavian_countries[p].Name<<"'s population is "<<Scandinavian_countries[p].Population <<" which is more or equal than 20000\n";
    }
    string s="abcdefg";
    vector<int> nums = {1,12,14,35,11,5000000};
    for (char c:s) {
        cout<<",\n"<<c;
    }
    for (auto i:nums) {
        cout<<'\n'<<i;
    }
    int xount;
    xount=count(begin(nums),end(nums),11);
    sort(begin(nums),end(nums));
    for (auto n:nums) {
        cout<<n<<'\n';
    }
    //cout << xount;
    int j=1;
    for (int i=1;i<=5;++i){
        ++j;
        cout << i;
    }
    /*цикл
     
     
     while*/
    cout << '\n' << j << '\n';
    while(j<10){
        ++j;
        cout << '\n' << j << '\n';
    }
    cout << '\n' << j << '\n';
    return 0;
}
