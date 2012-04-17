#include "entitymatcher.h"
#include <iostream>

EntityMatcher::EntityMatcher(std::vector<int> entities)
{
	this->entities = entities;
	std::cout<<"constructor"<<std::endl;
}

EntityMatcher::~EntityMatcher(){
	std::cout<<"~dectructor"<<std::endl;
}
 
void EntityMatcher::match(int id1, int id2, int choice){
	int winner = (choice == 1)? id1 : id2;
	std::cout<<id1<<" vs. "<<id2<<". Winner is "<<winner<<std::endl;
}
