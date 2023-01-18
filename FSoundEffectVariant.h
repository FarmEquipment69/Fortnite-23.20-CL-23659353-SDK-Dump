// ScriptStruct /Script/FortniteGame.SoundEffectVariant
// Size: 0x48
struct FSoundEffectVariant
{
	struct TArray<struct TWeakObjectPtr<class USoundBase>> SoundsToModify; // 0x0 (0x10)
	struct TArray<struct FName> ComponentsToApplyTo; // 0x10 (0x10)
	struct TWeakObjectPtr<class USoundEffectSourcePresetChain> EffectChain; // 0x20 (0x28)
};

