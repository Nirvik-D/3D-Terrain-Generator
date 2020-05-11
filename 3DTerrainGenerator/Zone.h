////////////////////////////////////////////////////////////////////////////////
// Filename: Zone.h
////////////////////////////////////////////////////////////////////////////////
#ifndef _ZONE_H_
#define _ZONE_H_


///////////////////////
// MY CLASS INCLUDES //
///////////////////////
#include "D3D.h"
#include "Input.h"
#include "ShaderManager.h"
#include "Timer.h"
#include "UserInterface.h"
#include "Camera.h"
#include "Position.h"
#include "Terrain.h"


////////////////////////////////////////////////////////////////////////////////
// Class name: Zone
////////////////////////////////////////////////////////////////////////////////
class Zone
{
public:
	Zone();
	Zone(const Zone&);
	~Zone();

	bool Initialize(D3D*, HWND, int, int, float);
	void Shutdown();
	bool Frame(D3D*, Input*, ShaderManager*, float, int);

private:
	void HandleMovementInput(Input*, float);
	bool Render(D3D*, ShaderManager*);

private:
	UserInterface* m_UserInterface;
	Camera* m_Camera;
	Position* m_Position;
	Terrain* m_Terrain;
	bool m_displayUI;
};

#endif