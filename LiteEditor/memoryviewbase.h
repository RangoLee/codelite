//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// Copyright            : (C) 2015 Eran Ifrah
// File name            : memoryviewbase.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: memoryviewbase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_LITEEDITOR_MEMORYVIEWBASE_BASE_CLASSES_H
#define CODELITE_LITEEDITOR_MEMORYVIEWBASE_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/panel.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/button.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class MemoryViewBase : public wxPanel
{
protected:
    wxStaticText* m_staticText2;
    wxTextCtrl* m_textCtrlExpression;
    wxStaticText* m_staticText1;
    wxChoice* m_choiceSize;
    wxStaticText* m_staticText8;
    wxChoice* m_choiceCols;
    wxTextCtrl* m_textCtrlMemory;
    wxButton* m_buttonEvaluate;
    wxButton* m_buttonUpdate;

protected:
    virtual void OnTextEntered(wxCommandEvent& event) { event.Skip(); }
    virtual void OnMemorySize(wxCommandEvent& event) { event.Skip(); }
    virtual void OnNumberOfRows(wxCommandEvent& event) { event.Skip(); }
    virtual void OnTextDClick(wxMouseEvent& event) { event.Skip(); }
    virtual void OnEvaluate(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEvaluateUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnUpdate(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText2() { return m_staticText2; }
    wxTextCtrl* GetTextCtrlExpression() { return m_textCtrlExpression; }
    wxStaticText* GetStaticText1() { return m_staticText1; }
    wxChoice* GetChoiceSize() { return m_choiceSize; }
    wxStaticText* GetStaticText8() { return m_staticText8; }
    wxChoice* GetChoiceCols() { return m_choiceCols; }
    wxTextCtrl* GetTextCtrlMemory() { return m_textCtrlMemory; }
    wxButton* GetButtonEvaluate() { return m_buttonEvaluate; }
    wxButton* GetButtonUpdate() { return m_buttonUpdate; }
    MemoryViewBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(596,300), long style = wxTAB_TRAVERSAL);
    virtual ~MemoryViewBase();
};

#endif
