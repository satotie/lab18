#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1,Rect *r2){
    double dx = (*r2).x-(*r1).x;
	double dy = (*r2).y-(*r1).y;
	if(dx > -(r2->w) && dx < r1->w && dy < r2->h && dy > -(r1->h)){
			double w_over = min(r2->x+r2->w, r1->x+r1->w)-max(r2->x, r1->x);
			double h_over = min(r2->y,r1->y)-max(r2->y-r2->h, r1->y-r1->h);
			return w_over*h_over;
		}
		else return 0;

}