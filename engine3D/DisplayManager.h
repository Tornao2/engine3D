#pragma once
#include <GL/glut.h>
#include <string>

/** @class DisplayManager
 *  Klasa odpowiedzialna za zarządzanie oknem wyświetlania oraz konfigurację wyświetlania.
 */
class DisplayManager {
public:
    /**
     * Konstruktor inicjalizujący ustawienia okna.
     * @param readWidth Szerokość okna.
     * @param readHeight Wysokość okna.
     * @param readFullscreen Flaga informująca, czy okno ma być w trybie pełnoekranowym.
     * @param readDoubleBuffer Flaga informująca, czy włączony ma być bufor podwójny.
     * @param readTitle Tytuł okna programu.
     */
    DisplayManager(int readWidth = 640, int readHeight = 480, bool readFullscreen = false, bool readDoubleBuffer = true, std::string readTitle = "Engine");
    /**
     * Funkcja inicjalizująca okno wyświetlania.
     */
    void initializeWindow();
    /**
     * Funkcja zwracająca szerokość okna.
     * @return Szerokość okna.
     */
    int getWindowWidth();
    /**
     * Funkcja zwracająca wysokość okna.
     * @return Wysokość okna.
     */
    int GetWindowHeight();
    /**
     * Funkcja ustalająca szerokość okna.
     * @param readWidth Nowa szerokość okna.
     */
    void setWindowWidth(int readWidth);
    /**
     * Funkcja ustalająca wysokość okna.
     * @param readHeight Nowa wysokość okna.
     */
    void setWindowHeight(int readHeight);
    /**
     * Funkcja zwracająca, czy okno jest w trybie pełnoekranowym.
     * @return Flaga wskazująca, czy tryb pełnoekranowy jest włączony.
     */
    bool ifFullscreen();
    /**
     * Funkcja ustalająca, czy okno ma być w trybie pełnoekranowym.
     * @param readFullscreen Flaga informująca, czy włączyć tryb pełnoekranowy.
     */
    void setFullscreen(bool readFullscreen);
private:
    /** Szerokość okna */
    int windowWidth;
    /** Wysokość okna */
    int windowHeight;
    /** Flaga informująca, czy tryb pełnoekranowy jest włączony */
    bool fullscreen;
    /** Flaga informująca, czy bufor podwójny jest włączony */
    bool doubleBuffer;
    /** Tytuł okna programu */
    std::string programTitle;
};
