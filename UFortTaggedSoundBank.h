// Class /Script/FortniteGame.FortTaggedSoundBank
// Size: 0x80
class UFortTaggedSoundBank : public UDataAsset
{
	struct TMap<struct FGameplayTag, struct FTaggedSoundBankResponseList> FlattenedResponseMap; // 0x30 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortTaggedSoundBank.GetSoundToPlayByExactMatch (Underlying native function: GetSoundToPlayByExactMatch 0x8246458)
	class USoundBase* GetSoundToPlayByExactMatch(struct FGameplayTag& tag, struct FGameplayTagContainer& Context); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortTaggedSoundBank.GetSoundToPlay (Underlying native function: GetSoundToPlay 0x26a7518)
	class USoundBase* GetSoundToPlay(struct FGameplayTag& tag, struct FGameplayTagContainer& Context); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

