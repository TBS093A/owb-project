#pragma once
#pragma comment(lib, "Winmm.lib")

bool isPlay = false;

[DllImport("winmm.dll")]
private static extern long mciSendString(string strCommand, StringBuilder strReturn, int iReturnLength, IntPtr hwndCallback);
[DllImport("Winmm.dll")]
private static extern long PlaySound(byte[] data, IntPtr hMod, UInt32 dwFlags);

void PlayAudio() {
	if (!isPlay) {
		PlaySound(TEXT("08_DRAGON_AGE.mp3"), NULL, SND_FILENAME);
	}
	else {
		PlaySound(NULL, 0, 0);
	}
}