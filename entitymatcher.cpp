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
 