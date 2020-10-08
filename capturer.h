#pragma once
#include "wx/wx.h"
#include "opencv2/opencv.hpp"


class cvCapturer : public wxThread
{
public:
	cvCapturer(wxFrame* pFrame, wxPanel* pPanel);

	virtual void* Entry();

private:
	wxFrame* m_parent;
	wxPanel* m_targetPanel;

	cv::VideoCapture* cap;
	cv::Mat frame;
};