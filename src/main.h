/* main.h
*  Copyright 2013 Christopher Simpkins.  MIT License
*/
#ifndef MAIN_H
#define MAIN_H

inline void show_help();
inline void show_usage();
inline void show_version();
inline std::vector<std::string> create_CL_vector(int argc, char const *arg[]);
inline std::string currentDateTime();
inline std::string currentDate();
inline std::string currentTime();
inline std::string replaceChar(std::string s, char c1, char c2);
inline std::string getPostHeader(std::string title, std::string postdate, std::string posttime);
inline int isDirPresent(std::string& dir);
inline int isFilePresent(std::string& file);
inline void pathToPosts(std::string& path_to_posts);
inline void pathToPublic(std::string& path_to_public);
inline void pathToDir(std::string& directory_string, std::string& path_to_dir);

#endif