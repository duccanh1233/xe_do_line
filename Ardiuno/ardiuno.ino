/*#include <Arduino.h>
#include <stdio.h>

int  CB = 7;//14
  void setup() {
  pinMode(CB,OUTPUT);
  Serial.begin(115200);
  }
 void loop() {
  int GTCB = analogRead(CB);
    Serial.println(GTCB);  
  delay(500);
  }*/

/*#define enbA 9//phai
#define inA1 8 
#define inA2 7 
#define enbB 6//trai
#define inA3 5 
#define inA4 4


void setup()
{
  pinMode(inA1, OUTPUT);
  pinMode(inA2, OUTPUT);
  pinMode(enbA, OUTPUT);
  pinMode(inA3, OUTPUT);//Set chân in1 của dc A là output
  pinMode(inA4, OUTPUT);
  pinMode(enbB, OUTPUT);
  Serial.begin(9600);                     //setting serial monitor at a default baund rate of 9600
  delay(500);
}
void loop() {
  
  analogWrite(enbA, 150);
  analogWrite(enbB,175);
  digitalWrite(inA1, 1);
  digitalWrite(inA2, 0);
  digitalWrite(inA3, 1);
  digitalWrite(inA4, 0);
  delay(2000);
  

}*/

/*#include <Arduino.h>
#include <stdio.h>

int  CB = 2;//14
  void setup() {
  pinMode(CB,OUTPUT);
  Serial.begin(115200);
  }
 void loop() {
  int GTCB = digitalRead(CB);
    Serial.println(GTCB);  
  delay(500);
  }*/

#define enbA 9
#define inA1 8 
#define inA2 7
#define enbB 6
#define inA3 5 
#define inA4 4

int robot_trai = 2;
int robot_phai = 3;
int cb1 = 0;
int cb2 = 1;
int cb3 = 2;
int cb4 = 3;
int cb5 = 4;
int cb6 = 5;
int cb7 = 6;
int cb8 = 7;
int a = 900;

int gtcb1;
int gtcb2;
int gtcb3;
int gtcb4;
int gtcb5;
int gtcb6;
int gtcb7;
int gtcb8;
int gtRobot_trai;
int gtRobot_phai;
 

void dithang();
void sangtrai1();
void sangtrai2();
void sangtrai3();
void sangphai1();
void sangphai2();
void sangphai3();
void Robot_trai();
void Robot_phai();

void setup()
{
  pinMode(inA1, OUTPUT);
  pinMode(inA2, OUTPUT);
  pinMode(enbA, OUTPUT);
  pinMode(inA3, OUTPUT);
  pinMode(inA4, OUTPUT);
  pinMode(enbB, OUTPUT);
  pinMode(cb1,INPUT);
  pinMode(cb2,INPUT);
  pinMode(cb3,INPUT);
  pinMode(cb4,INPUT);
  pinMode(cb5,INPUT);
  pinMode(cb6,INPUT);
  pinMode(cb7,INPUT);
  pinMode(cb8,INPUT);
  Serial.begin(9600);                 
  delay(500);
}
void loop() {
  gtcb1=analogRead(cb1);
  gtcb2=analogRead(cb2);
  gtcb3=analogRead(cb3);
  gtcb4=analogRead(cb4);
  gtcb5=analogRead(cb5);
  gtcb6=analogRead(cb6);
  gtcb7=analogRead(cb7);
  gtcb8=analogRead(cb8);     
  gtRobot_trai = digitalRead(robot_trai);
  gtRobot_phai = digitalRead(robot_phai);

if(gtRobot_trai ==1 && gtRobot_phai==0){
  Robot_trai();
  }
  
else if(gtRobot_trai ==0 && gtRobot_phai==1){
  Robot_phai();
  }
  
}
void Robot_trai(){
  if(gtcb1 <=a && gtcb2<= a && gtcb3<= a && gtcb4>= a && gtcb5>= a && gtcb6<= a && gtcb7<= a && gtcb8<= a ){
    dithang();
  }
   else if (gtcb1 >=a && gtcb2>= a && gtcb3<= a && gtcb4<= a && gtcb5<= a && gtcb6<= a && gtcb7<= a && gtcb8<= a ){
    sangphai3();
  }
   else if (gtcb1 <=a && gtcb2>= a && gtcb3>= a && gtcb4<= a && gtcb5<= a && gtcb6<= a && gtcb7<= a && gtcb8<= a ){
    sangphai2();
  }
    else if (gtcb1 <=a && gtcb2<= a && gtcb3>= a && gtcb4>= a && gtcb5<= a && gtcb6<= a && gtcb7<= a && gtcb8<= a ){
    sangphai1();
  }
  else if (gtcb1 <=a && gtcb2<= a && gtcb3<= a && gtcb4<= a && gtcb5<= a && gtcb6<= a && gtcb7>= a && gtcb8>= a ){
    sangtrai3();
  }
   else if (gtcb1 <=a && gtcb2<= a && gtcb3<= a && gtcb4<= a && gtcb5<= a && gtcb6>= a && gtcb7>= a && gtcb8<= a ){
    sangtrai2();
  }
    else if (gtcb1 <=a && gtcb2<= a && gtcb3<= a && gtcb4<= a && gtcb5>= a && gtcb6>= a && gtcb7<= a && gtcb8<= a ){
    sangtrai1();
  }
   else if (gtcb1 >=a && gtcb2>= a && gtcb3>= a && gtcb4>= a && gtcb5>= a && gtcb6>= a && gtcb7>= a && gtcb8>= a ){
    analogWrite(enbA,200);
  analogWrite(enbB,0);
  digitalWrite(inA1, 1);
  digitalWrite(inA2, 0);
  digitalWrite(inA3, 1);
  digitalWrite(inA4, 0);
  delay(500);
  }
  }
