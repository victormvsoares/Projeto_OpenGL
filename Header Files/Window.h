#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <memory>


class Scene;

class Window
{
  public:

    Window(int width = 800, int height = 600, const char* title = "");

    void update();

    ~Window();


    inline bool shouldClose() const { return m_ShouldClose;}
    inline void setScene(std::unique_ptr<Scene> scene){m_scene = std::move(scene);}

    int m_Width;
    int m_Height;

    inline int getWidth() const { return m_Width; }
    inline int getHeight() const { return m_Height; }

  private:

    GLFWwindow* m_Window;

    bool m_ShouldClose;

    std::unique_ptr<Scene> m_scene = nullptr;

    static void errorCallbeck(int error, const char* description);

    static void framebuffer_size_callback(GLFWwindow* window, int width, int height);
};