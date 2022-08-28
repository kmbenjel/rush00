void    ft_putchar(char c);
void    rush(int x, int y)
{
    int i;
    int corner1;
    int corner2;
    int corner3;
    int corner4;

    i = 1;
    corner1 = 1;
    corner2 = x;
    corner3 = x * y;
    corner4 = x * y - x + 1;
    while (i <= x * y)
    {
        if (i == corner1 || i == corner2 || i == corner3 || i == corner4)
            ft_putchar('o');
        else if ((i > corner1 && i < corner2)
            || (i > corner4 && i < corner3))
            ft_putchar('-');
        else if (i % x == 0 || i % x == 1)
            ft_putchar('|');
        else
            ft_putchar(' ');
        if (i % x == 0)
            ft_putchar('\n');
        i++;
    }
}
