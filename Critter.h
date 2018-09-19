#pragma once

#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>



class Critter 
{

	//-------------------
	//Behaviour
	//-------------------

public:

	// Constructor
	Critter();

	//Render the Critter to the target
	void Draw(sf::RenderTarget& _target);

	//process input on the critter
	void Input(sf::Event _gameEvent);


	// End Behaviour


	//-------------------
	//Data
	//-------------------
private:

	sf::Sprite m_sprite;
	sf::Texture m_texture;
	bool m_alive;
	sf::Sound m_deathSound;
	sf::SoundBuffer m_deathBuffer;


};// end Critter class