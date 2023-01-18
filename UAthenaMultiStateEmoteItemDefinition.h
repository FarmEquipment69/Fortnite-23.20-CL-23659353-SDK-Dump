// Class /Script/FortniteGame.AthenaMultiStateEmoteItemDefinition
// Size: 0xa20
class UAthenaMultiStateEmoteItemDefinition : public UAthenaDanceItemDefinition
{
	struct TArray<struct TWeakObjectPtr<class UFortMontageItemDefinitionBase>> EmoteStageList; // 0xa08 (0x10)
	unsigned char padding_a18[0x8]; // 0xa18 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.AthenaMultiStateEmoteItemDefinition.ResetActiveEmoteIndex (Underlying native function: ResetActiveEmoteIndex 0x87626e4)
	void ResetActiveEmoteIndex(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaMultiStateEmoteItemDefinition.PlayActiveEmote (Underlying native function: PlayActiveEmote 0x70dc11c)
	void PlayActiveEmote(class AFortPlayerPawn*& FortPawn, bool& bAdvanceActiveEmote); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaMultiStateEmoteItemDefinition.AdvanceActiveEmoteIndex (Underlying native function: AdvanceActiveEmoteIndex 0x875f238)
	void AdvanceActiveEmoteIndex(); // (Final | Native | Public | BlueprintCallable)
};

