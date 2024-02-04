#include "raylib.h"
#include <cstdio>

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "FPS Counter Example");


    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // Calculate FPS
        int currentFPS = GetFPS();

        // Convert FPS to a string
        char fpsText[10];
        sprintf(fpsText, "FPS: %i", currentFPS);

        // Display FPS on the window
        DrawText(fpsText, 10, 10, 20, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
