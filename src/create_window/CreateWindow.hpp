#ifndef CREATE_WINDOW_HPP
#define CREATE_WINDOW_HPP

#include "../headers.h";

namespace CreateWindow {
#define SCR_WIDTH 800
#define SCR_HEIGHT 800
	void framebufferSizeCallback(GLFWwindow* window, int width, int height);

	void processInput(GLFWwindow* window);

	GLFWwindow* createWindow();
}

#endif
