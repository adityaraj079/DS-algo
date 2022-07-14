#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


int main()
{
    stringstream ss("23,4,56");
    char ch;
    int a, b, c;
    ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56

}



/*
vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    char ch;
    vector <int> test;
    int tmp;
    while(ss >> tmp) {      //??
        test.push_back(tmp);
        ss >> ch;           //??
    }
    
    return test;
}


*/