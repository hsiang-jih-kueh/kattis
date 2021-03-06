#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

//template ends

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char input;
    deque<char> output;
    string line;
    getline(cin, line);
    for(char input : line){
        if(input=='<'){
            output.pop_back();
        }
        else{
            output.push_back(input);
        }
    }
    while(!output.empty()){
        cout << output.front();
        output.pop_front();
    }
    return 0;
}