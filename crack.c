#include<stdio.h>
#include<cs50.h>
#define _XOPEN_SOURCE
#include <unistd.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <crypt.h>

void cipher(string key, int key_number);
int main(int argc, string argv[])
{
    int i,j,k,jin_wei,o= 0;;
    if(argc!=2)
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }
    char word[]=argv[1];
    char *s = crypt(word, "50");
    printf("%s",  s);

    for(i=1; i<3; i++)
    {
        char test[i+1];

//        initial
        for(int test_number=0; test_number<i+1;  test_number++)
        {
            test[test_number] = 'a';
        }


        while(1)
        {
            jin_wei=0;
            for(j=0; j<26; j++)
            {
                test[0] = 'a'+j;
                for(k=0; k<i; k++)
                {
                    printf("%c", test[k]);
                    char *s = crypt(test, "50");
                    while(s[o] != '\0')
                    {
                        if(s[o] != word[o+2])
                        {
                            break;
                        }
                    }
                }
                printf("\n");
            }

            test[0] = 'a'+j;

            for(; jin_wei<i; jin_wei++)
            {
                if(test[jin_wei]>'z')
                {
                    test[jin_wei]='a';
                    test[jin_wei+1]+=1;
                }
            }
            if(test[i]>'a')
            {
                break;
            }


        }

        printf("i=%d\n", i);
    }
    return 0;

}

//  .jPgLzVirkc
