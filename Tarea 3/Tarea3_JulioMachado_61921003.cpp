
//link: https://www.tinkercad.com/things/k0R9rVfOL7E-tarea-3/editel

class Led{  
public:    
  Led(int _pin){
    pin=_pin;
    pinMode(pin,OUTPUT);
  }
  void encenderApagar(bool tipo){
      if(tipo){
      	digitalWrite(pin, HIGH);
      }else{
      	digitalWrite(pin, LOW);
      }
  }
  
  private:
  int pin;
};

class Pulsador{  
public:  
  Pulsador(int _pin)
  {
    pin=_pin;
    pinMode(pin,INPUT);
  }
  
  int GetEstado()
  {    
    return digitalRead(pin);
  }
  
  private:
  	int pin;
};


byte Contador = 0;

Led LuzRoja(13);
Led LuzVerde(12);

Pulsador Incrementar(4);
Pulsador Disminuir(2);

void setup()
{
 Serial.begin(9600);
}

void loop()

{
  Serial.println(Contador);  
  if(Incrementar.GetEstado() == HIGH)
  {
    delay(100);
    Contador++;
    LuzVerde.encenderApagar(1);
    LuzVerde.encenderApagar(0);
  }
  if(Disminuir.GetEstado() == HIGH)
  {
    delay(100);
    LuzRoja.encenderApagar(1);
    LuzRoja.encenderApagar(0);
    if(Contador>0)
    {
      Contador--;
    }
   
  }  
}

