//
// Created by apple on 2018/10/26.
//

#ifndef BIKE_BIKE_H
#define BIKE_BIKE_H

#include <iostream>
#include <string>
using namespace std;

class Bike {
protected:
    string serical;
    bool occupied;
    int distance;
    int x;          // 0, 100
    int y;          // 0, 100
    int comfort;    // 1,10
public:
   bool unlock();
   int lock();
   int move_to(int destinationX, int destinationY);
   int compute_cost();
};


#endif //BIKE_BIKE_H
