#include <stdio.h>
int main()
{
    FILE* pFile;
    pFile = fopen("myFile.txt","w");
    if (pFile != NULL)
    {
        fputs("fopen example",pFile);
        fclose(pFile);
    }
    return 0;
}