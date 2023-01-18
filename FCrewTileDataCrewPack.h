// ScriptStruct /Script/FortniteUI.CrewTileDataCrewPack
// Size: 0x100
struct FCrewTileDataCrewPack : FCrewTileDataBasic
{
	struct TArray<struct FString> CrewPackItems; // 0x80 (0x10)
	bool bHasNextCrewPackDetails; // 0x90 (0x1)
	unsigned char unreflected_91[0x7]; // 0x91 (0x7) 
	struct FCrewTileDetailsData NextDetails; // 0x98 (0x58)
	struct TArray<struct FString> NextCrewPackItems; // 0xf0 (0x10)
};

