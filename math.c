/*
 *  math.c
 *  UseC2
 *
 *  Created by 黃 源鱗 on 2010/12/7.
 *  Copyright 2010 奇想. All rights reserved.
 *
 */

#include "math.h"
#include <stdio.h>
#include <stdlib.h>

int myPow2(int num) { 
    return num*num; 
} 

int myPow(int n, int p) { 
    int r = 1; 
    int i;
    for(i = 0; i < p; i++) {
        r *= n;
    }
	
    return r; 
}

double* transfer(double*  d) 
{
	printf(" transfer \n"  ) ;
	double abc[2] = {121.3 , 25.21} ;
	double *a = malloc(2 * sizeof(double) ) ;
	
	int i ;
	for ( i=0 ; i<2 ; i++) {
		printf(" %d , %f \n" , i , d[i]) ;
		
		a[i] =  d[i] * 2 ;
	}
	
	printf("double * 2 \n");
	for ( i=0 ; i<2 ; i++) {
		printf(" %d , %f \n" , i , a[i]) ;
		
		
	}
	
	return a ;
}

int* createiArray(int m) {
	int *a = malloc( m * sizeof(int)) ;
	
	int i ;
	for (i=0; i<m; i++) {
		a[i]= 0;
	}
	
	return a;
}
double* createArray(int m) {
	double *a = malloc( m * sizeof(double)) ;
	
	int i ;
	for (i=0; i<m; i++) {
		a[i]= 0;
	}
	
	return a;
}
double* createArray2(int m) {
	double *a = calloc(m, sizeof(double) ) ;
	
	int i ;
	for (i=0; i<m; i++) {
		a[i]= 0;
	}
	
	return a;
}
void deleteArray(double* arr)
{
	free(arr) ;
}