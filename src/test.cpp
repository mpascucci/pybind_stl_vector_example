#include "mylib.hpp"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
    vector<double> v = {1,2,3,4,5,6};

    mylib::VectorInfo<double> vinfo = mylib::getVectorInfo<double>(v);

    cout << vinfo.length << endl;

    cout << mylib::sum(v) << endl;

    mylib::Fruit a("apple", 10, true);

    string good = a.good ? "good" : "bad";

    printf("%s, %d g, %s\n", a.getName().c_str(), a.getWeight(), good.c_str());
    
}