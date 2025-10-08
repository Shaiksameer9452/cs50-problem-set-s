#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main(void)
{
    string text=get_string("Text:");
    int l=0,s=0,w=1;
    for(int i=0, n=strlen(text); i<n; i++)
    {
        if(text[i]==' ')
        {
            w++;

        }
        else if (text[i] == '.'|| text[i] == '?'|| text[i] == '!')
        {
            s++;

        }
        else if (isalpha(text[i]))
        {
            l++;

        }

    }
    int index =round (0.0588 * l/w*100 - 0.296 * s/w*100 - 15.8);
    if(index<1)
    {
        printf("Before Grade 1\n");

    }
    else if (index>=16)
    {
        printf("Grade 16+\n");

    }
    else
    {
        printf("Grade %d\n",index);

    }

}

