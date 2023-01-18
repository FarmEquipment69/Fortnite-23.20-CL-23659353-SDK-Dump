// Class /Script/FortniteUI.AthenaCollectionListEntryCharacter
// Size: 0x14d0
class UAthenaCollectionListEntryCharacter : public UAthenaCollectionListEntry
{
	class UImage* ImageBackground; // 0x14b8 (0x8)
	struct FName ParamNameItemIcon; // 0x14c0 (0x4)
	struct FName ParamNameIsDiscovered; // 0x14c4 (0x4)
	struct FName ParamNameIsComplete; // 0x14c8 (0x4)
	unsigned char padding_14cc[0x4]; // 0x14cc (0x4)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCollectionListEntryCharacter.BP_OnLocationsFoundSet (Has no native function)
	void BPOnLocationsFoundSet(int& NumFound, int& NumAvailable, bool& bAllFound); // (Event | Protected | BlueprintEvent)
};

