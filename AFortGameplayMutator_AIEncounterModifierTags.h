// Class /Script/FortniteGame.FortGameplayMutator_AIEncounterModifierTags
// Size: 0x2f8
class AFortGameplayMutator_AIEncounterModifierTags : public AFortGameplayMutator
{
	struct FGameplayTagContainer GameplayTags; // 0x2c0 (0x20)
	struct TArray<struct FFortEncounterMutatorReplacedTag> TagsToReplace; // 0x2e0 (0x10)
	struct TEnumAsByte<EFortMissionType> RequiredEncounterAssociatedMissionType; // 0x2f0 (0x1)
	unsigned char padding_2f1[0x7]; // 0x2f1 (0x7)
};

