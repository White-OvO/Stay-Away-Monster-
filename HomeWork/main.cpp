#include <iostream> 
 #include<iomanip> 
 #include<cmath> 


using namespace std; 


int main() { 
/* task : You are creating a video game and need to tell how far
 monsters are away from the player. This way the program knows if 
 the player is close enough to attack a monster, or if the player
  gets too close to a monster that auto attacks. 
*/



// step 1 : Read the (x, y) coordinates (as separate inputs for x and y) of the player into two integer variables. 

int x = 0; 
int y = 0; 

cout << "Player x: "; 
cin >> x ; 

cout << "Player y: "; 
cin >> y;


// step 2 : ead the (x, y) coordinates (as separate inputs for x and y) of the monster into two integer variables.

 
int x2 = 0;
int y2 = 0; 

const int totalWidth = 22;
cout << "\nMonster x: " ; 
cin >> x2; 

cout << "Monster y: "  ; 
cin >> y2; 


//step 3 : Compute the distance along the x-axis and y-axis and save them into integer variables (see below for formulas). 


int xAxis = abs(x - x2) ; 
int yAxis = abs(y - y2); 

int manhattanDistance = (xAxis) + (yAxis);

double eucDist = sqrt (pow(xAxis , 2) + pow(yAxis, 2));


//step 4 : For the first line, after the label is output for which distance is being 
//output use a width to make the rest of the line total out to 22 spaces 
//in the entire line. In this width output the value of the distance. Fill the blank spaces of the width with `’.``.


cout << setprecision(2); 
cout << "\nDistances from Player to Monster:" << endl; 


cout << "X-Axis:" << setw(totalWidth - 7) << setfill('.') << xAxis << endl; 
cout <<"p" << string(xAxis,'-') << "m" << endl;


cout << "\nY-Axis:" << setw(totalWidth - 7) << setfill ('.') << yAxis<<endl;
cout <<"p"  << string (yAxis,'-') << "m" << endl; 


cout << "\nManhattan:" << setw(totalWidth - 10) << setfill('.')
 << manhattanDistance  << endl; 
cout << "p" << string (manhattanDistance,'-') << "m" <<endl;

cout <<"\nEuclidean:" << setw(totalWidth -10) << setfill('.') << fixed <<  eucDist << endl;
 
cout <<"p" << string (eucDist,'-') << "m" << endl; 



    return 0;
}