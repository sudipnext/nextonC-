#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>
using namespace std;

const char* screenVertexShaderSource = R"(#version 460 core
layout (location = 0) in vec3 pos;
layout (location = 1) in vec2 uvs;
out vec2 UVs;
void main()
{
	gl_Position = vec4(pos.x, pos.y, pos.z, 1.0);
	UVs = uvs;
})";
const char* screenFragmentShaderSource = R"(#version 460 core
out vec4 FragColor;
uniform sampler2D screen;
in vec2 UVs;
void main()
{
	FragColor = texture(screen, UVs);
})";

int main() {

	//initializing the glfw
	glfwInit();

	//telling what version of glfw its using
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	//creating a glfloat as normal float may issue in size
	GLfloat  vertices[] = {
		-0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f,
		0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f,
		0.0f, 0.5f * float(sqrt(3)) * 2 / 3, 0.0f
	};

	//creating a glfw window height width naming and whether we want full screen or not
	GLFWwindow* window = glfwCreateWindow(800, 800, "OpenGL Pratice", NULL, NULL);
	//error checking if it fails to create
	if (window == NULL) {
		cout << "Failed to Create GLFW window" << endl;
		glfwTerminate();
		return -1;
	}
	//introducing the window into the current context
	glfwMakeContextCurrent(window);

	//loading glad so to configure opengl
	gladLoadGL();

	//setting up the viewport of opengl
	glViewport(0, 0, 800, 800);
	//creating an object called vertex shader with +ve integer i.e unsigned
	GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
	//1 means one string and screenVertex refers to upper code
	glShaderSource(vertexShader, 1, &screenVertexShaderSource, NULL);
	glCompileShader(vertexShader);

	GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader, 1, &screenFragmentShaderSource, NULL);
	glCompileShader(fragmentShader);
	//creating a shader program
	GLuint shaderProgram = glCreateProgram();
	//attaching the vertex and fragment shader to the shader program
	glAttachShader(shaderProgram, vertexShader);
	glAttachShader(shaderProgram, fragmentShader);

	glLinkProgram(shaderProgram);

	//to clear things up by deleting shaders
	glDeleteShader(vertexShader);
	glDeleteShader(fragmentShader);

	//creating a vertex buffer in order to create a easy comunication between cpu and gpu
	GLuint VAO, VBO;

	glGenVertexArrays(1, &VAO);


	//creating buffer object 1 is because we only have one object
	glGenBuffers(1, &VBO);
	//binding in opengl means creating a certain object is making it current object and any modifications reflects that
	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	//now storing STATIC MEANS THE VERTICES WILL BE MODIFIED ONCE BUT USED MULTIPLE TIMES DYNAMIC MEANS MADE MULTIPLE USED MULTIPLE TIMES
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	//creating vertex attrib pointer first one 0 to 3 vertices and the we need to specify if the GL_FALSE SECTION IF WE ARE GIVING INTEGER SO THE GL_FALSE IS THERE AND ANOHTER ONE FOR SIZE
	//at last we need to specify where the vertices begin at array since our vertice start with the begin of vertix so its void*0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
	//specifying the color of the background
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	//cleaning any back buffer and assigning the new color to it
	glClear(GL_COLOR_BUFFER_BIT);
	//swapping buffers with the front buffer
	glfwSwapBuffers(window);


	while (!glfwWindowShouldClose(window))
	{
		glClearColor(0.0f, 0.66f, 0.61f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		glUseProgram(shaderProgram);
		glBindVertexArray(VAO);
		glDrawArrays(GL_TRIANGLES, 0, 3);
		glfwSwapBuffers(window);
		//we need to process the events else it's not responding
		glfwPollEvents();
	}


	//deleteing the window
	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
	glDeleteProgram(shaderProgram);
	glfwDestroyWindow(window);

	 //terminating the glfw
	glfwTerminate();



	return 0;
}
