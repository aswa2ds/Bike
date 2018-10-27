//
// Created by apple on 2018/10/26.
//

#include "Bike.h"

bool Bike::unlock() {
    if(!occupied){
        occupied = true;
        return true;
    }
    else
        return false;
}

int Bike::lock() {
    if(occupied){
        occupied = false;
        int cost = compute_cost();
        distance = 0;
        return cost;
    }
    else
        return -1;
}

int Bike::move_to(int destinationX, int destinationY) {
        distance += abs(destinationX - x) + abs(destinationY - y);
        cout << "from " << x << "," << y << " to " << destinationX << "," << destinationY << endl;
        x = destinationX;
        y = destinationY;
        return distance;
}

int Bike::compute_cost(){
    int cost  = 1;
    return distance * cost;
}

int Bike::getDistance(int userX, int userY) {
    return abs(userX - x) + abs(userY - y);
}

bool Bike::better(int acceptableComfort) {
    return comfort >= acceptableComfort;
}

const char* Bike::getSerial() {
    return serial;
}

int Bike::getComfort() {
    return comfort;
}

bool Bike::realBetter(int acceptableComfort) {
    return comfort > acceptableComfort;
}