#include "foo.h"
#include <graphics.h>
void simple_calculator()
{
    setfillstyle(1, 0);
    bar(0, 0, 240, 300);
    setcolor(GREEN);
    rectangle(0, 0, 240, 300);
    line(0, 60, 240, 60);
    line(60, 60, 60, 240);
    line(120, 60, 120, 300);
    line(180, 60, 180, 300);
    line(240, 60, 240, 300);
    line(0, 240, 180, 240);
    line(0, 120, 180, 120);
    line(0, 180, 180, 180);

    line(180, 90, 240, 90);
    line(180, 120, 240, 120);
    line(180, 150, 240, 150);
    line(180, 180, 240, 180);
    line(180, 210, 240, 210);
    line(180, 240, 240, 240);

    settextstyle(10, 0, 3);
    outtextxy(200, 250, "C");
    outtextxy(20, 75, "7");
    outtextxy(20, 135, "4");
    outtextxy(20, 195, "1");
    outtextxy(80, 75, "8");
    outtextxy(80, 135, "5");
    outtextxy(80, 195, "2");
    outtextxy(140, 75, "9");
    outtextxy(140, 135, "6");
    outtextxy(140, 195, "3");
    outtextxy(50, 255, "0");
    outtextxy(140, 255, ".");

    settextstyle(10, 0, 1);
    outtextxy(200, 65, "+");
    outtextxy(200, 95, "-");
    outtextxy(200, 125, "*");
    outtextxy(200, 155, "/");
    outtextxy(200, 185, "%");
    outtextxy(200, 215, "v");
    line(210, 223, 222, 223);
    line(210, 224, 222, 224);
}
