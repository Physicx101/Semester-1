#include <iostream>

using namespace std;
int main(){
    int cookies, boxes, containers, extraCookies, extraBoxes;
    cout<<"Enter amount of cookies: ";
    cin>>cookies;
    boxes = cookies / 24;	// number of full boxes of cookies
    extraCookies = cookies % 24;	// number of leftover cookies after filling boxes
    containers = boxes / 75;	// number of full containers of boxes
    extraBoxes = boxes % 75;	// number of leftover boxes after filling containers
    
    if (boxes > 0){
        cout << "boxes needed = " << boxes << endl;}
    if (containers > 0){
        cout << "containers needed = " << containers << endl;}
    if (extraBoxes > 0){
        cout << "leftover boxes = " << extraBoxes << endl;}
    if (extraCookies > 0){
        cout << "leftover cookies = " << extraCookies << endl;}
}