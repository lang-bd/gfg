#include <cstdio>

using namespace std;

int funcf (int x);
int funcg (int y);
 
main()
{
    int x = 5, y = 10, count;
    for (count = 1; count <= 2; ++count)
    {
        y += funcf(x) + funcg(x);
        printf ("%d ", y);
    }
}
 
int funcf(int x)
{
    int y;
    y = funcg(x);
    return (y);
}
 
int funcg(int x)
{
    static int y = 10;
    y += 1;
    return (y+x);
}