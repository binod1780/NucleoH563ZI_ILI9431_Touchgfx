#ifndef SCREENVIEW_HPP
#define SCREENVIEW_HPP

#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <gui/screen_screen/screenPresenter.hpp>

class screenView : public screenViewBase
{
public:
    screenView();
    virtual ~screenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:
    int counter;

void switchToScreen2()
{
    static_cast<FrontendApplication*>(Application::getInstance())->gotoScreen1ScreenNoTransition();
}
};

#endif // SCREENVIEW_HPP
