#include <wx/wx.h>
#include "widgets/MainFrame.hpp"

class MainApp : public wxApp
{
public:
    bool OnInit() override;
};

wxIMPLEMENT_APP(MainApp); // NOLINT

bool MainApp::OnInit()
{
    auto* frame = new MainFrame();
    frame->Show(true);
    return true;
}
