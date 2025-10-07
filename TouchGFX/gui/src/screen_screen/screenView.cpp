#include <gui/screen_screen/screenView.hpp>

screenView::screenView()
{

}

void screenView::setupScreen()
{
    screenViewBase::setupScreen();
}

void screenView::tearDownScreen()
{
    screenViewBase::tearDownScreen();
}

void screenView::handleTickEvent()
{
	counter++;
	//Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_Y9WY).getText());

	if(counter == 30)
	{
		counter = 0;
		switchToScreen2();
	}
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", counter);
	textArea1.invalidate();


}
