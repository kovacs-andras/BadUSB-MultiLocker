#include <Keyboard.h>
//v.0.1 - András Kovács - andras0602@hotmail.com
void setup() 
{
  Keyboard.begin();
  delay(5000);
}

void loop() 
{
  while(1){
    // Windows+L:
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('l');
    delay(100);
    Keyboard.releaseAll();
    delay(2000);
    // CTRL+ALT+L
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('l');
    Keyboard.releaseAll(); 
    delay(2000);
    // Command+Control+Q
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('q');
    delay(100);
    Keyboard.releaseAll();
    delay(2000); 
    // just wait for 6.66 "evil" minutes... ( ͡° ͜ʖ ͡°)
    delay(400000); 
  }
}
