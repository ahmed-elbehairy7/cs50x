#include <math.h>
#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            RGBTRIPLE *pixel = &image[i][j];

            BYTE final = round((pixel->rgbtGreen + pixel->rgbtBlue + pixel->rgbtRed) / 3.0);

            pixel->rgbtGreen = final;
            pixel->rgbtRed = final;
            pixel->rgbtBlue = final;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < floor(width / 2); j++)
        {

            RGBTRIPLE *ap = &image[i][j];
            RGBTRIPLE *bp = &image[i][width - j - 1];

            BYTE apRed = ap->rgbtRed;
            BYTE apGreen = ap->rgbtGreen;
            BYTE apBlue = ap->rgbtBlue;

            ap->rgbtRed = bp->rgbtRed;
            ap->rgbtGreen = bp->rgbtGreen;
            ap->rgbtBlue = bp->rgbtBlue;

            bp->rgbtRed = apRed;
            bp->rgbtGreen = apGreen;
            bp->rgbtBlue = apBlue;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{

    RGBTRIPLE copy[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            copy[i][j] = image[i][j];
            RGBTRIPLE *pixel = &copy[i][j];

            int totalRed = 0;
            int totalGreen = 0;
            int totalBlue = 0;
            float pixelsCount = 0.00;

            for (int k = -1; k < 2; k++)
            {
                int newi = k + i;

                if (newi < 0 || newi > height - 1)
                {
                    continue;
                }

                for (int h = -1; h < 2; h++)
                {

                    int newj = h + j;

                    if (newj < 0 || newj > width - 1)
                    {
                        continue;
                    }

                    totalRed += image[newi][newj].rgbtRed;
                    totalGreen += image[newi][newj].rgbtGreen;
                    totalBlue += image[newi][newj].rgbtBlue;
                    pixelsCount++;
                }
            }

            pixel->rgbtRed = round(totalRed / pixelsCount);
            pixel->rgbtGreen = round(totalGreen / pixelsCount);
            pixel->rgbtBlue = round(totalBlue / pixelsCount);
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = copy[i][j];
        }
    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    
    return;
}
