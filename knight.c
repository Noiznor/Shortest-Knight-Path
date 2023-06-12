#include <stdlib.h>
#include <math.h>

short knight(const char *p1, const char *p2) {
    
//  https://math.stackexchange.com/questions/1135683/minimum-number-of-steps-for-knight-in-chess/1137144#1137144
//  algorithm translated from siebenschlaefer's python solution

    short x1 = p1[0] - 97;
    short x2 = p1[1] - 49;
    short y1 = p2[0] - 97;
    short y2 = p2[1] - 49;

    short dx = abs(x1 - y1);
    short dy = abs(x2 - y2);
    
    short a = round(dx / -2.0);
    short b = round(dy / -2.0);
    short c = round((dx + dy) / -3.0);
    
    short m1 = -(a < b ? (a < c ? a : c) : (b < c ? b : c));
    
    if(!((x1 % 7 + x2 % 7) * (y1 % 7 + y2 % 7)) && dx * dy == 1) {
        return 4;
    }
    if(dx + dy == 1) {
        return 3;
    }
    if(dx == 2 && dy == 2) {
        return 4;
    }
    return m1 + (m1 + dx + dy) % 2;
}
