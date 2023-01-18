// Class /Script/FortniteUI.FortUIDirector
// Size: 0xa0
class UFortUIDirector : public UFortUIDirectorSubsystemBase
{
	struct TArray<struct FLoadedUIManagerEntry> LoadedManagerClassesBySubgame; // 0x68 (0x10)
	class UFortUIManager* CurrentManager; // 0x78 (0x8)
	unsigned char padding_80[0x20]; // 0x80 (0x20)
};

