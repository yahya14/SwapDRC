#include "common/types.h"

int isSplatoon __attribute__((section(".data"))) = 0;
int drcMode __attribute__((section(".data"))) = 0;
int patched __attribute__((section(".data"))) = 0;
uint32_t new_addr __attribute__((section(".data"))) = 0;

// for Splatoon
uint32_t* gamemode __attribute__((section(".data"))) = (uint32_t*)0;
uint32_t* inkstrikeEq __attribute__((section(".data"))) = (uint32_t*)0x10000000;
uint32_t* spTimer __attribute__((section(".data"))) = (uint32_t*)0x10000000;

uint32_t incrementVal __attribute__((section(".data"))) = (uint32_t)0;
uint32_t* incrementPtr __attribute__((section(".data"))) = (uint32_t*)0x10000000;