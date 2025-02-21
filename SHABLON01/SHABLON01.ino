
//Маркеры памяти
//void - пустота - космос - ничего - не использует память
//int  - интеджер - целое - память для чисел 12345
//char - символы - буквы
//long - для всего
//------setup - Название
//------() - круглые скобки (SHIFT+9, SHIFT+0) настройки
//------{} - фигурные скобки (SHIFT+Х, SHIFT+Ъ) Начало и конец
//Сложных приказов
// объявляем константы с номерами выходов
const int buttonPin1 = 2;  // выход, подключённый к кнопке
const int buttonPin2 = 3;  // выход, подключённый к кнопке
const int buttonPin3 = 4;  // выход, подключённый к кнопке
const int buttonPin4 = 5;  // выход, подключённый к кнопке

const int ledPin = 13;  // выход, к которому подключён распаянный на плате светодиод
// переменные
int buttonState = 0;  // здесь мы храним значение нажата или не нажата кнопка

// Способности:
// зажечь пиксель на матрице 
void pixel() {}
// отслеживание нажатия кнопки 1 порт 2 
void knop_1() {
  // считываем положение кнопки
  buttonState1 = digitalRead(buttonPin1);
  // если кнопка нажата, то
  if (buttonState1 == HIGH) {
    // включаем светодиод
    digitalWrite(ledPin, HIGH);
  } else {
    // выключаем: digitalWrite(ledPin, LOW);
  }
}
// отслеживание нажатия кнопки 2 
void knop_2() {
  // считываем положение кнопки
  buttonState2 = digitalRead(buttonPin2);
  // если кнопка нажата, то
  if (buttonState2 == HIGH) {
    // включаем светодиод
    digitalWrite(ledPin, HIGH);
  } else {
    // выключаем: digitalWrite(ledPin, LOW);
  }
}
// отслеживание нажатия кнопки 3 
void knop_3() {
    // считываем положение кнопки
  buttonState3 = digitalRead(buttonPin3);
  // если кнопка нажата, то
  if (buttonState3 == HIGH) {
    // включаем светодиод
    digitalWrite(ledPin, HIGH);
  } else {
    // выключаем: digitalWrite(ledPin, LOW);
  }
}
// отслеживание нажатия кнопки 4 
void knop_4() {
    // считываем положение кнопки
  buttonState4 = digitalRead(buttonPin4);
  // если кнопка нажата, то
  if (buttonState4 == HIGH) {
    // включаем светодиод
    digitalWrite(ledPin, HIGH);
  } else {
    // выключаем: digitalWrite(ledPin, LOW);
  }
}
// издать звук 
void zvuk() {
 tone(3, 1000);
 delay(500);
 noTone(3);
}
// Вывести число 
void chislo() {
#include <TM1637.h>
 TM1637 tm1637(2, 3);
 tm1637.init();  // инициализируем библиотеку
 tm1637.setBrightness(5);  // устанавливаем яркость дисплея  
}

void setup() {       //-слэш - разрез /слэш в гору \слэш с горы
  // инициализируем выход со светодиодом как OUTPUT
  pinMode(ledPin, OUTPUT);
  // инициализируем выход, подключённый к кнопке, как INPUT
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
}

void loop() {
 

}
