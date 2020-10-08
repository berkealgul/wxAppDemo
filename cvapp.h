#pragma once

#include "wx/wx.h"
#include "cMain.h"

class cvApp : public wxApp
{
public:
	cvApp();
	~cvApp();

	virtual bool OnInit();

private:
	cMain* m_frame = nullptr;
};
