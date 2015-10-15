// theSimpleAudioPlayer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "playlist.h"

using namespace std;

void main(void)
{
	Playlist playlistObj;
	vector <string> musicVector;
	unsigned char key;
	bool exitProgram = false;
	string fileName;
	string musicPath;
	
	musicVector.push_back("sample_song");

	while (exitProgram == false)
	{
		cout << "Welcome to the Simple Audio Player" << endl;
		cout << "Experimental Version 1.0" << endl << endl;

		//will play sounds store on the vector
		wstring song = wstring(musicVector.at(0).begin(), musicVector.at(0).end());
		
		cout << "Now Playing: " << musicVector.at(0).c_str() << endl;
		
		PlaySound( song.c_str()  , NULL, SND_ASYNC | SND_LOOP);

		//Receives user input for next action
		cin >> key;

		switch (key)
		{
		case 'q':
		case 'Q': //exits program
			exitProgram = true;
			break;
		
		case 'r':
		case 'R': //reads playlist file

			cout << "Enter playlist file name" << endl;
			cin >> fileName;
			musicVector =   playlistObj.readPlaylist(fileName );
			break;
		
		default:
			cout << "Please enter a valid option" << endl;
			break;

		}
		system("CLS");
	}

}

/*Note: Music must be placed in the same folder as source file when compiling or same folder as .exe when running
		Music must be in .WAV format

		Graphic interface to be added in the far future
*/