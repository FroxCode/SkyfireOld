////////////////////////////////////////////////////////////
//
// System.h
// Created by Dale Sinnott
// 17/12/2018
//
////////////////////////////////////////////////////////////
#ifndef _SYSTEM_H_
#define _SYSTEM_H_

////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////
///Frox
#include "Entity.h"

///ABSTRACT CLASS
class System
{
public:
	////////////////////////////////////////////////////////////
	/// Default constructor
	////////////////////////////////////////////////////////////
	System() {}

	////////////////////////////////////////////////////////////
	/// Pure virtual destructor
	////////////////////////////////////////////////////////////
	virtual ~System() = 0;

	////////////////////////////////////////////////////////////
	/// Getters/Setters
	////////////////////////////////////////////////////////////
	void addEntity(Entity* entity) { m_entities.push_back(entity); }
	std::vector<Entity*> getEntities() { return m_entities; }

protected:
	////////////////////////////////////////////////////////////
	/// Member Variables
	////////////////////////////////////////////////////////////
	std::vector<Entity*> m_entities;

};
#endif;