// ScriptStruct /Script/FortniteGame.EmoteActionBinding
// Size: 0x20
struct FEmoteActionBinding
{
	struct FPrimaryAssetId* EmoteId; // 0x0 (0x8)
	bool bOnlyDisplayForDiscoverability; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	struct FName ActionName; // 0xc (0x4)
	struct TArray<struct FInputActionKeyMapping> Input; // 0x10 (0x10)
};

