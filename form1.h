﻿///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/sizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class Frame1
///////////////////////////////////////////////////////////////////////////////
class Frame1 : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textCtrl1;
		wxButton* m_button1;

		// Virtual event handlers, override them in your derived class
		virtual void OnCloseFrame( wxCloseEvent& event ) { event.Skip(); }
		virtual void myClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		Frame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Авторизация"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 125,150 ), long style = wxCAPTION|wxCLOSE_BOX|wxTAB_TRAVERSAL );

		~Frame1();

};

