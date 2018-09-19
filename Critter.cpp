//includes
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
	m_sprite.setPosition(300,300);

}


void Critter:: Draw(sf::RenderTarget& _target)
{
	_target.draw(m_sprite);
}