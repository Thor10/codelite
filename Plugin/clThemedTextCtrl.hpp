#ifndef CLTHEMEDTEXTCTRL_HPP
#define CLTHEMEDTEXTCTRL_HPP

#include "codelite_exports.h"

#include <wx/stc/stc.h>

class WXDLLIMPEXP_SDK clThemedTextCtrl : public wxStyledTextCtrl
{
protected:
    void OnKeyDown(wxKeyEvent& event);
    void OnAddChar(wxStyledTextEvent& event);
    void OnChange(wxStyledTextEvent& event);

public:
    virtual ~clThemedTextCtrl();

    clThemedTextCtrl() {}
    clThemedTextCtrl(wxWindow* parent, wxWindowID id, const wxString& value = wxEmptyString,
                     const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0);
};

#endif // CLTHEMEDTEXTCTRL_HPP
