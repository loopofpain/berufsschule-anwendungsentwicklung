#pragma once

#define NORMAL FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY 
#define ROT FOREGROUND_RED | FOREGROUND_INTENSITY 
#define GRUEN FOREGROUND_GREEN | FOREGROUND_INTENSITY 

extern bool ab_parkhaus[3][10];

void freiesParken(int etage, int parkplatz, int freieZeitInSekunden);
