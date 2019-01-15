////////////////////////////////////////////////////////////
//
// PlayerComponent.h (Container for player data)
// Created by Dale Sinnott
// 10/01/2019
//
////////////////////////////////////////////////////////////
#ifndef _PLAYERCOMPONENT_H_
#define _PLAYERCOMPONENT_H_

////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////
///Frox
#include "Component.h"


class PlayerComponent : public Component
{
public:
	////////////////////////////////////////////////////////////
	/// Overloaded constructor
	////////////////////////////////////////////////////////////
	PlayerComponent(std::string name) : Component("PlayerComponent"),
		m_name(name) { }

	////////////////////////////////////////////////////////////
	/// Destructor (for overriding virtual function in abstract 
	/// base Component)
	////////////////////////////////////////////////////////////
	~PlayerComponent() { }

	////////////////////////////////////////////////////////////
	/// Getters/Setters
	////////////////////////////////////////////////////////////
	std::string getName() { return m_name; }
	void setName(std::string name) { m_name = name; }

private:
	////////////////////////////////////////////////////////////
	/// Member Variables
	////////////////////////////////////////////////////////////
	std::string m_name;
	/* 
	// Anything could go here, depending on the game.
	// Score, lives, player specific data
	*/

};
#endif;