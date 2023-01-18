// ScriptStruct /Script/GameplayAbilities.GameplayAbilitySpecDef
// Size: 0x98
struct FGameplayAbilitySpecDef
{
	class UClass* Ability; // 0x0 (0x8)
	struct FScalableFloat LevelScalableFloat; // 0x8 (0x28)
	int InputID; // 0x30 (0x4)
	enum EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	struct TWeakObjectPtr<class UObject> SourceObject; // 0x38 (0x8)
	unsigned char unreflected_40[0x50]; // 0x40 (0x50) 
	struct FGameplayAbilitySpecHandle AssignedHandle; // 0x90 (0x4)
	unsigned char padding_94[0x4]; // 0x94 (0x4)
};

