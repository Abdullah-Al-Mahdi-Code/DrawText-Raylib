#include "raylib.h"
int main() {
    InitWindow(800, 600,"My First Game On Linux");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("Success!", 400, 300, 20, SKYBLUE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
