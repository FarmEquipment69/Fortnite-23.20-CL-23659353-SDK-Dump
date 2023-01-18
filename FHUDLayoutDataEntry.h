// ScriptStruct /Script/FortniteGame.HUDLayoutDataEntry
// Size: 0x1a0
struct FHUDLayoutDataEntry
{
	struct FGameplayTag VisualType; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FAnchorData AnchroData; // 0x8 (0x40)
	int ZOrder; // 0x48 (0x4)
	enum EBacchusHUDStateType BuildVisibility; // 0x4c (0x1)
	enum EBacchusHUDStateType CombatVisibility; // 0x4d (0x1)
	enum EBacchusHUDStateType EditVisibility; // 0x4e (0x1)
	enum EBacchusHUDStateType CreativeVisibility; // 0x4f (0x1)
	float Property0; // 0x50 (0x4)
	float Property1; // 0x54 (0x4)
	float Property2; // 0x58 (0x4)
	float Property3; // 0x5c (0x4)
	struct TMap<struct FName, float> FloatProperties; // 0x60 (0x50)
	unsigned char padding_b0[0xf0]; // 0xb0 (0xf0)
};

