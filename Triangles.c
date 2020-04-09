int main(void)
{
   
   int Input, I, J, Z;
    printf("Please enter a number: \n");
    
    scanf("%d", &Input);
    
    printf("You entered the number: %d \n", Input);
    
    printf("*\n");
    if (Input != 1 && Input != 0) 
    {
        printf("**\n");
        for (I = 3; I < Input; I++)
        {
            printf("*");
            for (J = 1; J < I - 1;J++ )
            {
                printf(" "); 
            }
            printf("*\n");
        }
        if (Input != 2) {
            for (I = 1; I <= Input; I++) 
            {
                printf("*");   
            }
        }
    }
    return 0;   
}