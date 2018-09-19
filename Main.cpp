//Libraries
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include <string>
#include <cstdlib> // gives access to rand functions
#include <ctime> // gives access to time functionts


//Project includes
#include "Critter.h"

int main()
{	//---------------------------
	//Setup
	//--------------------------

	// Make a variable called gameWindow of the type RenderWindow
	sf::RenderWindow gameWindow;
	gameWindow.create(sf::VideoMode::getDesktopMode(), "Critter Whack",
		sf::Style::Titlebar | sf::Style::Close);




	// Timer Functionality
	sf::Clock gameClock;

	// seed our random number generator
	srand(time(NULL));

	// create and instance of a critter class
	Critter narwhal;

	//------------------------------
	//End Game Setup
	//------------------------------




	//-------------------------------
	// Game Loop
	//-------------------------------
	while (gameWindow.isOpen())
	{
		//-----------------------------------
		//Input
		//-----------------------------------


		sf::Event Event;
		while (gameWindow.pollEvent(Event))
		{
			// process input on critters
			narwhal.Input(Event);






			if (Event.type == sf::Event::Closed)
			{
				gameWindow.close();
			}
		}// end event polling loop

		//end input


		//----------------------------
		//Upate
		//----------------------------
		sf::Time frameTime = gameClock.restart();



		//end update

		gameWindow.clear();

		//Draw Everything

		narwhal.Draw(gameWindow);



		gameWindow.display();

		//End Draw
	}

	return 0;
}