//
// Created by apple on 2018/10/26.
//

#ifndef BIKE_OFOBIKE_H
#define BIKE_OFOBIKE_H

#include "Bike.h"

class OfoBike : protected Bike {
public:
    OfoBike(const char* id, int locationX, int locationY, int comfortRating);
    bool unlock() override;
    int lock() override;
    int compute_cost() override;
};


#endif //BIKE_OFOBIKE_H
