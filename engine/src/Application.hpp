#pragma once

namespace cass::engine {
class Application {
protected:
  virtual void OnUpdate(float deltaTime) {}

public:
  void run();
};
} // namespace cass::engine
