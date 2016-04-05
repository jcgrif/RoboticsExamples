
typedef struct pt  // typedef creates  a type point that we can instantiate just like any other type
{
	int x,y;
} point;
point firstpoint, secondpoint;   // Creates space in memory for 2 points (structs of point)

point * prnt(point *pt)  // Call a function with a pointer at the point
{
	char s[100];
	sprintf(s,"from func x = %i, y = %i ",pt->x,pt->y);
	writeDebugStreamLine(s);
	return(*pt);   // Returns a point to the point (no reason right now)
}

task main()
{
	string p;
	point t;  //Declare/Instantiates another point
	int i,j;
	int *ip;  //Declare an integer pointer  (this isn't an Int, its a pointer to an int)

	t.x = 1;   //Assign our point t some values
	t.y=100;

	firstpoint.x =50;  //Assign our point firstpoint some values
	firstpoint.y=77;

	prnt(firstpoint);   // call prnt function to print first point
	//sprintf(p,"x = %i, y = %i",firstpoint.x,firstpoint.y);
	//writeDebugStreamLine(p);

	//sprintf(p,"x = %i, y = %i",t.x,t.y);
	//writeDebugStreamLine(p);

	prnt(t);  // call prnt function to print first point

	i = 5;
	ip = &j;  //Assign the address of j to Int Pointer ip

	*ip=10;   //Assign 10 to the location where IP points

	sprintf(p,"pointer stuff = %i,%i", i,j);
	writeDebugStreamLine(p);

}
