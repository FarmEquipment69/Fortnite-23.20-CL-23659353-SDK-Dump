// ScriptStruct /Script/FortniteGame.MashAreaSpecialActorData
// Size: 0x1c0
struct FMashAreaSpecialActorData
{
	struct FGameplayTag SpecialActorTag; // 0x0 (0x4)
	unsigned char unreflected_4[0xc]; // 0x4 (0xc) 
	struct FSlateBrush SpecialActorMinimapIconBrush; // 0x10 (0xc0)
	struct FVector2D SpecialActorMinimapIconScale; // 0xd0 (0x10)
	struct FSlateBrush SpecialActorCompassIconBrush; // 0xe0 (0xc0)
	struct FVector2D SpecialActorCompassIconScale; // 0x1a0 (0x10)
	bool bShouldDrawCompassIcon; // 0x1b0 (0x1)
	unsigned char padding_1b1[0xf]; // 0x1b1 (0xf)
};

