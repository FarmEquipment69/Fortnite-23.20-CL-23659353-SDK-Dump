// Class /Script/FortniteGame.FortFoleyHitContext
// Size: 0x60
class UFortFoleyHitContext : public USoundLibraryContext
{
	struct TEnumAsByte<EFortFoleyHitAudioType> HitType; // 0x58 (0x1)
	bool bIs3D; // 0x59 (0x1)
	bool bIsReceiver; // 0x5a (0x1)
	unsigned char padding_5b[0x5]; // 0x5b (0x5)
};

