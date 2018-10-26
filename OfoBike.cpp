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

    }
}

int OfoBike::compute_cost() {
    int time = distance / 25;
}

