#include <Keypad.h>
#include <LiquidCrystal.h>

const int rs = 13 , en = 12 , d4 = 11 , d5 = 10 , d6 = 1 , d7 = 0 ;
LiquidCrystal lcd(rs , en , d4 , d5 , d6 , d7 );

const int ROWS = 4;
const int COLS = 4;

char keys[ROWS][COLS] = {
  {'1', '2', '3', '/'},
  {'4', '5', '6', '*'},
  {'7', '8', '9', '-'},
  {'C', '0', '=', '+'}
};

byte colPins[ROWS] = {6, 7, 8, 9};
byte rowPins[COLS] = {2, 3, 4, 5};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Calculator");

    static String currentNumber = "";
    static double result = 0;
    static char previousOperator = '\0';

    if (key >= '0' && key <= '9') {
      currentNumber += key;
      lcd.setCursor(0, 1);
      lcd.print(currentNumber);
    } if (key == '+' || key == '-' || key == '*' || key == '/') {
  double number = atof(currentNumber.c_str());
  currentNumber = "";

  if (previousOperator == '+') {
    result += number;
  } else if (previousOperator == '-') {
    result -= number;
  } else if (previousOperator == '*') {
    result *= number;
  } else if (previousOperator == '/') {
    if (number != 0) {
      result = result / number;  // تعكس الأعداد في عملية القسمة
    } else {
      lcd.setCursor(0, 1);
      lcd.print("Error: Division by 0");
      delay(2000);
    }
  } else {
    result = number;
  }

  previousOperator = key;
} else if (key == '=') {
      double number = atof(currentNumber.c_str());
      currentNumber = "";

      if (previousOperator == '+') {
        result += number;
      } else if (previousOperator == '-') {
        result -= number;
      } else if (previousOperator == '*') {
        result *= number;
      } else if (previousOperator == '/') {
        if (number != 0) {
          result /= number;
        } else {
          lcd.setCursor(0, 1);
          lcd.print("Error: Division by 0");
          delay(2000);
        }
      } else {
        result = number;
      }

      lcd.setCursor(0, 1);
      lcd.print(result);
      result = 0;
    } else if (key == 'C') {
      currentNumber = "";
      result = 0;
    }
  }
}












