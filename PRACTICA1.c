/*
  SEMINARIO DE EMBEBIDOS
  Prof. Jesus Ramos
  Alumno: Hernandez Salinas Brandon Eduardo
  Practica 1
  21/08/2021
*/

#define TIME 500
#define HIGH 1
#define LOW 0
void main() {
  
  //DETERMINAR PUERTO A.F2 COMO E/S DIGITAL
  ANSEL.F2 = 0;

  //INICIALIZAR PUERTOS COMO SALIDAS DIGITALES
  TRISA.F2 = 0;
  TRISB.F3 = 0;
  TRISC.F2 = 0;
  TRISC.F5 = 0;
  
  //INICIALIZAR PUERTOS EN ESTADO LOW PARA EVITAR FUNCIONAMIENTOS INESPERADOS
  PORTA.F2 = 0;
  PORTB.F3 = 0;
  PORTC.F2 = 0;
  PORTC.F5 = 0;
  while(1)
  {
    
    PORTA.F2 = HIGH;
    Delay_ms(TIME);
    PORTA.F2 = LOW;
    Delay_ms(TIME);
    
    PORTB.F3 = HIGH;
    Delay_ms(TIME);
    PORTB.F3 = LOW;
    Delay_ms(TIME);
    
    PORTC.F2 = HIGH;
    Delay_ms(TIME);
    PORTC.F2 = LOW;
    Delay_ms(TIME);
    
    PORTC.F5 = HIGH;
    Delay_ms(TIME);
    PORTC.F5 = LOW;
    Delay_ms(TIME);
    
  }
  


}