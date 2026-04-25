#include "edex.hpp"

int main()
{
    SetConfigFlags(
        FLAG_WINDOW_RESIZABLE
        | FLAG_VSYNC_HINT
    );
    InitWindow(init_win_w, init_win_h, "");
    // SetExitKey(0);
    if (is_fps_capped) SetTargetFPS(target_fps);

    std::cout << "\033[37m";  // Set terminal font color white

    Editor editor;
    editor.Start();
    while (!WindowShouldClose() && !app_should_close)
    {
        fps = GetFPS();
        dt = GetFrameTime();
        win_w = GetScreenWidth();
        win_h = GetScreenHeight();
        editor.Loop();
        BeginDrawing();
        ClearBackground(bg_color);
        SetWindowTitle(ftos(fps));
        editor.Render();
        EndDrawing();
    }
    editor.Cleanup();

    std::cout << "\n\n\e[0m";  // Reset terminal font color
    CloseWindow();
}

