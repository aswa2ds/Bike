//
// Created by apple on 2018/10/26.
//

#ifndef BIKE_BIKE_H
#define BIKE_BIKE_H

#include <iostream>
#include <cmath>
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
    Bike(){occupied = false; distance = 0; x = 0; y = 0;}
    Bike(const char* id, int locX, int locY, int comfRating){serial = id; x = locX; y = locY; comfort = comfRating;}
    virtual bool unlock();
    virtual int lock();
    int move_to(int destinationX, int destinationY);
    virtual int compute_cost();
    int getDistance(int userX, int userY);
    bool better(int acceptableComfort);
    const char *getSerial();
};


#endif //BIKE_BIKE_H
