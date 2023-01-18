// ScriptStruct /Script/FortniteGame.FortMediaRegionLockExt
// Size: 0xa8
struct FFortMediaRegionLockExt
{
	bool AllowOnError; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString Type; // 0x8 (0x10)
	struct TArray<struct FString> AllowList; // 0x18 (0x10)
	struct TArray<struct FString> DenyList; // 0x28 (0x10)
	struct TMap<struct FString, struct FString> Limits; // 0x38 (0x50)
	struct FString ContentId; // 0x88 (0x10)
	unsigned char padding_98[0x10]; // 0x98 (0x10)
};

