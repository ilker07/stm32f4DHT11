

#ifndef DEGISKENLER__H
#define DEGISKENLER__H

#include "stdint.h"
#include "stdbool.h"


volatile uint32_t sure=0;
bool durum=0;
uint8_t sicaklik=0;
uint8_t nem=0;

uint8_t geciciSicaklik=0;
uint8_t geciciNem=0;
bool dizi[40];
uint16_t olculenSure,zaman1=0,zaman2=0;
bool bit = 0;
uint8_t dusukSic=0,dusukNem=0,parity=0;

#endif

