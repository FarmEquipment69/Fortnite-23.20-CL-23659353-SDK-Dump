// Class /Script/FortniteGame.FortWorkerType
// Size: 0x4b8
class UFortWorkerType : public UFortCharacterType
{
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x420 (0x1)
	bool bIsManager; // 0x421 (0x1)
	unsigned char unreflected_422[0x6]; // 0x422 (0x6) 
	struct TWeakObjectPtr<class UFortItemIconDefinition> FixedPortrait; // 0x428 (0x28)
	struct FGameplayTagContainer ManagerSynergyTag; // 0x450 (0x20)
	struct FGameplayTagContainer FixedPersonalityTag; // 0x470 (0x20)
	struct FGameplayTagContainer FixedSetBonusTag; // 0x490 (0x20)
	int MatchingPersonalityBonus; // 0x4b0 (0x4)
	int MismatchingPersonalityPenalty; // 0x4b4 (0x4)
};

