// MIT License
// Copyright (c) 2019 Marco Pascucci

#include <vector>
#include <numeric>
#include <string>
using namespace std;

namespace mylib {


    // =========================================================================
    // A simple function
    // =========================================================================
    int sum(vector<double> v);

    // =========================================================================
    // A simple class
    // =========================================================================
    class Fruit {
        private:
            string name = "";
            int weight = 0;

        public:
            bool good = false;
            Fruit(string name, int weight, bool good);

            string getName();
            int getWeight();
    };

    // =========================================================================
    // A template class
    // =========================================================================
    template<typename T>
    class VectorInfo {
        public:
            size_t length;
            T sum;
            double mean;
            
            VectorInfo<T>(size_t length, T sum, double mean)
            : length(length), sum(sum), mean(mean) {};
    };


    // =============================================================================
    // A template function
    // =============================================================================
    template<typename T>
    VectorInfo<T> getVectorInfo(vector<T> v) {
        return VectorInfo<T>(
            v.size(),
            accumulate(v.begin(), v.end(), 0),
            accumulate(v.begin(), v.end(), 0)/v.size()
            );
    };
}; //namespace
