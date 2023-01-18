// Class /Script/Engine.SoundNodeRandom
// Size: 0x78
class USoundNodeRandom : public USoundNode
{
	struct TArray<float> Weights; // 0x48 (0x10)
	struct TArray<bool> HasBeenUsed; // 0x58 (0x10)
	int NumRandomUsed; // 0x68 (0x4)
	int PreselectAtLevelLoad; // 0x6c (0x4)
	unsigned char bShouldExcludeFromBranchCulling; // 0x70 (0x1)
	unsigned char bSoundCueExcludedFromBranchCulling; // 0x70 (0x1)
	unsigned char bRandomizeWithoutReplacement; // 0x70 (0x1)
	unsigned char padding_71[0x7]; // 0x71 (0x7)
};

