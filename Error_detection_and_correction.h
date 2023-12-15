#ifndef DS_PROJECT_ERROR_DETECTION_AND_CORRECTION_H
#define DS_PROJECT_ERROR_DETECTION_AND_CORRECTION_H
#include "XML_Parser.h"
bool contains_new_line(string &x);
vector<pair<pair<int, int>, string>> errors(string &xml_file);
string correct_xml(string &xml_file);
bool is_open_tag(string &s);
bool is_tag(string &s);
bool is_the_same(string &open,string &closed);
string get_open_from_closed(string &s);
string get_closed_from_open(string &s);
string add_new_lines(vector<string>&file);
bool is_closed_tag(string &s);
vector<string> values_correction(vector<string>&file);
#endif
