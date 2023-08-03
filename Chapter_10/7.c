#include<stdio.h>


void copy_arr(double target[],double source[],int n)
{
    for(int i=0;i<n;i++)
    {
        target[i]=source[i];
    }
}

int main()
{
    double source[2][5]={{1.1,2.2,3.3,4.4,5.5},
    {1.2,2.3,3.4,4.5,5.6}
    };
    double target[2][5]={0.0};
    int rows=sizeof(source)/sizeof(source[0]);
    int cols=sizeof(source[0])/sizeof(source[0][0]); 
    for(int i=0;i<rows;i++)
    {
        copy_arr(target[i],source[i],cols);
    }
    printf("target={\n");
    for(int i=0;i<rows;i++)
    {
        printf("{");
        for(int j=0;j<cols;j++)
        {
            printf("%lg ",target[i][j]);
        }
        printf("}\n");

    }
    printf("}");
        return 0;
}



