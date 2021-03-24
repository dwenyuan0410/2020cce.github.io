#include <stdio.h>
struct DATA{ ///宣告
	float x, y, z;
}  point1;
///point1 是變數，長得像DATA
///DATA裡面有 x, y, z
int main()
{
	point1.x=3;///使用(裡面的值)
	point1.y=5;///使用
	point1.z=7;///使用
	pointf("%f %f %f\n", point1.x, point1.y, point1.z);
}
