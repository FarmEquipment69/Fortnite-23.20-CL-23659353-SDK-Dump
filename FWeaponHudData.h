// ScriptStruct /Script/FortniteGame.WeaponHudData
// Size: 0x58
struct FWeaponHudData
{
	struct FName KeyActionName; // 0x0 (0x4)
	struct FName GamepadActionName; // 0x4 (0x4)
	struct FText ActionDescription; // 0x8 (0x18)
	bool bVisible; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct FGameplayTagContainer DisabledTags; // 0x28 (0x20)
	struct FString KeyActionId; // 0x48 (0x10)
};

