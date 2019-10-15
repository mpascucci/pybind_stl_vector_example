// MIT License
// Copyright (c) 2019 Marco Pascucci

#include <vector>
#include <numeric>
#include <string>
#include "mylib.hpp"
using namespace std;

namespace mylib
{

// =========================================================================
// A simple function
// =========================================================================
int sum(vector<double> v)
{
    return accumulate(v.begin(), v.end(), 0);
};

// =========================================================================
// A simple class
// =========================================================================
Fruit::Fruit(string name, int weight, bool good)
    : name(name), weight(weight), good(good){};

string Fruit::getName() { return name; };

int Fruit::getWeight() { return weight; };

}; // namespace mylib
