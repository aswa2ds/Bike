//
// Created by Edward Martin on 2018/10/27.
//

#ifndef BIKE_BIKESYSTEM_H
#define BIKE_BIKESYSTEM_H

#include "Bike.h"
#include "OfoBike.h"
#include "HelloBike.h"

class BikeSystem {
private:
    Bike **bike;
    int size;
    int capacity;
public:
    int search(const char* user_name, int start_x, int start_y, int acceptabhle_comfort_rating);
};


#endif //BIKE_BIKESYSTEM_H
