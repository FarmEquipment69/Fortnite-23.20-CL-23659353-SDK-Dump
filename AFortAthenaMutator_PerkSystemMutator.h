// Class /Script/FortniteGame.FortAthenaMutator_PerkSystemMutator
// Size: 0x588
class AFortAthenaMutator_PerkSystemMutator : public AFortAthenaMutator
{
	int MinPerksToUnlock; // 0x330 (0x4)
	int MaxPerksToUnlock; // 0x334 (0x4)
	unsigned char unreflected_338[0x88]; // 0x338 (0x88) 
	struct FPerkMutatorData MutatorData; // 0x3c0 (0x108)
	struct FScalableFloat MaxTimeAtPerkScreen; // 0x4c8 (0x28)
	struct FScalableFloat MaxTimeToBlockRespawn; // 0x4f0 (0x28)
	bool bDelayedPerkSelection; // 0x518 (0x1)
	unsigned char unreflected_519[0x7]; // 0x519 (0x7) 
	struct TArray<class UFortSpyTechItemDefinition*> DefaultPerks; // 0x520 (0x10)
	unsigned char unreflected_530[0x8]; // 0x530 (0x8) 
	struct TMap<struct TWeakObjectPtr<class AFortPlayerControllerAthena>, struct FTimerHandle*> SafetyTimerMap; // 0x538 (0x50)
};

