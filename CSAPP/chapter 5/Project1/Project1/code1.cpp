#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

//前缀和与循环展开
#if 0
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


//循环展开
#if 1
using namespace std;

typedef long data_t;

/* Create abstract data type for vector */
typedef struct {
	long len;
	data_t * data;
} vec_rec, * vec_ptr;

/* Create vector of specified length */
vec_ptr new_vec(long len)
{
	/* Allocate header structure */
	vec_ptr result = (vec_ptr)malloc(sizeof(vec_rec));

	data_t* data = NULL;

	if (!result)
		return NULL;/* Couldn't allocate storage */

	result->len = len;

	/* Allocate array */
	if (len > 0) {
		data = (data_t*)calloc(len, sizeof(data_t));
		if (!data) {
			free((void*)result);
			return NULL;/* Couldn't allocate storage */
		}
	}
	/* Data will either be NULL or allocated array */
	result->data = data;

	return result;
}
/*
* Retrieve vector element and store at dest.
* Return 0(out of bounds)or 1(successful)
*/
int get_vec_element(vec_ptr v, long index, data_t* dest)
{
	 if (index < 0 || index >= v->len)
		return 0;

	*dest = v->data[index];

	return 1;
}
/* Return length of vector */
long vec_length(vec_ptr v)
{
	return v->len;
}

data_t* get_vec_start(vec_ptr v)
{
	return v->data;
}

//对数组中的元素求和
#define IDENT 0
#define OP +

void combine5(vec_ptr v, data_t* dest);

int main()
{
	vec_ptr p = new_vec(10);

	p->data[0] = 1;
	p->data[0] = 2;

	long sum = 0;
	combine5(p,&sum);

	cout << sum;

	return 0;
}

//2×1循环展开
void combine5(vec_ptr v, data_t* dest)
{
	long length = vec_length(v);
	long limit = length - 1;

	data_t* data = get_vec_start(v);
	data_t acc = IDENT;
	
	long i;
	/* Combine 2 elements at a time */
	for (i = 0; i < limit; i += 2) {
		acc = (acc OP data[i])OP data[i + 1];
	}
	/* Finish any remaining elements */
	for (; i < length; i++) {
		acc = acc OP data[i];
	}

	*dest = acc;
}
#endif