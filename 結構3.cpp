#include <stdio.h>
struct DATA { ///宣告
	float x, y, z;///定義裡面有 x, y, z
} point1 ;
struct DATA points[5];
///point1 是變數，長得像DATA
///DATA裡面有 x, y, z
int main()
{
	///int b;
	///int a[5];
	for(int i=0; i<5; i++){
		points[i].x = i*10;
		points[i].y = 20;
		points[i].z = 0;
		pointf("%f %f %f\n", points[i].x, points[i].y, points[i].z);
	}
}
