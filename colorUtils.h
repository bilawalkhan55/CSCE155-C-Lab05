/**
 * A collection of utility functions to manipualte RGB
 * values of an image
 */

/**
 * Scales the given rgb integer component (on the
 * scale [0, 255]) to a floating point number on the
 * scale [0, 1].
 *
 * Note: this function is only included to demonstrate
 * how to unit test floating point values.  See the
 * colorUtilsTester.c for more.
 */
double rgbIntToFloat(int c);

/**
 * Returns the maximum value among the three
 * given integer values.
 */
int max(int x, int y, int z);

/**
 * Returns a gray-scaled RGB value of the three
 * given RGB values using the average technique.
 *
 */
int toGrayScaleAverage(int r, int g, int b);

// Prototype of function min(); 

int min(int a,int b ,int c);

// Prototype of function toGrayScaleLightness(); 

float toGrayScaleLightness(int red, int green, int blue);

// Prototype of function toGrayScaleLuminosity();

float toGrayScaleLuminosity(int red,int green,int blue);

// Prototype of toSepiaRed(); function 

float toSepiaRed(int red,int green,int blue);

// Prototype of toSepiaGreen(); function 

float toSepiaGreen(int red,int green,int blue);

// Prototype of toSepiaBlue(); function

float toSepiaBlue(int red,int green,int blue);