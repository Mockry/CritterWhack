//includes
//libraries
#include <cstdlib>
//project includes
#include "Critter.h"


Critter::Critter()
//initialisation list
	:m_sprite()
	,m_texture()
{

	//Set up sprite
	m_texture.loadFromFile("graphics/narwhal.png");
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(rand() % sf::VideoMode::getDesktopMode().width,
		rand() % sf::VideoMode::getDesktopMode().height);

}


void Critter:: Draw(sf::RenderTarget& _target)
{
	_target.draw(m_sprite);
}