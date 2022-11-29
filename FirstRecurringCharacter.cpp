//
// Created by Turner on 11/28/22.
//

#include "FirstRecurringCharacter.h"
#include <set>

int FirstRecurringCharacter::findBruteForce(vector<int> array) { // O(n^2)

    // brute force compare every value against value in array + 1
    for (int i = 0; i < array.size(); i++){
        for(int j = i + 1; j < array.size(); j++){
            if(array.at(i) == array.at(j)){
                return array.at(i);
            }
        }
    }
    return -1;
}

int FirstRecurringCharacter::findSet(vector<int> array) { // O(n)
    set<int> storedInts; // use set to store values
    for(int i = 0; i < array.size()-1; i++){
        storedInts.insert({array.at(i), true}); // store current value into map
        if(storedInts.count(array.at(i+1))){  // check if next value already exists in map
            return array.at(i + 1); // return next value
        }
    }


    return -1;
}
