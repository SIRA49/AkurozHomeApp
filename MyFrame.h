/////////////////////////////////////////////////////////////////////////////
// Name:        HomeApp/HomeApp/MyFrame.h
// Purpose:     MyApp class
// Author:      S.Ryuya
// Modified by:
// Created:     21/10/2023
// Copyright:   (c) S.Ryuya
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#include <wx/wxprec.h>

class MyFrame : public wxFrame
{
public:
    MyFrame();
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};