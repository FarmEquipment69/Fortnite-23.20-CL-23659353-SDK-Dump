// Class /Script/Engine.SoundNodeWavePlayer
// Size: 0x80
class USoundNodeWavePlayer : public USoundNodeAssetReferencer
{
	struct TWeakObjectPtr<class USoundWave> SoundWaveAssetPtr; // 0x48 (0x28)
	class USoundWave* SoundWave; // 0x70 (0x8)
	unsigned char bLooping; // 0x78 (0x1)
	unsigned char padding_79[0x7]; // 0x79 (0x7)
};

