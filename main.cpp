#include <iostream>
#include "Bike.h"
#include "OfoBike.h"
#include "HelloBike.h"

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
    Bike *helloBike = new HelloBike("hellobike111", "sdf", 0, 0, 4);
    helloBike->unlock();
    helloBike->unlock();
    cout << helloBike->lock() << endl;
    cout << helloBike->lock() << endl;
    helloBike->unlock();
    helloBike->move_to(80, 80);
    cout << helloBike->lock() << endl;
}