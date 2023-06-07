#include <stdio.h>
//
int main()
{
    int choice, peri, vol, area;
    printf("Enter your choice:\n");
    printf("1 Perimeter\n");
    printf("2 Area\n");
    printf("3 Volume\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Perimeter\n");
        printf("1 Square\n");
        printf("2 Rectangle\n");
        printf("3 Cube\n");
        printf("4 Cuboid\n");
        printf("5 Triangle\n");
        printf("6 Circle\n");
        scanf("%d", &peri);
        switch (peri)
        {
        case 1:
        {
            printf("Perimeter\n");
            int s;
            printf("Square\n");
            printf("Enter the side:\n");
            scanf("%d", &s);
            printf("The perimeter is %d\n", 4 * s);
            break;
        }
        case 2:
        {
            printf("Perimeter\n");
            int l, b;
            printf("Rectangle\n");
            printf("Enter the length and bredth:\n");
            scanf("%d%d", &l, &b);
            printf("The perimeter is %d\n", 2 * (l + b));
            break;
        }
        case 3:
        {
            printf("Perimeter\n");
            int s;
            printf("Cube\n");
            printf("Enter the side:\n");
            scanf("%d", &s);
            printf("The perimeter is %d\n", 12 * s);
            break;
        }
        case 4:
        {
            printf("Perimeter\n");
            int l, b, h;
            printf("Cuboid\n");
            printf("Enter the length bredth and height:\n");
            scanf("%d%d%d", &l, &b, &h);
            printf("The perimeter is %d\n", 4 * (l + b + h));
            break;
        }
        case 5:
        {
            printf("Perimeter\n");
            int a, b, c;
            printf("Triangle\n");
            printf("Enter the sides of triangle a b and c:\n");
            scanf("%d%d%d", &a, &b, &c);
            printf("The perimeter is %d\n", a + b + c);
            break;
        }
        case 6:
        {
            printf("Perimeter\n");
            int r;
            printf("Circle\n");
            printf("Enter the Radius:\n");
            scanf("%d", &r);
            printf("The perimeter is %d\n", (2 * r * 22) / 7);
            break;
        }
        default:
            printf("Invalid Value");
            break;
        }
        break;
    case 2:
        printf("Area\n");
        printf("1 Square\n");
        printf("2 Rectangle\n");
        printf("3 Cube\n");
        printf("4 Cuboid\n");
        printf("5 Circle\n");
        scanf("%d", &area);
        switch (area)
        {
        case 1:
        {
            printf("Area\n");
            int s;
            printf("Square\n");
            printf("Enter the side:\n");
            scanf("%d", &s);
            printf("The area is %d\n", s * s);
            break;
        }
        case 2:
        {
            printf("Area\n");
            int l, b;
            printf("Rectangle\n");
            printf("Enter the length and bredth:\n");
            scanf("%d%d", &l, &b);
            printf("The area is %d\n", l * b);
            break;
        }
        case 3:
        {
            printf("Area\n");
            int s;
            printf("Cube\n");
            printf("Enter the side:\n");
            scanf("%d", &s);
            printf("The area is %d\n", 6 * s * s);
            break;
        }

        case 4:
        {
            printf("Area\n");
            int l, b, h;
            printf("Cuboid\n");
            printf("Enter the length bredth and height:\n");
            scanf("%d%d%d", &l, &b, &h);
            printf("The area is %d\n", 2 * ((l * b) + (b * h) + (l * h)));
            break;
        }
        case 5:
        {
            printf("Area\n");
            int r;
            printf("Circle\n");
            printf("Enter the Radius:\n");
            scanf("%d", &r);
            printf("The area is %d\n", (r * r * 22) / 7);
            break;
        }
        default:
            printf("Invalid Value");
            break;
        }
        break;
    case 3:
        printf("Volume\n");
        printf("1 Cube\n");
        printf("2 Cuboid\n");
        scanf("%d", &vol);
        switch (vol)
        {
        case 1:
        {
            printf("Volume\n");
            int s;
            printf("Cube\n");
            printf("Enter the side:\n");
            scanf("%d", &s);
            printf("The volume is %d\n", s * s * s);
            break;
        }
        case 2:
        {
            printf("Volume\n");
            int l, b, h;
            printf("Cuboid\n");
            printf("Enter the length bredth and height:\n");
            scanf("%d%d%d", &l, &b, &h);
            printf("The volume is %d\n", l * b * h);
            break;
        }
        default:
            printf("Invalid Value");
            break;
        }
        break;
    default:
        printf("Invalid Value");
        break;
    }
}