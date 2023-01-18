// Class /Script/FortniteGame.FortWeaponSettingsComponent
// Size: 0xe0
class UFortWeaponSettingsComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	bool bPickAxe; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x7]; // 0xa9 (0x7) 
	class UFortItemDefinition* ItemDefinition; // 0xb0 (0x8)
	unsigned char TeamIndex; // 0xb8 (0x1)
	unsigned char ClassSlot; // 0xb9 (0x1)
	unsigned char unreflected_ba[0x2]; // 0xba (0x2) 
	float RangeMultiplier; // 0xbc (0x4)
	float ConeAngleMultiplier; // 0xc0 (0x4)
	bool Enabled; // 0xc4 (0x1)
	unsigned char unreflected_c5[0x3]; // 0xc5 (0x3) 
	class UObject* DataSource; // 0xc8 (0x8)
	struct TArray<struct FName> OverriddenPropertyNames; // 0xd0 (0x10)
};

