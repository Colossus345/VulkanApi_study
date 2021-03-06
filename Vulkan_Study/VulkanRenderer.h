#pragma once

#define GLFW_INCLUDE_VULKAN
#include<GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

#include <vector>

class VulkanRenderer
{

public:
	void run();
private:
	const uint32_t HEIGHT = 600;
	const uint32_t WIDTH = 800;

	GLFWwindow *window;



	VkInstance instance;

	void initWindow();
	void initVulkan();
	void mainLoop();
	void cleanup();
	void createInstance();

};

