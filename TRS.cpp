#include <iostream>
#include <math.h>
#include <graphics.h>
using namespace std;

int main()
{
    //int a[][];
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int a[3][3];
    int m,ch;
    char choice;
    closegraph();

    do
    {
        cout << "\n1.For triangle\n2.Translation\n3.Scaling\n4.Rotation";
        cout << "Enter your choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter the cordinate of x1 and y1:" << endl;
            cin >> a[0][0] >> a[0][1];
            cout << "Enter the cordinate of x2 and y2:" << endl;
            cin >> a[1][0] >> a[1][1];
            cout << "Enter the cordinate of x3 and y3:" << endl;
            cin >> a[2][0] >> a[2][1];
            a[0][2] = a[1][2] = a[2][2] = 1;
            setcolor(RED);
            line(a[0][0], a[0][1], a[1][0], a[1][1]);
            line(a[1][0], a[1][1], a[2][0], a[2][1]);
            line(a[2][0], a[2][1], a[0][0], a[0][1]);
            delay(500);

        }

        case 2:
        {

            int t[3][3], l[3][3];
            cout << "Enter the value of tx and ty:" << endl;
            cin >> t[2][0] >> t[2][1];
            t[0][0] = t[1][1] = t[2][2] = 1;
            t[1][0] = t[0][1] = t[0][2] = t[1][2] = 0;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    l[i][j] = 0;
                    for (int k = 0; k < 3; k++)
                    {
                        l[i][j] += a[i][k] * t[k][j];
                    }
                }
            }
            setcolor(BLUE);
            line(l[0][0], l[0][1], l[1][0], l[1][1]);
            line(l[1][0], l[1][1], l[2][0], l[2][1]);
            line(l[2][0], l[2][1], l[0][0], l[0][1]);
            delay(20000);
            break;
        }
        case 3:
        {
            float sx, sy;
            float t[3][3], l[3][3];
            cout << "Enter the value of sx and sy:" << endl;
            cin >> t[0][0] >> t[1][2];
            t[0][1] = t[0][2] = t[1][2] = t[1][2] = t[2][0] = t[2][1];
            t[2][2] = 1;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    l[i][j] = 0;
                    for (int k = 0; k < 3; k++)
                    {
                        l[i][j] += a[i][k] * t[k][j];
                    }
                }
            }
            setcolor(BLUE);
            line(l[0][0], l[0][1], l[1][0], l[1][1]);
            line(l[1][0], l[1][1], l[2][0], l[2][1]);
            line(l[2][0], l[2][1], l[0][0], l[0][1]);
            delay(20000);
            break;

        }
        case 4:
        {


            float z, A;
            float t[3][3];
            float l[3][3];
            cout << "Enter the angle:";
            cin >> z;
            A = (z * 3.14) / 180;
            t[2][2] = 1;
            t[0][2] = t[1][2] = t[2][0] = t[2][1] = 0;
            t[0][0] = t[1][1] = cos(A);
            t[0][1] = sin(A);
            t[1][0] = (-sin(A));
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    l[i][j] = 0;
                    for (int k = 0; k < 3; k++)
                    {
                        l[i][j] += a[i][k] * t[k][j];
                    }
                }
            }
            setcolor(BLUE);
            line(l[0][0], l[0][1], l[1][0], l[1][1]);
            line(l[1][0], l[1][1], l[2][0], l[2][1]);
            line(l[2][0], l[2][1], l[0][0], l[0][1]);
            delay(20000);
            break;
            

        }
        }cout << "Do you want to continue enetr(y/n)" << endl;
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');
    
    
    
    return 0;

}