#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main() 
{
	// GLFW initialize
	glfwInit();

	// GLFW hint: get certain hint by passing value
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	/************* Handling GLFW window *************/
	// Initialize GLFW window
	GLFWwindow* window = glfwCreateWindow(800, 800, "Example Screen", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	};
	// Create GLFW window
	glfwMakeContextCurrent(window);
	// Close GLFW window
	// glfwDestroyWindow(window);
	// Handling GLFW window close behavior
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}

	/********** End of handling GLFW window **********/

	// GLFW terminate
	glfwTerminate();

	return 0;
}