//
// Created by Edward Martin on 2018/10/27.
//

#include "BikeSystem.h"

int BikeSystem::search(const char *user_name, int start_x, int start_y, int acceptabhle_comfort_rating) {
    int index = -1;
    int dist = -1;
    for(int i = 0; i < size; ++i){
        if(bike[i]->better(acceptabhle_comfort_rating)){
            if(index == -1){
                index = i;
                dist = bike[i]->getDistance(start_x, start_y);
            }
            else{
                if(bike[i]->getDistance(start_x, start_y) < dist) {
                    index = i;
                    dist = bike[i]->getDistance(start_x, start_y);
                }
            }
        }
    }
    if(index == -1){
        cout << user_name << " found no bikes available" << endl;
        return -1;
    }
    else{
        cout << user_name << " selected " << bike[index]->getSerial();
        return index;
    }
}