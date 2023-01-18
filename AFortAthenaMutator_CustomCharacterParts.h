// Class /Script/FortniteGame.FortAthenaMutator_CustomCharacterParts
// Size: 0x388
class AFortAthenaMutator_CustomCharacterParts : public AFortAthenaMutator
{
	struct TArray<struct FPartOverrideData> PartOverrideCustomizations; // 0x330 (0x10)
	struct FScalableFloat ShouldSwapSkins; // 0x340 (0x28)
	struct FGameplayTagContainer SkinMetaTagsToSkip; // 0x368 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_CustomCharacterParts.GetPartOverridesForPlayer (Underlying native function: GetPartOverridesForPlayer 0x84a6288)
	bool GetPartOverridesForPlayer(struct TArray<struct FPartOverrideData>& OutOverrideParts, class AFortPlayerController*& FortPlayerController); // (Native | Event | Protected | HasOutParms | BlueprintEvent | Const)
};

