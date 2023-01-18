// Class /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes
// Size: 0x168
class UPlayspaceComponent_CreativeModifyEmotes : public UFortPlayspaceComponent
{
	unsigned char unreflected_168[0x168]; 

	/* Functions */

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes.RemoveEmotesFromPlayerState (Underlying native function: RemoveEmotesFromPlayerState 0x5c48c40)
	void RemoveEmotesFromPlayerState(class APlayerState*& PlayerState, struct TArray<struct FName>& CategoriesToRemove); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes.RemoveEmoteFromCategory (Underlying native function: RemoveEmoteFromCategory 0x5c48b30)
	void RemoveEmoteFromCategory(struct FEmoteActionBinding& EmoteToRemove, struct FName& CategoryName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes.RemoveEmoteCategory (Underlying native function: RemoveEmoteCategory 0x5c48a80)
	void RemoveEmoteCategory(struct FName& CategoryName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes.RemoveBlockedEmoteTag (Underlying native function: RemoveBlockedEmoteTag 0x5c48990)
	void RemoveBlockedEmoteTag(struct FGameplayTag& TagToRemove); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes.RemoveBlockedEmote (Underlying native function: RemoveBlockedEmote 0x5c488c0)
	void RemoveBlockedEmote(struct FString& EmoteToRemove); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes.OnPlayerExitedSpatialInterface (Underlying native function: OnPlayerExitedSpatialInterface 0x5c487c0)
	void OnPlayerExitedSpatialInterface(struct FEventMessageTag& Channel, struct FPlayerExitSpatialActorContext& PlayerExitSpatialActorContext); // (Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes.OnPlayerEnteredSpatialInterface (Underlying native function: OnPlayerEnteredSpatialInterface 0x5c486c0)
	void OnPlayerEnteredSpatialInterface(struct FEventMessageTag& Channel, struct FPlayerEnterSpatialActorContext& PlayerEnterSpatialActorContext); // (Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes.GetCreativeModifyEmotesComponent (Underlying native function: GetCreativeModifyEmotesComponent 0x5c48610)
	static class UPlayspaceComponent_CreativeModifyEmotes* GetCreativeModifyEmotesComponent(class AActor*& ContextActor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes.AddUniqueEmoteCategory (Underlying native function: AddUniqueEmoteCategory 0x5c483f0)
	bool AddUniqueEmoteCategory(struct FName& CategoryName, struct FText& CategoryTitle, struct FText& CategoryTitleMultipage, bool& bExclusive); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes.AddEmoteToCategory (Underlying native function: AddEmoteToCategory 0x5c48190)
	bool AddEmoteToCategory(struct FString& EmoteTemplateID, struct FName& CategoryName, struct FEmoteActionBinding& OutCreatedEmote); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes.AddEmotesToPlayersInSpatialInterface (Underlying native function: AddEmotesToPlayersInSpatialInterface 0x52f5710)
	void AddEmotesToPlayersInSpatialInterface(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes.AddEmotesForPlayer (Underlying native function: AddEmotesForPlayer 0x5c48340)
	void AddEmotesForPlayer(class APlayerState*& PlayerState); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes.AddBlockedEmoteTag (Underlying native function: AddBlockedEmoteTag 0x5c480a0)
	void AddBlockedEmoteTag(struct FGameplayTag& TagToBlock); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeModifyEmotes.AddBlockedEmote (Underlying native function: AddBlockedEmote 0x5c47f90)
	void AddBlockedEmote(struct FString& EmoteToBlock); // (Final | Native | Public | BlueprintCallable)
};

