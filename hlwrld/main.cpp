//
//  main.cpp
//  hlwrld
//
//  Created by Danil Valiullin on 21.11.2021.
//

#include <iostream>
//#include <vector>
//#include <map>
#include <string>
#include <cmath>
//#include <algorithm>
using namespace std;

//commit
int main(int argc, const char * argv[]) {
    double a, b, c;
    cin >> a >> b >> c;
    double Det;
    double b2a;
    double sqrtDet;
    if (a==0) {
        if (b!=0) {
            cout << -c/b << endl;
        } else {
            cout << endl;
        }
    } else {
        Det=b*b-4*a*c;
        if (Det<0) {
            cout << endl;
        } else {
            b2a=-b/2/a;
            if (Det==0) {
                cout << b2a << endl;
            } else {
                sqrtDet=sqrt(Det)/2/a;
                cout << b2a+sqrtDet << " " << b2a-sqrtDet << endl;
            }
        }
    }
    return 0;
}
