// ScriptStruct /Script/FortniteGame.HotfixVolumePlacement
// Size: 0x88
struct FHotfixVolumePlacement : FTableRowBase
{
	struct FString Map; // 0x8 (0x10)
	struct FVector Center; // 0x18 (0x18)
	struct FVector Extent; // 0x30 (0x18)
	struct FRotator Rotation; // 0x48 (0x18)
	struct FString GameInclude; // 0x60 (0x10)
	struct FString GameExclude; // 0x70 (0x10)
	bool bNeededOnClient; // 0x80 (0x1)
	unsigned char padding_81[0x7]; // 0x81 (0x7)
};

