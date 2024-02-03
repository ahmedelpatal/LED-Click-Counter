int button=2;
int reading=0;
int x=0;
int led_red=5;
int led_yellow=6;
int led_green=7;
int on=500;
int off=500;
void setup()
{
  pinMode(button,INPUT);
  pinMode(led_red,OUTPUT);
  pinMode(led_yellow,OUTPUT);
  pinMode(led_green,OUTPUT);
}

void loop()
{
   reading=digitalRead(button);
  if(reading == HIGH){
    x++;
    if(x==1){
      digitalWrite(led_red,HIGH);
      delay(on);
    }
    else if(x==2){
      digitalWrite(led_yellow,HIGH);
      delay(on);
    }
    else if(x==3){
      digitalWrite(led_green,HIGH);
      delay(on);
      x++;
    }
    else{
      digitalWrite(led_red,LOW);
      digitalWrite(led_yellow,LOW);
      digitalWrite(led_green,LOW);
      delay(off);
      x=0;
    }
    
    delay(250);
    
  }
}