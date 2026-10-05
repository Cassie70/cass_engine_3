#include "Application.hpp"

namespace cass::engine {

void Application::run() {
  while (true) {
    OnUpdate(0);
  }
}
} // namespace cass::engine