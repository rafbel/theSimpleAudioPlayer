#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class Playlist
{
private:
	//attributes
	vector <string> playlistFiles;

public:
	//methods
	void createPlaylist();
	vector <string> &readPlaylist(string);
	//vector <string> &getPlaylistVector();
	void addToPlaylist();
	void removeFromPlaylist();


};


#endif