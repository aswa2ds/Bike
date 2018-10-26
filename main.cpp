#include <iostream>
#include "Bike.h"
#include "OfoBike.h"

int main() {
    Bike *tempBike = new OfoBike("ofo10", 40, 15, 4);
    tempBike->unlock();
    tempBike->unlock();
    cout << tempBike->lock() << endl;
    cout << tempBike->lock() << endl;
    tempBike = new OfoBike("ofobike09", 15, 55, 3);
    tempBike->unlock();
    tempBike->move_to(90, 85);
    cout << tempBike->lock() << endl;
}