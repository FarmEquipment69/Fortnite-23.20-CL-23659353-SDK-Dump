// ScriptStruct /Script/FortniteGame.FortGameplayAbilityTagChangedAction
// Size: 0x18
struct FFortGameplayAbilityTagChangedAction
{
	enum EFortGameplayAbilityTagChangedEvent Trigger; // 0x0 (0x1)
	enum EFortGameplayAbilityTagChangedActionType Action; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	struct FGameplayTag tag; // 0x4 (0x4)
	unsigned char padding_8[0x10]; // 0x8 (0x10)
};

