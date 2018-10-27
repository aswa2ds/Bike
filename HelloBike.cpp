//
// Created by Edward Martin on 2018/10/26.
//

#include "HelloBike.h"


HelloBike::HelloBike(const char * id, const char * elock_id, int locationX, int locationY, int comfortRating) {
    serial = id;
    elockId = elock_id;
    x = locationX;
    y = locationY;
    comfort = comfortRating;
    costPerHour = 2;
    speed = 25;
}

bool HelloBike::unlock() {
    if(!occupied){
        occupied = true;
        cout << "unlock " << serial << " " <<  elockId << endl;
        return true;
    }
    else{
        cout << "fail to unlock " << serial << " " <<  elockId << endl;
        return false;
    }
}

int HelloBike::lock() {
    if(occupied){
        occupied = false;
        cout << "lock " << serial << " " <<  elockId << endl;

        return compute_cost();
    }
    else{
        cout << serial << " " <<  elockId << " has been locked" << endl;
        return -1;
    }
}

int HelloBike::compute_cost() {
    time = (int)ceil((float)distance/(float)speed);
    cost = time * costPerHour;
    if(cost >= 5)
        cost -= 5;
    else
        cost = 0;
    distance = 0;
    return cost;
}