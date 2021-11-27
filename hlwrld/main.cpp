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
//#include <cmath>
//#include <algorithm>
//#include <chrono>
using namespace std;
//using namespace std::chrono;

//commit
const vector<int> months = {31,28,31,30,31,30,31,31,30,31,30,31};

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    string command;
    int i;
    string s;
    vector<string> queue(31);
    vector<int> nums(31);
    vector<string> output;
    vector<int> numout;
    int next_month;
    //vector<int> count_vec;
    int month=0;
    for (int m=0;m<n;m++) {
        cin>>command;
        if (command=="ADD") {
            cin>>i;
            cin>>s;
            if (nums[i-1]>0)
                queue[i-1]=queue[i-1] + " " + s;
            else
                queue[i-1]=queue[i-1] + s;
            nums[i-1]++;
        }
        else if (command=="DUMP") {
            cin>>i;
            output.push_back(queue[i-1]);
            numout.push_back(nums[i-1]);
        }
        else if (command=="NEXT") {
            //queue_int=queue;
            if (month==11)
                next_month=0;
            else
                next_month=month+1;
            for (int v=months[next_month]; v<months[month]; v++){
                if (nums[months[next_month]-1]>0)
                    queue[months[next_month]-1] += (" " + queue[v]);
                else
                    queue[months[next_month]-1] += (queue[v]);
                nums[months[next_month]-1] += nums[v];
            }
            queue.resize(months[next_month]);
            nums.resize(months[next_month]);
            month=next_month;
        }
    }
    int m=0;
    for (auto numer:numout) {
        cout << numout[m] << " " << output[m] << endl;
        m++;
    }
}

