// Class /Script/FortniteGame.FortAdvancedMeleeComponent
// Size: 0x160
class UFortAdvancedMeleeComponent : public UActorComponent
{
	float AttackRangePrimary; // 0xa0 (0x4)
	float AttackRangeJab; // 0xa4 (0x4)
	float AttackRangeSpin; // 0xa8 (0x4)
	float AttackRangeSecondary; // 0xac (0x4)
	struct TWeakObjectPtr<class UClass> PrimarySwing; // 0xb0 (0x28)
	struct TWeakObjectPtr<class UClass> JabSwing; // 0xd8 (0x28)
	struct TWeakObjectPtr<class UClass> SpinSwing; // 0x100 (0x28)
	struct TWeakObjectPtr<class UClass> SecondarySwing; // 0x128 (0x28)
	struct TArray<struct FGameplayAbilitySpecHandle> FightListHandles; // 0x150 (0x10)
};

