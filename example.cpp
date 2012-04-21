//Just a test of a library
//how to compile
//	g++ -o entityMatcher.exe entitymathcer.h entitymathcer.cpp exmaple.cpp

//TODO make a typename/typedef for std::list<int> ? so that i could change data structure without rewriting the whole thing

#include "entitymatcher.h"
#include <iostream>
#include <string>
#include <list>
#include <windows.h>

// loads ratings from a file 
std::list<int> loadRatings();
// saves ratings to file
void saveRatings(std::list<int> list);
void printEntityList(std::list<int> entities){
	for (std::list<int>::iterator it = entities.begin(); it != entities.end(); ++it){
		std::cout<<(*it)<<" ";
	}
	std::cout<<std::endl;

}

int main(){
	/*	
	std::list<int> oldList;
	oldList.push_back(10);
	oldList.push_back(15);
	oldList.push_back(45);
	oldList.push_back(11);
	EntityMatcher entityMatcher(oldList);
	*/
	
	EntityMatcher entityMatcher;
									// how list should look like after match
	entityMatcher.match(15,45,1);	// 15 45
	entityMatcher.match(15,78,2);	// 78 15 45
	entityMatcher.match(78,99,1);	// 78 15 45 99
	printEntityList(entityMatcher.getEntities());

	system("pause");
}
