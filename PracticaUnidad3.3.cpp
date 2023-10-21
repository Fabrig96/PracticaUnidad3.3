// MAVI - Unidad 3 - Ejercicio3
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

Texture texture;
Sprite sprite;

int main() {

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Fondo");
	
	texture.loadFromFile("Unidad3_Assets/fondo.jpg");
	sprite.setTexture(texture);
	
	float sizeTx = (float)texture.getSize().x;
	float sizeTy = (float)texture.getSize().y;

	//Representar imagen como fondo
	sprite.setScale(800.0f/sizeTx, 600.0f/sizeTy);

	while (App.isOpen())
	{
		sf::Event event;
		while (App.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				App.close();
		}

		App.clear();

		App.draw(sprite);

		App.display();
	}
	return 0;
}
