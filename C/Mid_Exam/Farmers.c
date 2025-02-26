#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int M1, M2, D;
    int sum_man,oneday, groupday, Answer;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &M1, &M2, &D);
        
        oneday = (M1*D);
        sum_man = (M1 + M2); 
        groupday = oneday / sum_man;

        Answer = D - groupday;

        printf("%d\n", Answer);
    }
    
    return 0;
}

//DONE
//Accepted

