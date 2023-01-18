// Class /Script/FortniteGame.FortAthenaPartyRiftPortal
// Size: 0xb28
class AFortAthenaPartyRiftPortal : public ABuildingGameplayActor
{
	int PortalIndex; // 0x9d8 (0x4)
	unsigned char unreflected_9dc[0x4]; // 0x9dc (0x4) 
	struct FString OverrideImageURL; // 0x9e0 (0x10)
	unsigned char bForceUpdateInteraction; // 0x9f0 (0x1)
	bool bLocalPlayerInRange; // 0x9f1 (0x1)
	unsigned char unreflected_9f2[0x6]; // 0x9f2 (0x6) 
	struct FVector MarkerDetailsPointerOrigin; // 0x9f8 (0x18)
	class UPrimitiveComponent* InteractComponent; // 0xa10 (0x8)
	struct FText SanitizedTagline; // 0xa18 (0x18)
	struct FText SanitizedCreatorName; // 0xa30 (0x18)
	class UUserWidget* InteractionDisplayWidget; // 0xa48 (0x8)
	bool bPortalInteractDisabled; // 0xa50 (0x1)
	bool bLocalClientLacksPermission; // 0xa51 (0x1)
	unsigned char unreflected_a52[0x6]; // 0xa52 (0x6) 
	class UTexture2DDynamic* ThumbnailTexture; // 0xa58 (0x8)
	struct TWeakObjectPtr<class UCapsuleComponent> InteractIconPlacementCapsule; // 0xa60 (0x8)
	unsigned char unreflected_a68[0x10]; // 0xa68 (0x10) 
	bool bInErrorState; // 0xa78 (0x1)
	unsigned char unreflected_a79[0x7]; // 0xa79 (0x7) 
	struct FUniqueNetIdRepl OwningPlayerNetId; // 0xa80 (0x30)
	unsigned char unreflected_ab0[0x8]; // 0xab0 (0x8) 
	bool bIsPublishedPortal; // 0xab8 (0x1)
	bool bPortalOpen; // 0xab9 (0x1)
	unsigned char unreflected_aba[0x6]; // 0xaba (0x6) 
	class AFortPlayerStateAthena* CachedOwningPlayerState; // 0xac0 (0x8)
	struct TArray<class AFortPlayerStateAthena*> CachedPartyMemberPlayerStateList; // 0xac8 (0x10)
	struct FString PartyJoinInfoJSON; // 0xad8 (0x10)
	int MaxPartySize; // 0xae8 (0x4)
	unsigned char unreflected_aec[0x4]; // 0xaec (0x4) 
	struct TArray<struct FUniqueNetIdRepl> PartyMemberNetIdList; // 0xaf0 (0x10)
	int InitialDeploymentTime; // 0xb00 (0x4)
	unsigned char padding_b04[0x24]; // 0xb04 (0x24)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.UpdateThumbnail (Underlying native function: UpdateThumbnail 0x82e5500)
	void UpdateThumbnail(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.UpdatePartyJoinInfo (Underlying native function: UpdatePartyJoinInfo 0x82e54ec)
	void UpdatePartyJoinInfo(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.ShowLongRangeInteractionUI (Has no native function)
	void ShowLongRangeInteractionUI(bool& bShow, float& InteractionOffset); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.SetInteractionInteractComponent (Underlying native function: SetInteractionInteractComponent 0x82e4c60)
	void SetInteractionInteractComponent(class UPrimitiveComponent*& PrimitiveComponent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.SetInteractionDisplayWidget (Underlying native function: SetInteractionDisplayWidget 0x82e4be0)
	void SetInteractionDisplayWidget(class UUserWidget*& DisplayWidget); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.SetHUDPointerOrigin (Underlying native function: SetHUDPointerOrigin 0x82e4b58)
	void SetHUDPointerOrigin(struct FVector& NewPointerOrigin); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.ServerCachePartyMemberNetIdList (Underlying native function: ServerCachePartyMemberNetIdList 0x82e4950)
	void ServerCachePartyMemberNetIdList(struct TArray<struct FUniqueNetIdRepl>& NewPartyMemberNetIdList); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.ServerCachePartyJoinInfo (Underlying native function: ServerCachePartyJoinInfo 0x82e47f8)
	void ServerCachePartyJoinInfo(struct FString& NewPartyJoinInfo); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.ServerCacheMaxPartySize (Underlying native function: ServerCacheMaxPartySize 0x82e4774)
	void ServerCacheMaxPartySize(int& NewMaxPartySize); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.ReleasePortal (Underlying native function: ReleasePortal 0x7291288)
	void ReleasePortal(struct FString& Reason); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.PortalOpenChanged (Has no native function)
	void PortalOpenChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.OwningPlayerNetIdChanged (Has no native function)
	void OwningPlayerNetIdChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.OverlappingOnBeginPlay (Has no native function)
	void OverlappingOnBeginPlay(class AActor*& Actor); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.OnThumbnailTextureReady (Has no native function)
	void OnThumbnailTextureReady(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.OnRep_PartyMemberNetIdList (Underlying native function: OnRep_PartyMemberNetIdList 0x82e4234)
	void OnRepPartyMemberNetIdList(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.OnRep_PartyJoinInfoJSON (Underlying native function: OnRep_PartyJoinInfoJSON 0x82e4210)
	void OnRepPartyJoinInfoJSON(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.OnRep_OwningPlayerNetId (Underlying native function: OnRep_OwningPlayerNetId 0x82e4134)
	void OnRepOwningPlayerNetId(struct FUniqueNetIdRepl& InOldOwningPlayerNetId); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.OnRep_MaxPartySize (Underlying native function: OnRep_MaxPartySize 0x82e40e4)
	void OnRepMaxPartySize(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.OnRep_ErrorState (Underlying native function: OnRep_ErrorState 0x82e4094)
	void OnRepErrorState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.OnRep_bPortalOpen (Underlying native function: OnRep_bPortalOpen 0x82e4290)
	void OnRepbPortalOpen(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.OnRep_bIsPublishedPortal (Underlying native function: OnRep_bIsPublishedPortal 0x82e4248)
	void OnRepbIsPublishedPortal(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.OnPartyMembersChanged (Has no native function)
	void OnPartyMembersChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.OnMaxPartySizeChanged (Has no native function)
	void OnMaxPartySizeChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.OnInteractWithPartyRiftPortal (Underlying native function: OnInteractWithPartyRiftPortal 0x82e4004)
	bool OnInteractWithPartyRiftPortal(class AFortPlayerController*& InteractingController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.IsPortalOpen (Underlying native function: IsPortalOpen 0x82e3d14)
	bool IsPortalOpen(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.IsPortalInteractable (Underlying native function: IsPortalInteractable 0x82e3ce0)
	bool IsPortalInteractable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.IsPlayerInOwnerParty (Underlying native function: IsPlayerInOwnerParty 0x82e3c50)
	bool IsPlayerInOwnerParty(class AFortPlayerController*& InteractingController); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.IsPartyJoinRequestable (Underlying native function: IsPartyJoinRequestable 0x82e3bf4)
	bool IsPartyJoinRequestable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.IsPartyJoinable (Underlying native function: IsPartyJoinable 0x82e3c18)
	bool IsPartyJoinable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.GetThumbnailWidth (Underlying native function: GetThumbnailWidth 0x82e3948)
	int GetThumbnailWidth(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.GetThumbnailHeight (Underlying native function: GetThumbnailHeight 0x82e390c)
	int GetThumbnailHeight(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.GetTagline (Underlying native function: GetTagline 0x82e3898)
	struct FText GetTagline(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.GetPortalOwnerPlayerState (Underlying native function: GetPortalOwnerPlayerState 0x82e3790)
	class AFortPlayerStateAthena* GetPortalOwnerPlayerState(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.GetPartyMemberPlayerStateList (Underlying native function: GetPartyMemberPlayerStateList 0x82e3710)
	struct TArray<class AFortPlayerStateAthena*> GetPartyMemberPlayerStateList(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.GetPartyJoinPrompt (Underlying native function: GetPartyJoinPrompt 0x82e3694)
	struct FText GetPartyJoinPrompt(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.GetMaxPartySize (Underlying native function: GetMaxPartySize 0x82e367c)
	int GetMaxPartySize(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.GetIsPublishedPortal (Underlying native function: GetIsPublishedPortal 0x82e35f8)
	bool GetIsPublishedPortal(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.GetHUDPointerOrigin (Underlying native function: GetHUDPointerOrigin 0x82e35d0)
	struct FVector GetHUDPointerOrigin(); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.GetCurrentPartySize (Underlying native function: GetCurrentPartySize 0x82e32b0)
	int GetCurrentPartySize(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.GetCreatorName (Underlying native function: GetCreatorName 0x82e3210)
	struct FText GetCreatorName(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.ErrorStateChanged (Has no native function)
	void ErrorStateChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.DisplayNameChanged (Has no native function)
	void DisplayNameChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.CuratedPortalChanged (Has no native function)
	void CuratedPortalChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.BlueprintUseMobileHighlight (Has no native function)
	bool BlueprintUseMobileHighlight(); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.BlueprintDisplayMobileInteractPrompt (Has no native function)
	bool BlueprintDisplayMobileInteractPrompt(); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaPartyRiftPortal.AdjustBeaconCollisionHeight (Has no native function)
	void AdjustBeaconCollisionHeight(float& Distance); // (Event | Public | BlueprintEvent)
};

