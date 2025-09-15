//#include<lpc21xx.h>
#include "types.h"
void cfgPortPinFunc(u32,u32,u32);
main(){
	cfgPortPinFunc(1,0,1);
	cfgPortPinFunc(1,1,1);
}

