// Class /Script/FortniteGame.FortCosmeticLockerItem
// Size: 0x148
class UFortCosmeticLockerItem : public UFortProfileItem
{
	struct FString lockername; // 0xc0 (0x10)
	struct FString bannericontemplate; // 0xd0 (0x10)
	struct FString bannercolortemplate; // 0xe0 (0x10)
	int usecount; // 0xf0 (0x4)
	unsigned char unreflected_f4[0x4]; // 0xf4 (0x4) 
	struct FFortCosmeticLockerSlotData lockerslotsdata; // 0xf8 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortCosmeticLockerItem.IsValidLockerName (Underlying native function: IsValidLockerName 0x8761720)
	static bool IsValidLockerName(class UWorld*& ContextWorld, struct FString& Candidate); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)
};

