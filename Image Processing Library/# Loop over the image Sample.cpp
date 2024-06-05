/**
 # Sample code to loop over the image and apply invert filter
 # Extension must be ( .png , .tga, .bmp, .jpg )
**/

#include <bits/stdc++.h>
#include "Image_Class.h"
using namespace std;

int main()
{
    /// Open the image
    Image My_image("Original file name.jpg");

    for (int i = 0; i < My_image.width; i++)
    {
        for (int j = 0; j < My_image.height; j++)
        {
            for (int rgb = 0; rgb < 3; rgb++)
            {
                /// This apply invert filter
                My_image(i, j, rgb) = 255 - My_image(i, j, rgb);
            }
        }
    }

    /// Save the image
    My_image.saveImage("Save file name.png");
    return 0;
}
