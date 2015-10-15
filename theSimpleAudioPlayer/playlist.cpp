#include "playlist.h"



vector <string> &Playlist::readPlaylist(string fileName)
{
	ifstream in(fileName.c_str());
	string musicPath;

	playlistFiles.clear(); //clears vector 

	//while (1)
	while (getline (in,musicPath) )
	{
		//if(!(in >> musicPath))
				//break;
		cout << musicPath << endl;
		playlistFiles.push_back(musicPath);
		
	}

	return playlistFiles;

}

//vector <string> &Playlist::getPlaylistVector() { return playlistFiles; }