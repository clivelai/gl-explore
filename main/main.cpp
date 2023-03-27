#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main() 
{
	// Initialize GLFW
	glfwInit();

	// Tell GLFW what version of OpenGL we are using 
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// Tell GLFW we are using the CORE profile
	// So that means we only have the modern functions
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	/************* Handling GLFW window *************/
	// Create a GLFWwindow object of 800 by 800 pixels
	GLFWwindow* window = glfwCreateWindow(800, 800, "Example Screen", NULL, NULL);
	// Error check if the window fails to create
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	};
	// Introduce the window into the current context
	glfwMakeContextCurrent(window);
	//Load GLAD so it configures OpenGL
	gladLoadGL();

	/************* OpenGL libraries matter *************/
	// Specify the viewport of OpenGL in the Window
	glViewport(0, 0, 800, 800);
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT); // Execute the display
	glfwSwapBuffers(window); // Only front buffer to be displayed

	// Handling GLFW window close behavior
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}

	/*************** End of GLFW window ***************/
	// Close GLFW window
	// glfwDestroyWindow(window);

	// GLFW terminate
	glfwTerminate();

	return 0;
}