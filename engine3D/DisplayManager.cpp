#include "DisplayManager.h"

DisplayManager::DisplayManager(int width, int height, bool shouldFullscreen, bool shouldDoubleBuffer, std::string title) {
	windowHeight = height;
	windowWidth = width;
	fullscreen = shouldFullscreen;
	doubleBuffer = shouldDoubleBuffer;
	programTitle = title;
}

void DisplayManager::initializeWindow() {
	if (doubleBuffer)
		glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	else
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(windowWidth, windowHeight);
	glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - windowWidth) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - windowHeight) / 2);
	glutCreateWindow(programTitle.c_str());
	setFullscreen(fullscreen); 
}

int DisplayManager::getWindowWidth() {
	return windowWidth;
}

int DisplayManager::GetWindowHeight() {
	return windowHeight;
}

void DisplayManager::setWindowWidth(int width) {
	windowWidth = width;
	if (width > 1) {
		glutReshapeWindow(windowWidth, windowHeight);
		glutPositionWindow((glutGet(GLUT_SCREEN_WIDTH) - windowWidth) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - windowHeight) / 2);
	}
}

void DisplayManager::setWindowHeight(int height) {
	windowHeight = height;
	if (height > 1) {
		glutReshapeWindow(windowWidth, windowHeight);
		glutPositionWindow((glutGet(GLUT_SCREEN_WIDTH) - windowWidth) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - windowHeight) / 2);
	}
}

bool DisplayManager::ifFullscreen() {
	return fullscreen;
}

void DisplayManager::setFullscreen(bool shouldFullscreen) {
	if (shouldFullscreen) {
		glutFullScreen();
		fullscreen = true;
	}
	else {
		glutReshapeWindow(windowWidth, windowHeight);
		glutPositionWindow((glutGet(GLUT_SCREEN_WIDTH) - windowWidth) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - windowHeight) / 2);
		fullscreen = false;
	}
}