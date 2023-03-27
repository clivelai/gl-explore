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

	// Load OpenGL libraries by glad
	gladLoadGL();

	/************* OpenGL libraries matter *************/
	glViewport(0, 0, 800, 800);
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT); // Execute the display
	glfwSwapBuffers(window); // Only front buffer to be displayed

	// Handling GLFW window close behavior
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}

	/********** End of handling GLFW window **********/
	// Close GLFW window
	// glfwDestroyWindow(window);

	// GLFW terminate
	glfwTerminate();

	return 0;
}