#include <iostream>
#include <string>
using namespace std;


struct Film {
    string Name;
    int YearOfPresent;
    float AverageRatings;
    string Producer;
    string WrittenBy;
    string Genre;
    string Comments;
};


void FillArray(Film film) {
    cout << "Name film:";
    cin >> film.Name;
    
    cout << "Year of film:";
    cin >> film.YearOfPresent;
    
    cout << "Average ratings of the film:";
    cin >> film.AverageRatings;
    
    cout << "Producer of the film:";
    cin >> film.Producer;
    
    cout << "Written by the film:";
    cin >> film.WrittenBy;
    
    cout << "Genre of the film:";
    cin >> film.Genre;
    
    cout << "Comments of the film:";
    cin >> film.Comments;
}


void ShowArray(Film film) {
    cout << "Name film: " << film.Name;
    cout << "Year of present the film: " << film.YearOfPresent;
    cout << "Average ratings of the film: " << film.AverageRatings;
    cout << "Producer of the film: " << film.Producer;
    cout << "Written by the film: " << film.WrittenBy;
    cout << "Genre of the film: " << film.Genre;
    cout << "Comments of the film: " << film.Comments;
}


int main() {
    const int size = 10;
    Film array[size];


    for (int i = 0; i < size; i++) {
        FillArray(array[i]);
    }


    for (int i = 0; i < size; i++) {
        ShowArray(array[i]);
    }
}
