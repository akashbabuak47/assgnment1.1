#include<stdio.h>
int change(int b);
void main()
{
    int a,p,r=0;
    printf("Train number is :");
    scanf("%d",&a);
    for(int i=0;a>0;i++)
    {   
        p=a%10;
        r=r*10+p;
        a=a/10;
    }
    a=r;
    change(a);
}
int change(int b)
{
    int q;
    while(b>0)
    {
        q=b%10;
        b=b/10;
        switch (q)
        {
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            case 0:
                printf("zero ");
                break;
            default:
                break;
        }
    }
}