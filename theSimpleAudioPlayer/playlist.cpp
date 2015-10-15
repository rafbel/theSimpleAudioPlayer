#include "playlist.h"



vector <string> &Playlist::readPlaylist(string fileName)
{
	ifstream in(fileName.c_str());
	string musicPath;

	playlistFiles.clear(); //clears vector 

	while (1)
	{
		if(!(in >> musicPath))
				break;

		playlistFiles.push_back(musicPath);
		
	}

	return playlistFiles;

}

//vector <string> &Playlist::getPlaylistVector() { return playlistFiles; }