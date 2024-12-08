#pragma once
#include "ShaderHandler.h"
#include "Gl/glut.h"
#include "Color.h"
#include "ObjectManager.h"

class Renderer {
private:
	void renderProper();
	void prepareView();
	void setupCamera();
	static Renderer* instance;
	Color clearColor;
	bool enableZBuffer;
	bool orthogonalView;
	ObjectManager* manager;
	Shader* shader;
public:
	Renderer(ObjectManager* readManager, Color readClearColor = Color(), bool zBuffer = true, bool shouldOrthogonal = false);
	static void render();
	void setClearColor(Color readClearColor);
	Color getClearColor();
	void setZBuffer(bool should);
	bool getZBuffer();
	bool getOrthogonal();
	void setOrthogonal(bool shouldOrthogonal);
	ObjectManager* getManager();
	void replaceManager(ObjectManager* readManager);
	void setUpShaders();
};