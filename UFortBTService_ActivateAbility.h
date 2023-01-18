// Class /Script/FortniteAI.FortBTService_ActivateAbility
// Size: 0xd0
class UFortBTService_ActivateAbility : public UBTService
{
	struct FGameplayTagContainer AbilityTags; // 0x70 (0x20)
	bool bRequireCanHitTargetWithAbility; // 0x90 (0x1)
	bool bPawnTargetsOnly; // 0x91 (0x1)
	unsigned char unreflected_92[0x6]; // 0x92 (0x6) 
	struct FGameplayTagContainer ProhibitedTargetTags; // 0x98 (0x20)
	bool bCanActivateWhenMoving; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x7]; // 0xb9 (0x7) 
	struct TArray<struct FDistanceToTargetComparison> DistanceChecks; // 0xc0 (0x10)
};

