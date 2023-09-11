#include <stdio.h>

int main(void)
{
    char str1[200];
    char str2[200];
    int chn = 0;

    printf("문장 입력 :");
    gets(str1);

    int i = 0;
    char s;
    while (str1[i] != '\0')
    {
        s = str1[i];
        if (s >= 'A' && s <= 'Z')
        {
            s += 'a' - 'A';
            chn++;
        }
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("바뀐 문장 : %s\n", str2);
    printf("바뀐 문자 수: %d\n", chn);

    return 0;
}