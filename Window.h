#pragma once

#include <iostream>
#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>
#include <fstream>
#include "TextEditor.h"
#include "PascalCompiler.h"

class Window {
public:
	void CreateMainWindow();
	void Update();
	void Render();

	void ButtonSave();
	void ButtonOpen();
	void ButtonCreateNew();

	void OpenFile();
	bool SaveFile();
	GLFWwindow* GetNativeWindow() const { return m_Window; }
private:
	GLFWwindow* m_Window;
	PascalCompiler* m_PascalCompiler = new PascalCompiler();
	TextEditor m_Editor;

	static float popupTimer;
	static bool showPopup;

	std::string m_pascalFilePath;
	static const char* m_fileToEdit;
};