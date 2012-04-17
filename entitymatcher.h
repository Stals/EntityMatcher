/* This is a library for matching two entities and buildng a list of entities sorted by rating (flickchart.com style). 
You can match any Entites. For example it could be games, films, books, board games and so on.
This library stores list of entities id's and also moves entities depending on a user choice between them.

Mathcing algorithm:
	Both entities are on the list:
		If an entity that was higher won - nothing changed
		Else - winner goes above the looser
	Only one entity is on the list:
		If an entity that wasn't in a list won - it goes above the looser
		If an entity that was in a list won - looser goes to the end of a list (push_back(looser))
	Neither of entities are on the list:
		Winner goes above the looser, both entities added in the end of a list (push_back(winner), push_back(looser))
*/

#include <string>
#include <vector>

class EntityMatcher{
public:
	// if we have 'entities' from previous time we will load them
	EntityMatcher(std::vector<int> entities = std::vector<int>()); //TODO make default (if it is a fresh start)
	~EntityMatcher();

	// return a const ref to avoid copying
	const std::vector<int>& getEntities(){
		return entities;
	}

	// mathes 2 entities changing their rating. Variable choice could equals to 1 or 2 meaning wich entity won (entity with id1 or id2).
	void match(int id1, int id2, int choice);

private:
	// Todo rewrite as a list and compare speed
	// Stores entities ID
	std::vector<int> entities; 

};
