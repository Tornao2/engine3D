#pragma once
#include "DirectDraw.h"
#include "Resizable.h"
#include "TransformableFigure.h"

/** @class Point
 *  Klasa reprezentująca punkt.
 */
class Point : public DirectDraw, public Resizable, public TransformableFigure {
public:
    /**
     * Konstruktor tworzący obiekt punktu.
     * @param readData Dane reprezentujące punkt.
     * @param readSize Rozmiar punktu.
     */
    Point(std::vector<glm::vec4> readData, float readSize);
    /**
     * Funkcja rysująca punkt, wykorzystuje OpenGL.
     * @param index Numer pierwszego wierzchołka w buferze.
     */
    void drawDirect(int index);
};
