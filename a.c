
#include <stdio.h>

int main()

{

    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    int maxs=max(a,max(b,c));

    printf("%d",maxs);

}

int max(int x,int y)

{

    int t;

    t=x>y?x:y;

    return t;

}
