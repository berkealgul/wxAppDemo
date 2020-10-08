///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "cMain.h"

///////////////////////////////////////////////////////////////////////////

cMain::cMain(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxHORIZONTAL);

	m_panel1 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(640, 480), wxTAB_TRAVERSAL);
	m_panel1->SetForegroundColour(wxColour(240, 240, 240));
	m_panel1->SetBackgroundColour(wxColour(255, 255, 255));

	bSizer1->Add(m_panel1, 1, wxEXPAND | wxALL, 5);

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer(wxVERTICAL);

	m_button1 = new wxButton(this, wxID_ANY, wxT("Baðlan"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer2->Add(m_button1, 0, wxALL, 5);

	m_button3 = new wxButton(this, wxID_ANY, wxT("Bas/Dur"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer2->Add(m_button3, 0, wxALL, 5);


	bSizer1->Add(bSizer2, 1, wxEXPAND, 5);


	this->SetSizer(bSizer1);
	this->Layout();

	this->Centre(wxBOTH);

	capturer = new cvCapturer(this, this->m_panel1);

	// Connect Events
	m_panel1->Connect(wxEVT_PAINT, wxPaintEventHandler(cMain::drawImage), NULL, this);
	m_button1->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(cMain::start), NULL, this);
	m_button3->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(cMain::toggleStatus), NULL, this);
}

cMain::~cMain()
{
	// Disconnect Events
	m_panel1->Disconnect(wxEVT_PAINT, wxPaintEventHandler(cMain::drawImage), NULL, this);
	m_button1->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(cMain::start), NULL, this);
	m_button3->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(cMain::toggleStatus), NULL, this);

}

void cMain::toggleStatus(wxCommandEvent& event)
{

}

void cMain::start(wxCommandEvent& event)
{
	capturer->Run();
}

void cMain::drawImage(wxPaintEvent& event)
{
	wxBitmap bitmap;
	wxPaintDC dc(this->m_panel1);
	dc.DrawBitmap(bitmap, 0, 0, false);
}
