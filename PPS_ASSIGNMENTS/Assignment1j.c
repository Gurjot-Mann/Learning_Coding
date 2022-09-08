#include <stdio.h>
int main()
{
    int tpop = 80000, mper, tlit, mlit, wlit, tillitm, tillitw;
    mper = (tpop * 52) / 100;
    tlit = (tpop * 48) / 100;
    mlit = (tpop * 35) / 100;
    tillitm = mper - mlit;
    tillitw = tpop - tlit - tillitm;
    printf("Total no. of illitrate men =%d\n", tillitm);
    printf("Total no. of illitrate women =%d\n", tillitw);

    return 0;
}