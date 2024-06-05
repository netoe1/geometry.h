#ifndef GEOMETRY2D_C
#define GEOMETRY2D_C
#include "../structs.c"
#include <stdlib.h>



float getDistanceTwoPoints_2D(Point2D p1,Point2D p2){
	if(p1 != NULL && p2 != NULL){
		return sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y)));
	}
}

float vectorNorm_2D(Vector2D vector){
	if(vector != NULL){
		return sqrt(pow(vector.x,2) + pow(vector.y,2));
	}
}

float getDistanceTwoVectors_2D(Vector2D e1,Vector2D e2){
	if(e1 != NULL && e2 != NULL){
		float d1 = vectorNorm_2D(e1);
		float d2 = vectorNorm_2D(e2);
		return abs(d1 - d2) ;
	}
}

#endif