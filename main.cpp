#include <iostream>
#include <string>

class GameEngine {
public:
    GameEngine() {
        std::cout << "Game engine initialized.\n";
    }

    void start() {
        std::cout << "Game engine started.\n";
        running = true;
        while (running) {
            update();
        }
    }

    void stop() {
        std::cout << "Game engine stopped.\n";
        running = false;
    }

    virtual void update() {
        // This is the default implementation of the update() method.
        // You can override this method in a derived class to provide custom behavior.
        std::cout << "Game engine updated.\n";
    }

    virtual ~GameEngine() {
        std::cout << "Game engine destroyed.\n";
    }

private:
    bool running = false;
};

class MyGame : public GameEngine {
public:
    MyGame() {
        std::cout << "My game initialized.\n";
    }

    void update() override {
        // This is the custom implementation of the update() method for the MyGame class.
        // You can add your game logic here.
        std::cout << "My game updated.\n";
    }

    ~MyGame() {
        std::cout << "My game destroyed.\n";
    }
};

int main() {
    MyGame game;
    game.start();
    game.stop();
    return 0;
}
