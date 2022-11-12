#include <stdio.h>
#include <string.h>

void encrypt(char pass[], int key)
{
    for (int i = 0; i < strlen(pass); i++)
    {
        pass[i] = pass[i] - key;
    }
}

void decrypt(char pass[], int key)
{ 
    for (int i = 0; i < strlen(pass); i++)
    {
        pass[i] = pass[i] + key;
    }
}

int main()
{

    char pass[30];
    printf("Enter Your Password: ");
    scanf("%s", pass);
    encrypt(pass, 0XAED);
    printf("\nEncrypt Password is = %s", pass);
    decrypt(pass, 0XAED);
    printf("\nDecrypt password is = %s", pass);

    return 0;
}
