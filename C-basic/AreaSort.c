#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	double a;
	double b;
	double c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    int key;
    double s, temp, p, area;
    double arr[n+1];
	for(int i = 0; i<n; i++){
        p = (tr[i].a+tr[i].b+tr[i].c)/2;
        s = (p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        area = sqrt(s);
        arr[i] = area;
    }
    printf("\n \n");
    for (int i = 0; i < n - 1; i++) {  
        for (int j = 0; j < n - i - 1; j++) {  
      if (arr[j] > arr[j + 1]) {  
        temp = arr[j];  
        arr[j] = arr[j + 1];  
        arr[j + 1] = temp;
        
        temp = tr[j].a;
        tr[j].a = tr[j + 1].a;
        tr[j + 1].a = temp;
        
        temp = tr[j].b;
        tr[j].b = tr[j + 1].b;
        tr[j + 1].b = temp;
        
        temp = tr[j].c;
        tr[j].c = tr[j + 1].c;
        tr[j + 1].c = temp;
        }  
        }  
    }  
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%lf%lf%lf", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	printf("\n \n");
	for (int i = 0; i < n; i++) {
		printf("%.lf %.lf %.lf\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
