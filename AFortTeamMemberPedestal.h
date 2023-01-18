// Class /Script/FortniteUI.FortTeamMemberPedestal
// Size: 0x560
class AFortTeamMemberPedestal : public AFortItemPlacementActor
{
	struct TArray<struct FCachedComponentMaterials> CachedComponentMaterials; // 0x478 (0x10)
	class AAthenaSquadPedestalGroup* OwningPedestalGroup; // 0x488 (0x8)
	int AssignedMemberIndex; // 0x490 (0x4)
	int VisualOrderIndex; // 0x494 (0x4)
	class UWidgetComponent* WidgetComponentMemberInfo; // 0x498 (0x8)
	class UWidgetComponent* WidgetComponentFillOpenSlot; // 0x4a0 (0x8)
	class UWidgetComponent* WidgetComponentBattlePassInfo; // 0x4a8 (0x8)
	class UWidgetComponent* WidgetComponentCompletedFeatInfo; // 0x4b0 (0x8)
	class UStaticMeshComponent* PlaceholderMesh; // 0x4b8 (0x8)
	struct TArray<class UFortTeamMemberEntryBase*> MemberWidgetEntries; // 0x4c0 (0x10)
	unsigned char unreflected_4d0[0x10]; // 0x4d0 (0x10) 
	class UFortHero* MemberHeroItem; // 0x4e0 (0x8)
	unsigned char unreflected_4e8[0x8]; // 0x4e8 (0x8) 
	float LocalLoadoutFailureTimeout; // 0x4f0 (0x4)
	bool bTimeToPawnLoadedEnabled; // 0x4f4 (0x1)
	unsigned char padding_4f5[0x6b]; // 0x4f5 (0x6b)

	/* Functions */

	// Function /Script/FortniteUI.FortTeamMemberPedestal.OnTeamMemberSet (Has no native function)
	void OnTeamMemberSet(bool& bHasValidTeamMember); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.OnPedestalIsPopulatedChanged (Has no native function)
	void OnPedestalIsPopulatedChanged(bool& bIsPopulated, bool& bOwningSquadContainsLocalPlayer); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.OnOwningPedestalGroupEstablished (Has no native function)
	void OnOwningPedestalGroupEstablished(int& SquadIdx, bool& bSquadHasLocalPlayer, bool& bIsPopulated); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.OnNewSquadEstablished (Has no native function)
	void OnNewSquadEstablished(bool& bMultipleSquadsPopulated, bool& bOwningSquadContainsLocalPlayer, struct FAthenaTeamDisplayInfo& OwningSquadStyle); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.OnIsCurrentlyInMatchChanged (Has no native function)
	void OnIsCurrentlyInMatchChanged(bool& bIsInMatch); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.OnGameReadinessChanged (Has no native function)
	void OnGameReadinessChanged(enum EGameReadiness& GameReadiness); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.OnDisconnectedToCampaignLobby (Has no native function)
	void OnDisconnectedToCampaignLobby(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.OnConnectedToCampaignLobby (Has no native function)
	void OnConnectedToCampaignLobby(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.OnAvatarChanged (Has no native function)
	void OnAvatarChanged(class UTexture2D*& AvatarImage, struct FColor& AvatarBackground, struct FColor& HighlightColor); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.IsValidTeamMember (Underlying native function: IsValidTeamMember 0x24b6f34)
	bool IsValidTeamMember(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.IsPlayingFortnite (Underlying native function: IsPlayingFortnite 0x25c8018)
	bool IsPlayingFortnite(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.IsInLocalSquadGroup (Underlying native function: IsInLocalSquadGroup 0x1901060)
	bool IsInLocalSquadGroup(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.IsInFrontEnd (Underlying native function: IsInFrontEnd 0x256ba64)
	bool IsInFrontEnd(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.IsCurrentMemberLocal (Underlying native function: IsCurrentMemberLocal 0x14e4578)
	bool IsCurrentMemberLocal(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.InitializePlaceholderMesh (Underlying native function: InitializePlaceholderMesh 0x2359fec)
	void InitializePlaceholderMesh(class UStaticMeshComponent*& PlaceholderMesh); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.HandlePlaceholderMeshInputTouchEnd (Underlying native function: HandlePlaceholderMeshInputTouchEnd 0xa73cf30)
	void HandlePlaceholderMeshInputTouchEnd(struct TEnumAsByte<ETouchIndex>& FingerIndex, class UPrimitiveComponent*& TouchedComponent); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.HandlePlaceholderMeshEndCursorOver (Underlying native function: HandlePlaceholderMeshEndCursorOver 0xa73d19c)
	void HandlePlaceholderMeshEndCursorOver(class UPrimitiveComponent*& TouchedComponent); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.HandlePlaceholderMeshClicked (Underlying native function: HandlePlaceholderMeshClicked 0xa73d070)
	void HandlePlaceholderMeshClicked(class UPrimitiveComponent*& TouchedComponent, struct FKey& ButtonPressed); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.HandlePlaceholderMeshBeginCursorOver (Underlying native function: HandlePlaceholderMeshBeginCursorOver 0xa73cff0)
	void HandlePlaceholderMeshBeginCursorOver(class UPrimitiveComponent*& TouchedComponent); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.HandleOnAnimInstanceEventReceived (Underlying native function: HandleOnAnimInstanceEventReceived 0x61ee110)
	void HandleOnAnimInstanceEventReceived(class UFortAnimInputEvent*& AnimInputEvent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.GetTeamMemberDisplayName (Underlying native function: GetTeamMemberDisplayName 0xa73c910)
	struct FString GetTeamMemberDisplayName(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.GetCurrentTeamSize (Underlying native function: GetCurrentTeamSize 0x2493220)
	int GetCurrentTeamSize(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.ClearOverrideMaterial (Underlying native function: ClearOverrideMaterial 0xa73bebc)
	void ClearOverrideMaterial(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortTeamMemberPedestal.ApplyUniformOverrideMaterial (Underlying native function: ApplyUniformOverrideMaterial 0xa73bcc0)
	void ApplyUniformOverrideMaterial(class UMaterialInterface*& OverrideMaterial); // (Final | Native | Protected | BlueprintCallable)
};

