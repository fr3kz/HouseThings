#include <iostream>
#include "raylib.h"
#include "models/Task.hpp"
#include "models/Scene.hpp"
#include "models/TaskContainer.hpp"

const int width = 800;
const int height = 600;
const int FPSLIMIT = 30;
const int margin = 50;


Scene InitScreen("InitScreen", "test");
TaskContainer TodoListContainer;


void Screen() {
    InitWindow(width, height, "HouseThings");
    SetTargetFPS(FPSLIMIT);

    while (!WindowShouldClose()) {

        //variables
        int TodoContrainerHegiht = height-500;

       // bool isAnyTodos = false;
        bool isAnyTodos = TodoListContainer.isEmpty;
        BeginDrawing();
        ClearBackground(DARKGRAY);
        DrawText("Lista Zadan", (width / 2) - MeasureText("Lista Zadan", 20) / 2, margin, 20, WHITE);
        //Lista zadan TODO
        DrawRectangle(margin, margin * 2, (width-2*margin), TodoContrainerHegiht, RED);
        DrawText("Todo:",margin+10,margin*2 + 10,20,BLACK);
        if(isAnyTodos) DrawText("Brak zadan",margin+ 70,margin*2 + 40,20,BLACK);

        //Lista zadan zaplanowane
        DrawRectangle(margin, margin * 2+150, (width - 2 * margin), TodoContrainerHegiht, RED);
        DrawText("Planned:", margin + 10, margin * 2 + 10, 20, BLACK);
        if (isAnyTodos) DrawText("Brak zadan", margin + 70, margin * 2 + 40, 20, BLACK);

		// Lista do pamietania
        DrawRectangle(margin, margin * 2+300, (width - 2 * margin), TodoContrainerHegiht, RED);
        DrawText("Important:", margin + 10, margin * 2 + 10, 20, BLACK);
        if (isAnyTodos) DrawText("Brak zadan", margin + 70, margin * 2 + 40, 20, BLACK);
        //Lista kolejnych zadan z enuma
        EndDrawing();
    }

    CloseWindow();
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << InitScreen.showScene();
    Screen();
    return 0;
}
