#include <Application.hpp>
#include <print>

using namespace cass::engine;

class App : public Application {
  void OnUpdate(float deltaTime) override { std::println("hola"); }
};

int main() {

  App app;
  app.run();

  return 0;
}