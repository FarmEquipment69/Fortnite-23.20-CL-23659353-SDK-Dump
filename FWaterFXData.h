// ScriptStruct /Script/FortniteGame.WaterFXData
// Size: 0x50
struct FWaterFXData
{
	bool bLinkToPontoonBySocket; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName PontoonSocketName; // 0x4 (0x4)
	struct FVector SpawnLocationOffset; // 0x8 (0x18)
	struct TWeakObjectPtr<class UFXSystemAsset> FXSystemAsset; // 0x20 (0x28)
	unsigned char padding_48[0x8]; // 0x48 (0x8)
};

