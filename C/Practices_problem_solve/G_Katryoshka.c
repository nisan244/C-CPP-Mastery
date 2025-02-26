#include <stdio.h>
int main(int argc, char const *argv[])
{  
    long long int eye , mouth, body , count = 0;
    long long int new_eye, new_mouth, new_body, new_value;
    scanf("%lld %lld %lld", &eye, &mouth, &body);


    if(eye < mouth && eye < body){
        count = eye;

    }
    else if (mouth < eye && mouth < body){
        count = mouth;
    }
    else{
        count = body;
    }

    new_eye = eye - count;
    new_mouth = mouth - count;
    new_body = body - count;

    if(new_eye >= 2){
        new_value = new_eye / 2;
        if (new_value < new_body){
            count += new_value;
        }
        else{
            count += new_body;
        }
    }
    printf("%lld", count);
    
    return 0;
}