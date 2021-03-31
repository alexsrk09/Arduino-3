void setup() {
  pinMode(5,OUTPUT);
}

void loop() {
  for(int a=0;a<=255; a++){ //bucle que inicia el led con brillo minimo y finaliza con brillo en maximo
    analogWrite(5,a);
    delay(20);
  }
  for(int a=255;a>=0; a--){ //bucle que inicia el led con brillo maximo y finaliza con brillo en minimo
    analogWrite(5,a);
    delay(20);
  }
}
