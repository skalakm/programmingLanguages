#include <stdio.h>


enum TemperatureUnitEnum {Fahrenheit, Celsius };

typedef enum TemperatureUnitEnum TemperatureUnit;

typedef struct  
{
  double temperature;
  TemperatureUnit unit;
} Temperature;
 


void useTemperature()
{
  Temperature t;
  t.temperature = 35.84;
  t.unit = Celsius;
  char* unitString;
  if (t.unit == Celsius) {
    unitString = "Celsius";
  } else {
    unitString = "Fahrenheit";
  }
  printf("Temperature is %g degrees %s\n", t.temperature, unitString);
}


typedef union 
{
    char sval;
    unsigned char uval;
} SignedOrUnsigned;

void useSignedOrUnsigned()
{
  SignedOrUnsigned num;
  num.uval = 255;
  printf("signed value is %d; unsigned value is %d\n", 
	 num.sval,  num.uval);
}

// copied, with alterations, from  
// http://stackoverflow.com/questions/252552/why-do-we-need-c-unions
typedef union
{
    struct {
        unsigned char byte1;
        unsigned char byte2;
        unsigned char byte3;
        unsigned char byte4;
    } bytes;
    unsigned long dword;
} HW_Register;

void useHW_Register()
{
  HW_Register reg;
  reg.dword = 0x12345678;
  printf("Register contents: 0x%lx\n", reg.dword);
  reg.bytes.byte3 = 9;
  printf("Register contents: 0x%lx\n", reg.dword);
}

int main(int argn, char* argv[])
{
  /* useTemperature(); */
  /* useSignedOrUnsigned(); */
  useHW_Register();
}
