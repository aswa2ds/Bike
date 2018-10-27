//
// Created by Edward Martin on 2018/10/26.
//

#ifndef BIKE_HELLOBIKE_H
#define BIKE_HELLOBIKE_H

#include "Bike.h"

class HelloBike : public Bike{
private:
    const char* elockId;
    int costPerHour;
    int cost;
    int speed;
    int time;
public:
    HelloBike(const char*, const char*, int, int ,int);
    bool unlock() override;
    int lock() override;
    int compute_cost() override;

};


#endif //BIKE_HELLOBIKE_H
