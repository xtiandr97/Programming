#include<stdio.h>

int main()
{
	char a,C,F,c,f;
	float celsius, fahrenheit;
    printf("Temperature Converter v1.0\nChristian D. Remonde BSCpE-3\nPress F to convert Celcius to Fahrenheit or C to convert Fahrenheit to Celcius!\n");
    scanf("%c",&a);
    if ((a=='F')||(a=='f'))
    {
	printf("Enter temperature in Celsius : ");
	scanf("%f", &celsius);
	fahrenheit = (1.8 * celsius) + 32;
	printf("Temperature in Fahrenheit : %.4f \n", fahrenheit);
    printf("Thank you for using my program.\nFor your feedback, comments and requests. Just email me at\nchristian.remonde1@gmail.com\nHave a nice day!\n");
    }
    else if ((a=='C')||(a=='c'))
    {
	printf("Enter temperature in Fahrenheit : ");
	scanf("%f", &fahrenheit);
	celsius = (fahrenheit-32)*1.8;
	printf("Temperature in Celsius : %.4f \n", celsius);
    printf("Thank you for using my program.\nFor your feedback, comments and requests. Just email me at\nchristian.remonde1@gmail.com\nHave a nice day!\n");
    }
    else
    {
    printf("Invalid Keyword!\n");
    printf("Thank you for using my program.\nFor your feedback, comments and requests. Just email me at\nchristian.remonde1@gmail.com\nHave a nice day!\n");
    }
	getch();
}
