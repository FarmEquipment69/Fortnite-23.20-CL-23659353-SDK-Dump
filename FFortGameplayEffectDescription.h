// ScriptStruct /Script/FortniteGame.FortGameplayEffectDescription
// Size: 0x50
struct FFortGameplayEffectDescription
{
	struct FText EffectDisplayName; // 0x0 (0x18)
	struct FText EffectWrittenDescription; // 0x18 (0x18)
	struct TArray<struct FFortGameplayEffectModifierDescription> ModDescriptions; // 0x30 (0x10)
	struct TArray<struct FText> GrantedTagDescriptions; // 0x40 (0x10)
};

