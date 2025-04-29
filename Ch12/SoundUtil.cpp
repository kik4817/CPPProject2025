#include "SoundUtil.h"

void SoundUtil::PlayTitleSound(LPCWSTR filename)
{
	PlaySound(filename, NULL, SND_ASYNC);
}

void SoundUtil::PlayBGM(LPCWSTR filename)
{
	PlaySound(filename, NULL, SND_SYNC);
}
