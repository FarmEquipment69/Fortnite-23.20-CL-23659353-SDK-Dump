// ScriptStruct /Script/FortniteGame.QuickHealPriority
// Size: 0x28
struct FQuickHealPriority
{
	struct FGameplayTag PriorityGroupTag; // 0x0 (0x4)
	float MinHealth; // 0x4 (0x4)
	float MaxHealth; // 0x8 (0x4)
	float MinShields; // 0xc (0x4)
	float MaxShields; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<struct FGameplayTag> GameplayTags; // 0x18 (0x10)
};

