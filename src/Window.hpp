#ifndef __WINDOW_H_
#define __WINDOW_H_

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <string>

class Window {

private:
  sf::RenderWindow window;

  sf::VideoMode videoMode = sf::VideoMode(800, 600);

  const std::string windowTitle = "SFML Game";
  sf::Time deltaTime;

public:
  Window();
  void mainLoop();
  void handleEvents();
  void render();

  sf::Time getDeltaTime() { return this->deltaTime; }
  void setDeltaTime(sf::Time dt) { this->deltaTime = dt; }
};
#endif // __WINDOW_H_
