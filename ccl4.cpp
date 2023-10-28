#include <iostream>
#include <graphics.h>
using namespace std;

void drawline(int x_1, int y_1, int x_2, int y_2)
{
    float len, xin, yin, dx, dy, x, y;
    dx = x_2 - x_1;
    dy = y_2 - y_1;

    if (abs(dx) >= abs(dy))
    {
        len = abs(dx);
    }
    else {
        len = abs(dy);
    }
    xin = dx / len;
    yin = dy / len;
    x = x_1;
    y = y_1;
    for (int i = 0; i < len; i++)
    {
        putpixel(round(x), round(y), 10);
        x += xin;
        y += yin;
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12;
    int y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12;
    cout << "Enter the coordinates of End points of diagonal ";
    cin >> x1 >> y1 >> x2 >> y2;
    x3 = x2; y3 = y1;
    x4 = x1; y4 = y2;
    x5 = (x1 + x3) / 2; y5 = y1;
    x6 = x3; y6 = (y3 + y2) / 2;
    x7 = x5; y7 = y2;
    x8 = x1; y8 = y6;
    x9 = (x5 + x8) / 2; y9 = (y5 + y8) / 2;
    x10 = (x5 + x6) / 2; y10 = (y5 + y6) / 2;
    x11 = (x6 + x7) / 2; y11 = (y6 + y7) / 2;
    x12 = (x7 + x8) / 2; y12 = (y7 + y8) / 2;
    drawline(x1, y1, x3, y3);
    drawline(x1, y1, x4, y4);
    drawline(x3, y3, x2, y2);
    drawline(x4, y4, x2, y2);

    drawline(x5, y5, x6, y6);
    drawline(x6, y6, x7, y7);
    drawline(x7, y7, x8, y8);
    drawline(x8, y8, x5, y5);

    drawline(x9, y9, x10, y10);
    drawline(x10, y10, x11, y11);
    drawline(x11, y11, x12, y12);
    drawline(x12, y12, x9, y9);
    delay(10000);
    closegraph();
    return 0;
}