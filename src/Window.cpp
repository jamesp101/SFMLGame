#include "Window.hpp"

#include <SFML/Window.hpp>
#include <assert.h>
#include <iostream>

Window::Window() {
  this->window.create(videoMode, windowTitle);
  this->window.setFramerateLimit(60);
}

void Window::mainLoop() {
  assert(&this->window != NULL);

  sf::Clock currentTime;
  while (this->window.isOpen()) {
    std::cout << "HEllo World" << std::endl;
    this->deltaTime = currentTime.restart();
    // update

    // Handle the events
    this->handleEvents();

    // render
    this->render();
  }
}

void Window::render() {
  this->window.clear();
  // Render
  this->window.display();
}
void Window::handleEvents() {
  sf::Event event;

  while (this->window.pollEvent(event)) {
    //  Close the Window if User clicks X (close button)
    //  Stops the Game Loop
    if (event.type == sf::Event::Closed) {
      this->window.close();
    }
  }
}