void Robot_phai(){
  if(gtcb1 <=a && gtcb2<= a && gtcb3<= a && gtcb4>= a && gtcb5>= a && gtcb6<= a && gtcb7<= a && gtcb8<= a ){
    dithang();
  }
   else if (gtcb1 >=a && gtcb2>= a && gtcb3<= a && gtcb4<= a && gtcb5<= a && gtcb6<= a && gtcb7<= a && gtcb8<= a ){
    sangphai3();
  }
   else if (gtcb1 >=a && gtcb2<= a && gtcb3<= a && gtcb4<= a && gtcb5<= a && gtcb6<= a && gtcb7<= a && gtcb8<= a ){
    sangphai4();
  }
   else if (gtcb1 <=a && gtcb2>= a && gtcb3>= a && gtcb4<= a && gtcb5<= a && gtcb6<= a && gtcb7<= a && gtcb8<= a ){
    sangphai2();
  }
    else if (gtcb1 <=a && gtcb2<= a && gtcb3>= a && gtcb4>= a && gtcb5<= a && gtcb6<= a && gtcb7<= a && gtcb8<= a ){
    sangphai1();
  }

   else if (gtcb1 <=a && gtcb2<= a && gtcb3<= a && gtcb4<= a && gtcb5<= a && gtcb6<= a && gtcb7>= a && gtcb8>= a ){
    sangtrai4();
  }
    else if (gtcb1 <=a && gtcb2<= a && gtcb3<= a && gtcb4<= a && gtcb5<= a && gtcb6<= a && gtcb7<= a && gtcb8>= a ){
    sangtrai3();
  }
   else if (gtcb1 <=a && gtcb2<= a && gtcb3<= a && gtcb4<= a && gtcb5<= a && gtcb6>= a && gtcb7>= a && gtcb8<= a ){
    sangtrai2();
  }
    else if (gtcb1 <=a && gtcb2<= a && gtcb3<= a && gtcb4<= a && gtcb5>= a && gtcb6>= a && gtcb7<= a && gtcb8<= a ){
    sangtrai1();
  }
  
   else if (gtcb1 >=a && gtcb2>= a && gtcb3>= a && gtcb4>= a && gtcb5>= a && gtcb6>= a && gtcb7>= a && gtcb8>= a ){
    analogWrite(enbA,0);
  analogWrite(enbB,200);
  digitalWrite(inA1, 1);
  digitalWrite(inA2, 0);
  digitalWrite(inA3, 1);
  digitalWrite(inA4, 0);
delay(500);
  }
    
    }
void dithang()
{
  analogWrite(enbA,140);
  analogWrite(enbB,165);
  digitalWrite(inA1, 1);
  digitalWrite(inA2, 0);
  digitalWrite(inA3, 1);
  digitalWrite(inA4, 0);
}
void dunglai()
{
  analogWrite(enbA,0);
  analogWrite(enbB,0);
  digitalWrite(inA1, 0);
  digitalWrite(inA2, 0);
  digitalWrite(inA3, 0);
  digitalWrite(inA4, 0);
}
void sangtrai1()
{
  analogWrite(enbA,125);
  analogWrite(enbB,70);
  digitalWrite(inA1, 1);
  digitalWrite(inA2, 0);
  digitalWrite(inA3, 1);
  digitalWrite(inA4, 0);
}
void sangtrai2()
{
  analogWrite(enbA,135);
  analogWrite(enbB,60);
  digitalWrite(inA1, 1);
  digitalWrite(inA2, 0);
  digitalWrite(inA3, 1);
  digitalWrite(inA4, 0);
}
void sangtrai3()
{
  analogWrite(enbA,150);
  analogWrite(enbB,50);
