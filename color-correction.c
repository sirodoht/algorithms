/* This program makes a lighter or darker color given as input RGB values.
 * Source: http://www.pvladov.com/2012/09/make-color-lighter-or-darker.html
 */

#include <stdio.h>
#include <stdlib.h>

/* Color[0] = red
 * Color[1] = green
 * Color[2] = blue
 */

void colorCorrection(int inputColor[3], double correctionFactor, int outputColor[3])
{
	if (correctionFactor < 0)
    {
        correctionFactor = 1 + correctionFactor;
        outputColor[0] *= correctionFactor;
        outputColor[1] *= correctionFactor;
        outputColor[2] *= correctionFactor;
    }
    else
    {
        outputColor[0] = (255 - inputColor[0]) * correctionFactor + inputColor[0];
        outputColor[1] = (255 - inputColor[1]) * correctionFactor + inputColor[1];
        outputColor[2] = (255 - inputColor[2]) * correctionFactor + inputColor[2];
    }
}

int main(void)
{
	double correctionFactor, red, green, blue;
	int inputColor[3], outputColor[3];

	printf("Enter red: ");
	scanf("%lf", &red);
	printf("Enter green: ");
	scanf("%lf", &green);
	printf("Enter blue: ");
	scanf("%lf", &blue);
	printf("Enter correction factor\n(float, [-1, 0] for darker, [0, 1] for lighter): ");
	scanf("%lf", &correctionFactor);

	inputColor[0] = red;
	inputColor[1] = green;
	inputColor[2] = blue;

	colorCorrection(inputColor, correctionFactor, outputColor);
	
	printf("\nCorrected values:\n");
	printf("red = %d\ngreen = %d\nblue = %d\n", outputColor[0], outputColor[1], outputColor[2]);

	fflush(stdin);
	getc(stdin);
	return 0;
}
