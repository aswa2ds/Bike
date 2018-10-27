//
// Created by apple on 2018/10/26.
//

#include "OfoBike.h"

OfoBike::OfoBike(const char *id, int locationX, int locationY, int comfortRating) {
    serial = id;
    occupied = false;
    distance = 0;
    x = locationX;
    y = locationY;
    comfort = comfortRating;
    costPerHour = 2;
    speed = 21;
}

bool OfoBike::unlock() {
    if(!occupied){
        occupied = true;
        cout << "unlock " << serial << endl;
        return true;
    }
    else{
        cout << "fail to unlock " << serial << endl;
        return false;
    }
}

int OfoBike::lock() {
    if(occupied){
        occupied = false;
        cout << "lock " << serial << endl;

        return compute_cost();
    }
    else{
        cout << serial << " has been locked" << endl;
        return -1;
    }
}

int OfoBike::compute_cost() {
    time = (int)ceil((float)distance/(float)speed);
    cost = time * costPerHour;
    if(cost >= 7)
        cost -= 7;
    else
        cost = 0;
    distance = 0;
    return cost;
}

