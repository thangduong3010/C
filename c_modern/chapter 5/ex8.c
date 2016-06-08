#include <stdio.h>

int main(void) {
    int dept1 = 8 * 60;
    int dept2 = 9 * 60 + 43;
    int dept3 = 11 * 60 + 19;
    int dept4 = 12 * 60 + 47;
    int dept5 = 14 * 60;
    int dept6 = 15 * 60 + 45;
    int dept7 = 19 * 60;
    int dept8 = 21 * 60 + 45;
    int h, m, conv, closest;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &h, &m);
    conv = h * 60 + m; // convert in minute expression

    // check closest departure
    if(conv >= dept1 && conv <= dept2){
        if(dept2 - conv > conv - dept1)
            closest = dept1;
        else
            closest = dept2;
    }
    else if(conv <= dept3){
        if(dept3 - conv > conv - dept2)
            closest = dept2;
        else
            closest = dept3;
    }
    else if(conv <= dept4){
        if(dept4 - conv > conv - dept3)
            closest = dept3;
        else
            closest = dept4;
    }
    else if(conv <= dept5){
        if(dept5 - conv > conv - dept4)
            closest = dept4;
        else
            closest = dept5;
    }
    else if(conv <= dept6){
        if(dept6 - conv > conv - dept5)
            closest = dept5;
        else
            closest = dept6;
    }
    else if(conv <= dept7){
        if(dept7 - conv > conv - dept6)
            closest = dept6;
        else
            closest = dept7;
    }
    else if(conv <= dept8){
        if(dept8 - conv > conv - dept7)
            closest = dept7;
        else
            closest = dept8;
    }

    printf("Closest departure time is ");
    switch(closest){
        case 8 * 60: printf("8:00 a.m., arriving at "); printf("10:16 a.m.\n"); break;
        case 9 * 60 + 43: printf("9:43 a.m., arriving at "); printf("11:52 a.m.\n"); break;
        case 11 * 60 + 19: printf("11:19 a.m., arriving at "); printf("1:31 p.m.\n"); break;
        case 12 * 60 + 47: printf("12:47 p.m., arriving at "); printf("3:00 p.m.\n"); break;
        case 14 * 60: printf("2:00 p.m., arriving at "); printf("4:08 p.m.\n"); break;
        case 15 * 60 + 45: printf("3:45 p.m., arriving at "); printf("5:55 p.m.\n"); break;
        case 19 * 60: printf("7:00 p.m., arriving at "); printf("9:20 p.m.\n"); break;
        case 21 * 60 + 45: printf("9:45 p.m., arriving at "); printf("11:58 p.m.\n"); break;
    }
    return 0;
}
