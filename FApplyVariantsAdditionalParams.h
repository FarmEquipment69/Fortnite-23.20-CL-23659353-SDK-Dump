// ScriptStruct /Script/FortniteGame.ApplyVariantsAdditionalParams
// Size: 0x1e0
struct FApplyVariantsAdditionalParams
{
	struct TWeakObjectPtr<class AFortPlayerPawn> WeakPlayerPawn; // 0x0 (0x8)
	struct TArray<class UActorComponent*> AdditionalVariantComponents; // 0x8 (0x10)
	bool bApplyToAdditionalVariantComponentsOnly; // 0x18 (0x1)
	bool bDeriveMIDNameFromParent; // 0x19 (0x1)
	bool bShouldResetOverrideMaterialsOnMeshSwap; // 0x1a (0x1)
	bool bApplySoundEffectVariants; // 0x1b (0x1)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct TArray<struct FCosmeticVariantInfo*> PreviouslyActiveVariants; // 0x20 (0x10)
	unsigned char unreflected_30[0x180]; // 0x30 (0x180) 
	bool bBackpackReliesOnVariantsFromCID; // 0x1b0 (0x1)
	bool bGliderReliesOnVariantsFromCID; // 0x1b1 (0x1)
	bool bForbidParticleSwapping; // 0x1b2 (0x1)
	unsigned char unreflected_1b3[0xd]; // 0x1b3 (0xd) 
	struct FGameplayTagContainer MetaTags; // 0x1c0 (0x20)
};

