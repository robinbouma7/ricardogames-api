#pragma once
#include <string>

//the current version of the ricardogames api
#define RGAPI_VERSION "0.0.1"

//load the api
extern void loadrgapi();

//get the api version
extern void getapiversion();

//get the id of a player with a specific name
//name: name of the player to search
extern int getidfromname(std::string name);

//get the id of a player with a specific name
//name: name of the player to search
extern int getidfromname(const char* name);

//get the username of a player with a specific id
extern std::string getnamefromid(int id);

//get player name given by launcer
//just pass trough __argc and __argv
extern std::string getplayername();

//get current session given by launcher
//just pass trough __argc and __argv
extern std::string getplayersession();