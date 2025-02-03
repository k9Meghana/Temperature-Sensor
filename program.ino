// C++ code
//Wireless Temperature monitoring system
#include<LiquidCrystal_I2C.h>
  int led1=4;
  int led2=5;
  int led3=6;

  int temp=A1;
  const int cold=20;
  const int high=90;
   
  float val=0;

  LiquidCrystal_I2C lcd(0x27,16,2);

void setup()
{
  
  pinMode(temp,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
  Serial.begin(9600);
  
  lcd.begin(16,2);
  lcd.print("Temperature is to be Measured..!");
  lcd.setCursor(0,1);
   
  lcd.backlight();
}

void loop()
{
  val=analogRead(temp);
  Serial.print("Temperature in celcius");
  lcd.print(temp);
  lcd.print("celcius");
  Serial.print(temp);
  lcd.print(temp);
  
  if(temp<cold){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    
    Serial.print("Temperature is cold enough");
    lcd.print("Temperature is cold enough");
  }
  else if(temp<high){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    
    Serial.print("Temperature is moderate");
    lcd.print("Temperature is moderate");
  }
  else{
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    
    Serial.print("Temperature is Too hot");
    lcd.print("Temperature is Too hot");
  }
 
}