/* This is a library for matching two entities and buildng a list of entities sorted by rating (flickchart.com style). 
You can match any Entites. For example it could be games, films, books, board games and so on.
*/

#include <string>
#include <vector>

class EntityMatcher{
public:
	// if we have 'entities' from previous time we will load them
	EntityMatcher(std::vector<int> entities); //TODO make default (if it is a fresh start)
	~EntityMatcher();

	// return a const ref to avoid copying
	const std::vector<int>& getEntities(){
		return entities;
	}

private:
	// Todo rewrite as a list and compare speed
	// Stores entities ID
	std::vector<int> entities; 

};
