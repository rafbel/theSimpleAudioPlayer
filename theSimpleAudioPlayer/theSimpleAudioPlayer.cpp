// theSimpleAudioPlayer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

void main(void)
{
	cout << "Welcome to the Simple Audio Player" << endl;
	cout << "Experimental Version 1.0" << endl;
	
	PlaySound( TEXT ("Tiësto  KSHMR feat VASSY   Secrets (Original Mix).WAV") , NULL, SND_ASYNC);

    cin.get(); //waits for user input to terminate
}

//Note: Music must be placed in the same folder as source file when compiling or same folder as .exe when running