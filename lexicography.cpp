#include <iostream>
#include <string>
using namespace std;

int main(){


}

void permutateNum(int lockedIndex, int finalSpot, int currSpot) {

	if (lockedPosition == length && ) {	// Base case for whn the permutation function has
		cout << word << "\t";		// reached the end of the word.
		return;
	}

	else {
		for (int i = lockedIndex; i < length; i++) {	// For ech recursive call, the fist position
			swap(lockedIndex, i);					// is locked into place after each swap, and
			permutate(lockedIndex + 1);				// the recursive call moves to the next position.
			swap(lockedIndex, i);
		}
	}
}
