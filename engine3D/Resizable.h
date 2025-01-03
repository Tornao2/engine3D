#pragma once

/** @class Resizable
 *  Klasa bazowa umożliwiająca manipulację pewnymi wymiarami(szerokość linii, punktu) obiektów.
 */
class Resizable {
protected:
    /** Dany rozmiar obiektu */
    float size;
public:
    /**
     * Funkcja zwracająca dany rozmiar obiektu.
     * @return Wartość danego rozmiaru obiektu.
     */
    float getSize();
    /**
     * Funkcja ustawiająca dany rozmiar obiektu.
     * @param readSize Nowa wartość danego rozmiaru obiektu.
     */
    void setSize(float readSize);
};
