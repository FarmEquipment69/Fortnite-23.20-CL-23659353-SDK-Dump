// ScriptStruct /Script/GameplayAbilities.GameplayAbilityBindInfo
// Size: 0x10
struct FGameplayAbilityBindInfo
{
	struct TEnumAsByte<EGameplayAbilityInputBinds> Command; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UClass* GameplayAbilityClass; // 0x8 (0x8)
};

