#include <iostream>
#include "Bike.h"
#include "OfoBike.h"
#include "HelloBike.h"
#include "BikeSystem.h"

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

    BikeSystem bikeSystem;
    bikeSystem.add(new OfoBike("ofo05", 30, 60, 9));
    bikeSystem.add(new HelloBike("hellobike01", "hellobike_elock15", 0, 0, 4));
    bikeSystem.add(new OfoBike("ofo01", 100, 100, 5));
    bikeSystem.add(new OfoBike("ofo02", 90, 0, 6));
    bikeSystem.add(new OfoBike("ofo03", 30, 70, 7));
    bikeSystem.add(new OfoBike("ofo04", 70, 0, 8));

    int idx1 = bikeSystem.search("xiaoming", 50, 50, 5);
    int idx2 = bikeSystem.search("xiaohong", 50, 50, 9);
    bikeSystem.unlock_bike(idx1);
    bikeSystem.unlock_bike(idx2);
    bikeSystem.ride_record(idx1, 100, 100);
    bikeSystem.ride_record(idx1, 100, 80);
    int cost = bikeSystem.lock_bike(idx1);
    cout << cost << endl;
}