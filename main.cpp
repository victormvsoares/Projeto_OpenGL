#include "Window.h"

int main(int argc, char** argv)
{
    Window w(800, 600, "OpenGL Jenal");

    while (!w.shouldClose())
    {
        w.update();
    }
    
    return 0;
}