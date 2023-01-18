// Class /Script/DynamicUI.DynamicUIScene
// Size: 0x68
class UDynamicUIScene : public UDataAsset
{
	unsigned char LayerID; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<struct FDynamicUIAllowed> Allowed; // 0x38 (0x10)
	struct TArray<class UDynamicUIUnallowBase*> Unallow; // 0x48 (0x10)
	struct TArray<struct FDynamicUIPreload> Preload; // 0x58 (0x10)
};

