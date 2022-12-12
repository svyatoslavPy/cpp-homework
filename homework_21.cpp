    #include <iostream>
    using namespace std;

    int main() {
        
        char* stroka = new char[200];


        for (int i = 0; i < 200; i++) {
            stroka[i] = ' ';
        }

        gets_s(stroka, 199);
        char vowels[12] = {'e', 'y', 'u', 'i', 'o', 'a', 'E', 'Y', 'U', 'I', 'O', 'A'};
        char consonants[40] = { 'q', 'w', 'r', 't', 'p', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Q', 'W', 'R', 'T', 'P', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M' };
        char punctuation[10] = {'.', ',', ';', ':', '!', '?', '-', '(', ')', '"'};
        char numbers[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        int vowelscount = 0, consonantscount = 0, punctuationcount = 0, numberscount = 0, wordscount = 0, anothercount = 0, allsymbols = 0;


        for ( ; allsymbols < 200; allsymbols++) {
        if (allsymbols != 199) {
            if (stroka[allsymbols + 1] == ' ' && stroka[allsymbols] != ' ') {
                wordscount++;
            }
        }


        for (int j = 0; j < 12; j++) {
            if (stroka[allsymbols] == vowels[j]) {
                vowelscount++;
            }
        }


        for (int j = 0; j < 40; j++) {
            if (stroka[allsymbols] == consonants[j]) {
                consonantscount++;
            }
        }


        for (int j = 0; j < 10; j++) {
            if (stroka[allsymbols] == punctuation[j]) {
                punctuationcount++;
            }
        }


        for (int j = 0; j < 10; j++) {
            if (stroka[allsymbols] == numbers[j]) {
                numberscount++;
            }
        }
    }
        
        resultcount = allsymbols - vowelscount - consonantscount - punctuationcount - numberscount;
        cout << "All simvol:  " << allsymbols;
        cout << "of them: " << wordscount;
        cout << "Glazgount: " << vowelscount;
        cout << "Conso: " << consonantscount;
        cout << "Punctuation simvol: " << punctuationcount;
        cout << "Numbers: " << punctuationcount;
        cout << "Another simvol:  " << resultcount;
    }
