// Class /Script/FortniteGame.PartyDisplayManager
// Size: 0x558
class APartyDisplayManager : public AActor
{
	struct TArray<class AActor*> PlacementActors; // 0x288 (0x10)
	class AActor* VaultPlacementActor; // 0x298 (0x8)
	class AActor* VaultWeaponPlacementActor; // 0x2a0 (0x8)
	struct FMulticastInlineDelegate OnClickedPartyPlayer; // 0x2a8 (0x10)
	struct FMulticastInlineDelegate OnBeginCursorOverPartyPlayer; // 0x2b8 (0x10)
	struct FMulticastInlineDelegate OnEndCursorOverPartyPlayer; // 0x2c8 (0x10)
	struct FMulticastInlineDelegate OnItemDisplayReady; // 0x2d8 (0x10)
	struct FMulticastInlineDelegate OnPrefabForCurrentlyDisplayedItemChanged; // 0x2e8 (0x10)
	class UMaterialInstance* PlayerInMatchHoloMaterial; // 0x2f8 (0x8)
	bool IsPlayingCelebrateFX; // 0x300 (0x1)
	unsigned char unreflected_301[0x7]; // 0x301 (0x7) 
	struct TMap<int, struct FHeroSlotInfo> HeroPlayerPawns; // 0x308 (0x50)
	unsigned char unreflected_358[0x50]; // 0x358 (0x50) 
	struct FFortAthenaLoadout CurrentlyDisplayedCosmeticLoadout; // 0x3a8 (0x178)
	struct TArray<class UFortItemDefinition*> CurrentContentOnDemandItemDefs; // 0x520 (0x10)
	unsigned char padding_530[0x28]; // 0x530 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.PartyDisplayManager.ShowItem (Has no native function)
	void ShowItem(class UFortItem*& ItemToView, struct FGuid& RequestId); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.PartyDisplayManager.SetupPrefabVisuals (Has no native function)
	void SetupPrefabVisuals(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.PartyDisplayManager.ResOutPawnFromLobby (Has no native function)
	void ResOutPawnFromLobby(class AFortPlayerPawn*& Pawn, int& PartyIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.PartyDisplayManager.PlayLevelUpEffect (Has no native function)
	void PlayLevelUpEffect(); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.PartyDisplayManager.PlayEvolutionEffect (Has no native function)
	void PlayEvolutionEffect(); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.PartyDisplayManager.OnPlayerPawnAddedToLobby (Has no native function)
	void OnPlayerPawnAddedToLobby(class AFortPlayerPawn*& Pawn); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.PartyDisplayManager.OnPawnTouchReleased (Underlying native function: OnPawnTouchReleased 0x8a0839c)
	void OnPawnTouchReleased(struct TEnumAsByte<ETouchIndex>& FingerIndex, class AActor*& TouchedActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.PartyDisplayManager.OnPawnEndCursorOver (Underlying native function: OnPawnEndCursorOver 0x8a082f0)
	void OnPawnEndCursorOver(class AActor*& TouchedActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.PartyDisplayManager.OnPawnClicked (Underlying native function: OnPawnClicked 0x8a08188)
	void OnPawnClicked(class AActor*& TouchedActor, struct FKey& ButtonPressed); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.PartyDisplayManager.OnPawnBeginCursorOver (Underlying native function: OnPawnBeginCursorOver 0x8a080dc)
	void OnPawnBeginCursorOver(class AActor*& TouchedActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.PartyDisplayManager.OnMeshLODStreamingFinished (Has no native function)
	void OnMeshLODStreamingFinished(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.PartyDisplayManager.NotifyPrefabChanged (Underlying native function: NotifyPrefabChanged 0x8a07ebc)
	void NotifyPrefabChanged(class AActor*& PrefabActor, class UFortItem*& CurrentItem); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.PartyDisplayManager.HandleLoadingAssetsForItemCompleted (Has no native function)
	void HandleLoadingAssetsForItemCompleted(class UFortItem*& ItemWhoseAssetsWereLoaded, struct TArray<class UObject*>& LoadedAssets, struct FGuid& RequestId); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.PartyDisplayManager.HandleItemsShown (Underlying native function: HandleItemsShown 0x8a07c24)
	void HandleItemsShown(struct TArray<class UFortItem*>& ItemShown, struct FGuid& RequestId); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.PartyDisplayManager.HandleCharacterCustomizationFinished (Underlying native function: HandleCharacterCustomizationFinished 0x8a07b7c)
	void HandleCharacterCustomizationFinished(class AFortPlayerPawn*& Pawn); // (Final | Native | Public)

	// Function /Script/FortniteGame.PartyDisplayManager.GetPrefabActorForCurrentDisplayedItem (Has no native function)
	class AActor* GetPrefabActorForCurrentDisplayedItem(); // (0x00000002 | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.PartyDisplayManager.GetPlayerIdFromPartyMemberIndex (Underlying native function: GetPlayerIdFromPartyMemberIndex 0x8a07064)
	struct FUniqueNetIdRepl GetPlayerIdFromPartyMemberIndex(int& PartyMemberIndex); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.PartyDisplayManager.GetPartyMemberIndexByPlayerPawn (Underlying native function: GetPartyMemberIndexByPlayerPawn 0x8a06d80)
	bool GetPartyMemberIndexByPlayerPawn(class AFortPlayerPawn*& PlayerPawn, int& OutPlayerIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.PartyDisplayManager.GetMeshForCurrentDisplayedItem (Has no native function)
	void GetMeshForCurrentDisplayedItem(class UMeshComponent*& OutDisplayedMesh); // (0x00000002 | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.PartyDisplayManager.GetHeroPlayerPawnForCurrentDisplayedItem (Underlying native function: GetHeroPlayerPawnForCurrentDisplayedItem 0x8a06a30)
	class AFortPlayerPawn* GetHeroPlayerPawnForCurrentDisplayedItem(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.PartyDisplayManager.GetCosmeticLoadoutForCurrentDisplayedItem (Underlying native function: GetCosmeticLoadoutForCurrentDisplayedItem 0x8a060c8)
	struct FFortAthenaLoadout GetCosmeticLoadoutForCurrentDisplayedItem(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.PartyDisplayManager.CharacterCustomizationFinished (Has no native function)
	void CharacterCustomizationFinished(class AFortPlayerPawn*& Pawn); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.PartyDisplayManager.BeginLoadingAssetsForItem (Underlying native function: BeginLoadingAssetsForItem 0x8a05af0)
	void BeginLoadingAssetsForItem(class UFortItem*& ItemToView, struct TArray<struct TWeakObjectPtr<class UObject>>& AssetsToLoad, struct FGuid& RequestId); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

