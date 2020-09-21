// Alumno=Nicolas AlfreDo Jimenez
// Docente= Cesar Aceros 
// fecha = 14/50/20
//  lab dias vividos 
//codigo fuente=http://cplusplus.com/reference/ctime/difftime/

#include <stdio.h>      // printf 
#include <time.h>       //difftime, time, mktime 
int dias= 86400;
int main ()
{
  time_t timer;
  struct tm y2k = {0};
  double seconds;
  double days;

  y2k.tm_hour = 0;   y2k.tm_min = 0; y2k.tm_sec = 0;
  y2k.tm_year = 94; y2k.tm_mon = 9; y2k.tm_mday = 21; // definicion de dia de partida 

  time(&timer);  ///tiempo transcurido hasta el momento actual 

  seconds = difftime(timer,mktime(&y2k));
  days = seconds/dias ;  // convercion de segundos a dias 

  //cout << "time in seconds: " << seconds << " m^2 \n";

  printf ("%.f dias trascurridos desde el 21 septiembre de 1994",days);


  return 0;
}