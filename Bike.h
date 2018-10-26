//
// Created by apple on 2018/10/26.
//

#ifndef BIKE_BIKE_H
#define BIKE_BIKE_H

#include <iostream>
using namespace std;

class Bike {
protected:
    const char* serial;
    bool occupied;
    int distance;
    int x;          // 0, 100
    int y;          // 0, 100
    int comfort;    // 1,10
public:
    virtual bool unlock();
    virtual int lock();
    int move_to(int destinationX, int destinationY);
    virtual int compute_cost();
};


#endif //BIKE_BIKE_H
