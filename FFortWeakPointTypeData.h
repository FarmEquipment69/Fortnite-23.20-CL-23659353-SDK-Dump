// ScriptStruct /Script/FortniteGame.FortWeakPointTypeData
// Size: 0xf0
struct FFortWeakPointTypeData
{
	struct FGameplayTag WeakPointsTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FScalableFloat StartActive; // 0x8 (0x28)
	struct FScalableFloat PassDamageToOwner; // 0x30 (0x28)
	struct FScalableFloat ResetHealthOnActivation; // 0x58 (0x28)
	struct FScalableFloat AllowWeakPointDestruction; // 0x80 (0x28)
	struct FScalableFloat DestroyedWeakPointAutoRegenerationTime; // 0xa8 (0x28)
	class UClass* PassthroughDamageGEClass; // 0xd0 (0x8)
	struct FGameplayTag SetByCallerDamageTag; // 0xd8 (0x4)
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct TArray<class AFortWeakPoint*> WeakPointActors; // 0xe0 (0x10)
};

