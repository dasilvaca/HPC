#include<iostream>
#include<cstdlib>
using namespace std;


int min_of_rand(int* arr, int size){
    int min = -((1<<31) + 1);
    for(int i = 0; i < size; i ++) if (arr[i] < min) min = arr[i];
    return min;
}

int* print_some_odds_smaller_than_800(int* arr, int size){
    cout<<"First odds smaller than 800 in the array are: ";
    for(int i = 0; i < size; i++){
        if (arr[i] < 800) cout<<arr[i]<<" ";
	else {
	    cout<<"\n";
	    break;
	}
    }
    return arr;
}

int main(){
    srand(time(0));
    int randints[300];
    for (int i = 0; i < 300; i++) randints[i] = rand() % 901;
    cout<<"The random elements are: ";
    for (int i = 0; i < 300; i++) cout<<randints[i]<<' ';
    cout<<'\n'<<"The minimum element is: "<<min_of_rand(randints, 300)<<"\n";
    print_some_odds_smaller_than_800(randints, 300);
    return 0;
    
    

}
