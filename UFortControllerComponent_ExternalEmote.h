// Class /Script/FortniteGame.FortControllerComponent_ExternalEmote
// Size: 0x140
class UFortControllerComponent_ExternalEmote : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x60]; // 0xa0 (0x60) 
	struct TArray<struct FExternalEmoteCategory> ExternalEmotes; // 0x100 (0x10)
	struct TArray<struct FEmoteActionBinding> UncategorizedEmotes; // 0x110 (0x10)
	struct TArray<struct FName> PlayedActions; // 0x120 (0x10)
	class UInputComponent* InputComponent; // 0x130 (0x8)
	unsigned char padding_138[0x8]; // 0x138 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_ExternalEmote.RemoveExternalEmotes (Underlying native function: RemoveExternalEmotes 0x5cfbd70)
	void RemoveExternalEmotes(struct TArray<struct FPrimaryAssetId*>& EmotesToRemove); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_ExternalEmote.RemoveExternalEmoteCategories (Underlying native function: RemoveExternalEmoteCategories 0x5cfbd70)
	void RemoveExternalEmoteCategories(struct TArray<struct FName>& CategoriesToRemove); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_ExternalEmote.RemoveExternalEmote (Underlying native function: RemoveExternalEmote 0x5cfbc80)
	void RemoveExternalEmote(struct FPrimaryAssetId*& EmoteToRemove); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_ExternalEmote.PlayUncategorizedEmoteAtIndex (Underlying native function: PlayUncategorizedEmoteAtIndex 0x86d0d08)
	void PlayUncategorizedEmoteAtIndex(int& EmoteIndex); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_ExternalEmote.PlayEmoteAtIndex (Underlying native function: PlayEmoteAtIndex 0x86d0c48)
	void PlayEmoteAtIndex(int& CategoryIndex, int& EmoteIndex); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_ExternalEmote.OnRep_UncategorizedEmotes (Underlying native function: OnRep_UncategorizedEmotes 0x86d0aec)
	void OnRepUncategorizedEmotes(struct TArray<struct FEmoteActionBinding>& PreviousUncategorizedEmotes); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortControllerComponent_ExternalEmote.OnRep_ExternalEmotes (Underlying native function: OnRep_ExternalEmotes 0x86d0a54)
	void OnRepExternalEmotes(struct TArray<struct FExternalEmoteCategory>& PreviousExternalEmotes); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortControllerComponent_ExternalEmote.GetUncategorizedEmotes (Underlying native function: GetUncategorizedEmotes 0x86d02f8)
	struct TArray<struct FEmoteActionBinding> GetUncategorizedEmotes(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_ExternalEmote.GetExternalEmotes (Underlying native function: GetExternalEmotes 0x86d0068)
	struct TArray<struct FExternalEmoteCategory> GetExternalEmotes(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_ExternalEmote.AddExternalEmoteSimple (Underlying native function: AddExternalEmoteSimple 0x5cfbc80)
	void AddExternalEmoteSimple(struct FPrimaryAssetId*& Emote); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_ExternalEmote.AddExternalEmotes (Underlying native function: AddExternalEmotes 0x5cfbcf0)
	void AddExternalEmotes(struct TArray<struct FEmoteActionBinding>& NewEmotes); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_ExternalEmote.AddExternalEmoteCategories (Underlying native function: AddExternalEmoteCategories 0x5cfbbc0)
	void AddExternalEmoteCategories(struct TArray<struct FExternalEmoteCategory>& NewCategories, bool& bAllowMerging); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)
};

