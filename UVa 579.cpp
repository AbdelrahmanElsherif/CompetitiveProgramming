#include <iostream>
int main()
{
	double h, m; char colon; double angle, ha, ma;
	while (std::cin>>h>>colon>>m, h||m){
		ma = m * 6;
		ha = h * 30 + (m / 60) * 30;
		angle = ha - ma;
		if (angle < 0)angle *= -1;
		if (angle > 180)angle = 360-angle;
		printf("%.3f\n", angle);
	}
}
