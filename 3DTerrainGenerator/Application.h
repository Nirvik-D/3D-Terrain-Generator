///////////////////////////////////////////////////////////////////////////////
// Filename: Application.h
////////////////////////////////////////////////////////////////////////////////
#ifndef _APPLICATION_H_
#define _APPLICATION_H_


/////////////
// GLOBALS //
/////////////
const bool FULL_SCREEN = true;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.1f;


///////////////////////
// MY CLASS INCLUDES //
///////////////////////
#include "Input.h"
#include "D3D.h"
#include "ShaderManager.h"
#include "Timer.h"
#include "FPSCounter.h"
#include "Zone.h"


////////////////////////////////////////////////////////////////////////////////
// Class name: Application
////////////////////////////////////////////////////////////////////////////////
class Application
{
public:
	Application();
	Application(const Application&);
	~Application();

	bool Initialize(HINSTANCE, HWND, int, int);
	void Shutdown();
	bool Frame();

private:
	Input* m_Input;
	D3D* m_Direct3D;
	ShaderManager* m_ShaderManager;
	Timer* m_Timer;
	FPSCounter* m_Fps;
	Zone* m_Zone;
};

#endif