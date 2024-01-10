#pragma once
#include "Song.h"

class Hiphop : public Song {
private:
    string language;
    bool is_by_black;
    bool is_by_woman;
    bool is_very_fast;
    int swear_words;
public:
    Hiphop();
    ~Hiphop();

    string get_language();
    bool get_is_by_black();
    bool get_is_by_woman();
    bool get_is_very_fast();
    int get_swear_words();

    void set_language(string);
    void set_is_by_black(bool);
    void set_is_by_woman(bool);
    void set_is_very_fast(bool);
    void set_swear_words(int);

	void Print();
	string to_String();
	void Fill();
	void Load(vector<string>);
	// void edit_Menu();
}