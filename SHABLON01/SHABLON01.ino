
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
void pixel(int a) {

}
// отслеживание нажатия кнопки 1 порт 2 

int knop[4]={0,0,0,0}

void knop_1() {
  // считываем положение кнопки
  buttonState1 = digitalRead(buttonPin1);
  // если кнопка нажата, то
  if (buttonState1 == HIGH) {
    // включаем светодиод
    knop[1]=1
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
    knop[2]=1
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
    knop[3]=1
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
    knop[4]=1
    // включаем светодиод
    digitalWrite(ledPin, HIGH);
  } else {
    // выключаем: digitalWrite(ledPin, LOW);
  }
}

void sbros_knop(){
  knop[1]=0
  knop[2]=0
  knop[3]=0
  knop[4]=0
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

void setup() {
  int s=0;


}


// matrix={
//   01,02,03,04,05,06,07,08
//   09,10,11,12,13,14,15,16
//   17,18,19,20,21,22,23,24
//   25,26,27,28,29,30,31,32
//   33,34,35,36,37,38,39,40
//   41,42,43,44,45,46,47,48
//   49,50,51,52,53,54,55,56
//   57,58,59,60,61,62,63,64

// }
void loop() {
  //Переход Триггеры

  //-----------------
  //Состояния
  //Ждать
  if (s==1) {
    
  }
  //игра
  if (s==2) {
    //запомнить случайный порядок цветов цета это числа
    a[4]={}

    a[1]=math.random(1,4)
    a[2]=math.random(1,4)
    a[3]=math.random(1,4)
    a[4]=math.random(1,4)
    //зажечь пиксель

    pixel(math.random(1,64))

    pixel(math.random(1,64))
    pixel(math.random(1,64))
    pixel(math.random(1,64))

    //проверить нажатие, запомнить нажатие
   //сравнить нажатия раунда с цепочкой раунда
   //Сменить состояние
  }

  //финал
  if (s==3) {

  }

  //разряжен
  if (s==4) {

  }
}