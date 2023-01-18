// ScriptStruct /Script/FortniteGame.ActiveGameplayModifierArray
// Size: 0x130
struct FActiveGameplayModifierArray : FFastArraySerializer
{
	struct TArray<struct FActiveGameplayModifier> Items; // 0x108 (0x10)
	struct TArray<struct FActiveGameplayModifier> DeferredGameplayModifiers; // 0x118 (0x10)
	int ModifierHandleGenerator; // 0x128 (0x4)
	bool bSupportRuntimeModifierShutdown; // 0x12c (0x1)
	unsigned char padding_12d[0x3]; // 0x12d (0x3)
};

