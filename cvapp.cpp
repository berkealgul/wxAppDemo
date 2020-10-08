#include "cvapp.h"

IMPLEMENT_APP(cvApp);

cvApp::cvApp()
{

}

cvApp::~cvApp()
{

}

bool cvApp::OnInit()
{
	m_frame = new cMain(nullptr);
	//worker = new Worker(m_frame);
	
	m_frame->Show();
	return true;
}

