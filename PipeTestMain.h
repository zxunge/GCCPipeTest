/***************************************************************
 * Name:      PipeTestMain.h
 * Purpose:   Defines Application Frame
 * Author:    Grit Clef (3396563372@qq.com)
 * Created:   2024-02-25
 * Copyright: Grit Clef (zxunge.github.io)
 * License:
 **************************************************************/

#ifndef PIPETESTMAIN_H
#define PIPETESTMAIN_H

//(*Headers(PipeTestFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class PipeTestFrame: public wxFrame
{
    public:

        PipeTestFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~PipeTestFrame();

    private:

        //(*Handlers(PipeTestFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(PipeTestFrame)
        static const wxWindowID idMenuQuit;
        static const wxWindowID idMenuAbout;
        static const wxWindowID ID_STATUSBAR1;
        //*)

        //(*Declarations(PipeTestFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // PIPETESTMAIN_H
