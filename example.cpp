//Just a test of a library

#include "entitymatcher.h"
#include <iostream>
#include <string>

// loads ratings from a file 
std::vector<int> loadRatings();
// saves ratings to file
void saveRatings(std::vector<int> list);

int main(){
	std::string userName = "Stals";
	std::vector<int> emptyVec;
	EntityMatcher entityMatcher(emptyVec);
}
