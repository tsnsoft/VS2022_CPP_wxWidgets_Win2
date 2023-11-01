#include "main.h"

#include <wx/msgdlg.h>


IMPLEMENT_APP(App);

Form1* form1;

bool App::OnInit() {
	Form1* mainForm = new Form1(NULL);
	SetTopWindow(mainForm);
	GetTopWindow()->Show();
	form1 = mainForm;
	return true;
}

Form1::Form1(wxWindow* parent) : Frame1(parent) {
	wxInitAllImageHandlers();
	this->SetIcon(wxICON(MAIN_ICON));
}

Form1::~Form1() {
}

Form2::Form2(wxWindow* parent) : Frame2(parent) {
	this->SetIcon(wxICON(MAIN_ICON));
}

Form2::~Form2() {
}

