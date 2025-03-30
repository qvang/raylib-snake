#include <raylib.h>

int main() {

  // init
  const int screenWidth{800};
  const int screenHeight{450};
  InitWindow(screenWidth, screenHeight, "Test Window");

  SetTargetFPS(60);

  // Draw
  while (!WindowShouldClose()) {
    ClearBackground(RAYWHITE);
    DrawText("TEST TEXT", 20, 20, 10, BLACK);
    EndDrawing();
  }

  // Close
  CloseWindow();
  return 0;
}
