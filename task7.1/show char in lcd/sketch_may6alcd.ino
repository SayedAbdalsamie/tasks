#include <Keypad.h>
#include <LiquidCrystal.h>

const int rs = 13 , en = 12 , d4 = 11 , d5 = 10 , d6 = 1 , d7 = 0 ;
LiquidCrystal lcd(rs , en , d4 , d5 , d6 , d7 );

const int ROWS = 4;
const int COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte colPins[ROWS] = {6, 7, 8, 9};
byte rowPins[COLS] = {2, 3, 4, 5};
int i =0;
char arr[10];

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);



void setup() {
  lcd.begin(16, 2);
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    lcd.clear();
    lcd.setCursor(14, 0);
    lcd.print(key);
    lcd.display();
    lcd.scrollDisplayRight();
  }
}

