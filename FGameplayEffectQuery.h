// ScriptStruct /Script/GameplayAbilities.GameplayEffectQuery
// Size: 0x150
struct FGameplayEffectQuery
{
	struct FDelegate CustomMatchDelegateBP; // 0x10 (0xc)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FGameplayTagQuery OwningTagQuery; // 0x20 (0x48)
	struct FGameplayTagQuery EffectTagQuery; // 0x68 (0x48)
	struct FGameplayTagQuery SourceTagQuery; // 0xb0 (0x48)
	struct FGameplayAttribute ModifyingAttribute; // 0xf8 (0x38)
	class UObject* EffectSource; // 0x130 (0x8)
	class UClass* EffectDefinition; // 0x138 (0x8)
	unsigned char padding_140[0x10]; // 0x140 (0x10)
};

