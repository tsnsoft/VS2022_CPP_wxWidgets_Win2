#ifndef __main__
#define __main__

#include <wx/wx.h>
#include "form1.h"
#include "form2.h"


class App : public wxApp {
public:
	virtual bool OnInit();
};

DECLARE_APP(App)

class Form1 : public Frame1 {
public:
	Form1(wxWindow* parent);
	virtual ~Form1();
protected:
	virtual void OnCloseFrame(wxCloseEvent& event);
	virtual void myClick(wxCommandEvent& event);
};

class Form2 : public Frame2 {
public:
	Form2(wxWindow* parent);
	virtual ~Form2();
protected:
	virtual void OnCloseFrame(wxCloseEvent& event);
	virtual void myClick(wxCommandEvent& event);
	virtual void myExit(wxCommandEvent& event);
	virtual void OnShow(wxShowEvent& event);
};

#endif //__main__
