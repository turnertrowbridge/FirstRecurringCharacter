#include <iostream>
#include "FirstRecurringCharacter.h"

using namespace std;

int main() {

    cout << "findBruteForce function" << endl;

    // 2 recurs first, returns 2
    vector<int> arrayOfInts = {1, 2, 3, 4, 5, 6, 7, 2};
    cout << "First recurring character is " << FirstRecurringCharacter::findBruteForce(arrayOfInts) << endl;

    // 6 recurs first, returns 6
    arrayOfInts = {2, 6, 6, 3, 4, 5, 4, 7};
    cout << "First recurring character is " << FirstRecurringCharacter::findBruteForce(arrayOfInts) << endl;

    // no recurring int, returns -1
    arrayOfInts = {1, 2, 3, 4, 5, 6, 7};
    cout << "First recurring character is " << FirstRecurringCharacter::findBruteForce(arrayOfInts) << endl;

    cout << endl << "findSet function" << endl;

    // 2 recurs first, returns 2
    arrayOfInts = {1, 2, 3, 4, 5, 6, 7, 2};
    cout << "First recurring character is " << FirstRecurringCharacter::findSet(arrayOfInts) << endl;

    // 6 recurs first, returns 6
    arrayOfInts = {2, 6, 6, 3, 4, 5, 4, 7};
    cout << "First recurring character is " << FirstRecurringCharacter::findSet(arrayOfInts) << endl;

    // no recurring int, returns -1
    arrayOfInts = {1, 2, 3, 4, 5, 6, 7};
    cout << "First recurring character is " << FirstRecurringCharacter::findSet(arrayOfInts) << endl;

    return 0;
}
