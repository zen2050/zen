MC 1


#include<reg51.h> 
 void Delay(unsigned int time); 
 void main(void) 
 { 
  P2 = 0xAA; 
  Delay(1000); 
  P2 = 0x55; 
  Delay(1000); 
 } 
  
 void Delay(unsigned int time) 
 { 
  unsigned int i,j; 
  for (i = 0; i < time; i++){ 
   for (j = 0; j < 23; j++){ 
   } 
  } 
 }





// MC 2

#include<reg51.h> 
 void Delay(unsigned int time); 
 void main(void) 
 { 
  while(1){ 
   P2 = P1; 
   Delay(1000); 
  } 
 } 
  
 
 void Delay(unsigned int time) 
 { 
  unsigned int i,j; 
  for (i = 0; i < time; i++){ 
   for (j = 0; j < 23; j++){ 
   } 
} 
}
