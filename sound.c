#include <stdio.h>
#include <windows.h>
#include <MMsystem.h>

int main(){
	
	PlaySound(TEXT("Kalimba.wav"), NULL, SND_SYNC);
	return 0;
	
}
