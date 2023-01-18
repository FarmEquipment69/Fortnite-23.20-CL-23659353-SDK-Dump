// Class /Script/Engine.SoundEffectSourcePresetChain
// Size: 0x40
class USoundEffectSourcePresetChain : public UObject
{
	struct TArray<struct FSourceEffectChainEntry> Chain; // 0x28 (0x10)
	unsigned char bPlayEffectChainTails; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

