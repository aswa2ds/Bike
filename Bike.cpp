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
        int dist = distance;
        distance = 0;
        return dist;
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