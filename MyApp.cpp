/////////////////////////////////////////////////////////////////////////////
// Name:        HomeApp/HomeApp/MyApp.cpp
// Purpose:     MyApp class
// Author:      S.Ryuya
// Modified by:
// Created:     21/10/2023
// Copyright:   (c) S.Ryuya
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#include "MyApp.h"
#include "MyFrame.h"

wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
    MyFrame* frame = new MyFrame();
    frame->Show(true);
    return true;
}
