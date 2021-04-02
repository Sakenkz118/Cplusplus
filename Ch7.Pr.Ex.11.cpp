#include <iostream>
#include <iomanip>

using namespace std;

void maximumVolume (double& y, double& z, double& x, double& maxV, double areaSize);

int main ()
{
    double area;
    double length, width = 0.6, sqSize = 0;
    double volume;

    cout << "Please enter the area size of a flat cardboard (in sq.inches): ";
    cin >> area;
    cout << endl;

    length = (area / (width + 2 * sqSize)) - 2 * sqSize;
    volume = length * width * sqSize;

    maximumVolume (length, width, sqSize, volume, area);

    cout << fixed << showpoint << setprecision(3);

    cout << "Maximum volume: " << volume << endl;
    cout << "Length = " << length << endl;
    cout << "Width = " << width << endl;
    cout << "Square length = " << sqSize << endl;

    return 0;
}

void maximumVolume (double& y, double& z, double& x, double& maxV, double areaSize)
{
    double vol;
    double yMax;
    double zMax;
    double xMax;

    maxV = 0;
 while (((y + 2 * x) * (z + 2 * x)) <= areaSize)
   {
      while ((y - 2 * x) >= 0 && (z - 2 * x) >= 0)
      {
         vol = y * z * x;
         if (maxV < vol){
              maxV = vol;
              yMax = y;
              zMax = z;
              xMax = x;
              }
  y = (areaSize / (z + 2 * x)) - 2 * x;
  z = z + 0.0404;
  cout << vol << endl;
  x = x + 0.011;
       }
    }
    y = yMax;
    z = zMax;
    x = xMax;
}

