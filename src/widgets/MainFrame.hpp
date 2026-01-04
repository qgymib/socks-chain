#ifndef SOCKS_CHAIN_WIDGETS_MAIN_FRAME_HPP
#define SOCKS_CHAIN_WIDGETS_MAIN_FRAME_HPP

#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
    MainFrame();

private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};

#endif
