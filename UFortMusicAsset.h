// Class /Script/FortniteGame.FortMusicAsset
// Size: 0x80
class UFortMusicAsset : public UPrimaryDataAsset
{
	struct FFortMusicSection Sections[0x3]; // 0x30 (0x18) (ARRAY) 
	float Priority; // 0x78 (0x4)
	enum EFortMusicSectionStopBehavior StopBehavior; // 0x7c (0x1)
	bool bIsStinger; // 0x7d (0x1)
	unsigned char padding_7e[0x2]; // 0x7e (0x2)

	/* Functions */

	// Function /Script/FortniteGame.FortMusicAsset.GetMusicSection (Underlying native function: GetMusicSection 0x8e7e964)
	struct FFortMusicSection GetMusicSection(struct TEnumAsByte<EFortMusicSectionType>& Section); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

