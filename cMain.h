///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/frame.h>

#include "capturer.h"

//geçici
#include <wx/dcclient.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class cMain
///////////////////////////////////////////////////////////////////////////////
class cMain : public wxFrame
{
private:

protected:
	wxPanel* m_panel1;
	wxButton* m_button1;
	wxButton* m_button3;

	cvCapturer* capturer;

	// Virtual event handlers, overide them in your derived class
	virtual void drawImage(wxPaintEvent& event);
	virtual void start(wxCommandEvent& event);
	virtual void toggleStatus(wxCommandEvent& event);


public:

	cMain(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(760, 480), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~cMain();

};

