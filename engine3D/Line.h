#pragma once
#include "Primitive.h"

class Line :public Primitive {
public:
	Line(std::vector <glm::vec4> readData, int readSize);
	void drawFigure(int index);
	void changeFirstPoint(std::vector <glm::vec4> firstPoint);
	void changeSecondPoint(std::vector <glm::vec4> secondPoint);
	std::vector <glm::vec4> getFirstPoint();
	std::vector <glm::vec4> getSecondPoint();
};