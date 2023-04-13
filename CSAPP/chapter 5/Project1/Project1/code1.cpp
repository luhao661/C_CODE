#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

//前缀和与循环展开
#if 1
using namespace std;

void psum1(float a [],float p [],long n);
void psum2(float* a, float* p, long n);

int main()
{
	long n;
	cin >> n;

	float* data1 = new float[n+1];

	float* data2 = new float[n+1] {0};//始化列表用于new表达式中

	//for(int i=0;i<n;i++)
	//{ 
	//	cout << data2[i] << " ";
	//}

	//前缀和
#if 0
	psum1(data1,data2,n);

#endif

#if 1
	//循环展开
	psum2(data1, data2, n);

#endif

	for (int i = 1; i <= n; i++)
	{
		cout << data2[i] << " ";
	}

	return 0;
}
void psum1(float a[], float p[], long n)
{
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		p[i] = p[i-1] + a[i];
	}

	return;
}
void psum2(float* a, float* p, long n)
{
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	int i;
	for ( i = 1; i <= n-1; i+=2)
	{
		float mid_val = p[i-1] + a[i];

		p[i] = mid_val;
		p[i + 1] = a[i+1] + mid_val;
	}

	if (i <=n)
		p[i] = p[i-1] + a[i];

	return;
}
#endif