#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::handleTickEvent()
{
	counter++;
	//Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_Y9WY).getText());

	if(counter == 30)
	{
		counter = 0;
		switchToScreen1();
	}
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", counter);
	textArea1.invalidate();


}
