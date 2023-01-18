// ScriptStruct /Script/FortniteGame.POIRoundInfo
// Size: 0x60
struct FPOIRoundInfo
{
	struct FScalableFloat bIsPOIEnabled; // 0x0 (0x28)
	struct FGameplayTag POITag; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FText POIOverrideName; // 0x30 (0x18)
	struct TArray<struct FPlayerStartInfo> PlayerStartInfos; // 0x48 (0x10)
	class AFortPOICameraActor* CameraActor; // 0x58 (0x8)
};

