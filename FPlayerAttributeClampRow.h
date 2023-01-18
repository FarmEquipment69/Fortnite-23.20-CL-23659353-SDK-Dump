// ScriptStruct /Script/FortniteGame.PlayerAttributeClampRow
// Size: 0x48
struct FPlayerAttributeClampRow : FTableRowBase
{
	struct FGameplayAttribute Attribute; // 0x8 (0x38)
	enum EPlayerAttributeClampType ClampType; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	float ClampValue; // 0x44 (0x4)
};

