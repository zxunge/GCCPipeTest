/***************************************************************
 * Name:      PipeTestApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Grit Clef (3396563372@qq.com)
 * Created:   2024-02-25
 * Copyright: Grit Clef (zxunge.github.io)
 * License:
 **************************************************************/

#include "PipeTestApp.h"

//(*AppHeaders
#include "PipeTestMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(PipeTestApp);

bool PipeTestApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
        PipeTestFrame* Frame = new PipeTestFrame(0);
        Frame->Show();
        SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
