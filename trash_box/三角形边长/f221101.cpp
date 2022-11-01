
#include<stdio.h>
#include<math.h>
float length(int(x1), int(y1), int(x2), int(y2));
int main()
{
    float x1, x2, x3, y1, y2, y3;
    float leng1, leng2, leng3;
    float c;
    scanf_s("%f %f", &x1, &y1);
    printf("\n");
    scanf_s("%f %f", &x2, &y2);
    printf("\n");
    scanf_s("%f %f", &x3, &y3);
    printf("\n");
    leng1 = length(x1, x2, y1, y2);
    leng2 = length(x1, x3, y1, y3);
    leng3 = length(x3, x2, y3, y2);
    c = leng1 + leng2 + leng3;
    printf("%f", c);
    return 0;
}
float length(int(x1), int(y1), int(x2), int(y2))
{
    float length;
    length = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return length;
}
