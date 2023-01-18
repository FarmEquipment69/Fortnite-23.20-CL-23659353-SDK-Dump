// Class /Script/FortniteGame.FortAthenaCreativePortal
// Size: 0xfa8
class AFortAthenaCreativePortal : public ABuildingGameplayActor
{
	unsigned char unreflected_9d8[0x8]; // 0x9d8 (0x8) 
	int PortalIndex; // 0x9e0 (0x4)
	unsigned char unreflected_9e4[0x4]; // 0x9e4 (0x4) 
	class AActor* DestinationActor; // 0x9e8 (0x8)
	struct FString OverrideImageURL; // 0x9f0 (0x10)
	struct FVector MarkerDetailsPointerOrigin; // 0xa00 (0x18)
	float MaxInstantTeleportDistance; // 0xa18 (0x4)
	unsigned char unreflected_a1c[0x4]; // 0xa1c (0x4) 
	struct FText LoadingText; // 0xa20 (0x18)
	struct FText UnloadingText; // 0xa38 (0x18)
	struct FText SavingText; // 0xa50 (0x18)
	struct FText TeleportingPlayersText; // 0xa68 (0x18)
	struct FText TeleportingVehiclesText; // 0xa80 (0x18)
	class AFortVolume* LinkedVolume; // 0xa98 (0x8)
	bool bReturnToCreativeHub; // 0xaa0 (0x1)
	bool bInErrorState; // 0xaa1 (0x1)
	bool bUserInitiatedLoad; // 0xaa2 (0x1)
	unsigned char unreflected_aa3[0x5]; // 0xaa3 (0x5) 
	struct FCreativeIslandData CachedEditIslandData; // 0xaa8 (0x58)
	struct FCreativeLoadedLinkData IslandInfo; // 0xb00 (0x2d0)
	struct FText VolumeStatus; // 0xdd0 (0x18)
	struct FString EditOverridePlaylist; // 0xde8 (0x10)
	unsigned char unreflected_df8[0x18]; // 0xdf8 (0x18) 
	struct FText SanitizedTitle; // 0xe10 (0x18)
	struct FText SanitizedTagline; // 0xe28 (0x18)
	struct FText SanitizedCreatorName; // 0xe40 (0x18)
	unsigned char unreflected_e58[0x8]; // 0xe58 (0x8) 
	class UPrimitiveComponent* InteractComponent; // 0xe60 (0x8)
	class UCapsuleComponent* OverlapComponent; // 0xe68 (0x8)
	unsigned char CurrentPopulation; // 0xe70 (0x1)
	unsigned char MaxAvailablePopulation; // 0xe71 (0x1)
	unsigned char unreflected_e72[0x6]; // 0xe72 (0x6) 
	struct FUniqueNetIdRepl OwningPlayer; // 0xe78 (0x30)
	struct TArray<struct FUniqueNetIdRepl> PlayersReady; // 0xea8 (0x10)
	bool bIsPublishedPortal; // 0xeb8 (0x1)
	bool bIsUsingUGC; // 0xeb9 (0x1)
	unsigned char unreflected_eba[0x6]; // 0xeba (0x6) 
	struct FVector TeleportLocation; // 0xec0 (0x18)
	struct FScalableFloat TeleportExitDistance; // 0xed8 (0x28)
	unsigned char bTeleportLocationIsIslandStart; // 0xf00 (0x1)
	bool bDisallowPortalInteract; // 0xf01 (0x1)
	bool bLocalClientLacksPermission; // 0xf02 (0x1)
	bool bPortalOpen; // 0xf03 (0x1)
	unsigned char unreflected_f04[0x4]; // 0xf04 (0x4) 
	struct FLocalPortalState PortalStateForLocalPlayer; // 0xf08 (0x20)
	unsigned char unreflected_f28[0x18]; // 0xf28 (0x18) 
	class AFortPlayerStateAthena* CachedOwningPlayerState; // 0xf40 (0x8)
	unsigned char unreflected_f48[0x10]; // 0xf48 (0x10) 
	class UTexture2DDynamic* ThumbnailTexture; // 0xf58 (0x8)
	unsigned char unreflected_f60[0x10]; // 0xf60 (0x10) 
	struct TWeakObjectPtr<class UCapsuleComponent> InteractIconPlacementCapsule; // 0xf70 (0x8)
	unsigned char unreflected_f78[0x12]; // 0xf78 (0x12) 
	unsigned char bForceUpdateInteraction; // 0xf8a (0x1)
	unsigned char padding_f8b[0x1d]; // 0xf8b (0x1d)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaCreativePortal.UpdateThumbnail (Underlying native function: UpdateThumbnail 0x82b5370)
	void UpdateThumbnail(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.UpdateIslandDisplayName (Underlying native function: UpdateIslandDisplayName 0x82b535c)
	void UpdateIslandDisplayName(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.TeleportVehicle (Underlying native function: TeleportVehicle 0x82b4cc0)
	void TeleportVehicle(class AFortAthenaVehicle*& Vehicle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.TeleportPlayerToLinkedVolume (Underlying native function: TeleportPlayerToLinkedVolume 0x70dc11c)
	void TeleportPlayerToLinkedVolume(class AFortPlayerPawn*& PlayerPawn, bool& bUseSpawnTags); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.TeleportPlayerForPlotLoadComplete (Underlying native function: TeleportPlayerForPlotLoadComplete 0x82b4bbc)
	void TeleportPlayerForPlotLoadComplete(class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.TeleportPlayer (Underlying native function: TeleportPlayer 0x82b4b18)
	void TeleportPlayer(class AFortPlayerPawn*& PlayerPawn, struct FRotator& TeleportRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.StartedPlotLoadForUser (Underlying native function: StartedPlotLoadForUser 0x82b4a38)
	void StartedPlotLoadForUser(struct FAsyncTaskResult& Result); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.ShouldPausePortalUpdates_Client (Underlying native function: ShouldPausePortalUpdates_Client 0x82b47f4)
	bool ShouldPausePortalUpdatesClient(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.SetOverlapComponent (Underlying native function: SetOverlapComponent 0x82b4670)
	void SetOverlapComponent(class UCapsuleComponent*& InOverlapComponent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.SetInteractionInteractComponent (Underlying native function: SetInteractionInteractComponent 0x82b45f0)
	void SetInteractionInteractComponent(class UPrimitiveComponent*& PrimitiveComponent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.SetInteractionDisplayWidget (Underlying native function: SetInteractionDisplayWidget 0x82b4570)
	void SetInteractionDisplayWidget(class UUserWidget*& DisplayWidget); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.SetHUDPointerOrigin (Underlying native function: SetHUDPointerOrigin 0x82b44e8)
	void SetHUDPointerOrigin(struct FVector& NewPointerOrigin); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.ServerOnInteractWithIslandPortal (Has no native function)
	void ServerOnInteractWithIslandPortal(class AFortPlayerPawn*& InteractingPawn); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.PortalOpenChanged (Has no native function)
	void PortalOpenChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.PopulationChanged (Has no native function)
	void PopulationChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OwningPlayerChanged (Has no native function)
	void OwningPlayerChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OverlappingOnBeginPlay (Has no native function)
	void OverlappingOnBeginPlay(class AActor*& Actor); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnVolumeManagerUserGeneratedContentRestrictionsChanged (Underlying native function: OnVolumeManagerUserGeneratedContentRestrictionsChanged 0x82b3e24)
	void OnVolumeManagerUserGeneratedContentRestrictionsChanged(class AFortVolume*& Volume, bool& bRestrictionEnabled); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnUserGeneratedContentRestrictionsChanged (Underlying native function: OnUserGeneratedContentRestrictionsChanged 0x82b3da4)
	void OnUserGeneratedContentRestrictionsChanged(bool& bRestrictionEnabled); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnUnloadPlotComplete (Underlying native function: OnUnloadPlotComplete 0x82b3d90)
	void OnUnloadPlotComplete(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnUGCPaletteChanged (Underlying native function: OnUGCPaletteChanged 0x82b3d18)
	void OnUGCPaletteChanged(struct TArray<struct FString>& UpdatedLinkCodes); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnThumbnailTextureReady (Has no native function)
	void OnThumbnailTextureReady(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_VolumeStatus (Underlying native function: OnRep_VolumeStatus 0x82b3d04)
	void OnRepVolumeStatus(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_PublishedPortal (Underlying native function: OnRep_PublishedPortal 0x82b3c24)
	void OnRepPublishedPortal(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_PortalOpen (Underlying native function: OnRep_PortalOpen 0x82b3c10)
	void OnRepPortalOpen(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_PopulationChanged (Underlying native function: OnRep_PopulationChanged 0x82b3be0)
	void OnRepPopulationChanged(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_PlayersReady (Underlying native function: OnRep_PlayersReady 0x82b3c10)
	void OnRepPlayersReady(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_OwningPlayer (Underlying native function: OnRep_OwningPlayer 0x82b3bf4)
	void OnRepOwningPlayer(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_MaxAvailablePopulationChanged (Underlying native function: OnRep_MaxAvailablePopulationChanged 0x82b3be0)
	void OnRepMaxAvailablePopulationChanged(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_IsUsingUGC (Underlying native function: OnRep_IsUsingUGC 0x82b3b7c)
	void OnRepIsUsingUGC(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_IslandInfo (Underlying native function: OnRep_IslandInfo 0x82b3b90)
	void OnRepIslandInfo(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_ErrorState (Underlying native function: OnRep_ErrorState 0x82b3b68)
	void OnRepErrorState(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_CachedEditIslandData (Underlying native function: OnRep_CachedEditIslandData 0x82b22e0)
	void OnRepCachedEditIslandData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnReceivedNewIslandInfo (Has no native function)
	void OnReceivedNewIslandInfo(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnOverlapEnd (Underlying native function: OnOverlapEnd 0x82b367c)
	void OnOverlapEnd(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnOverlapBegin (Underlying native function: OnOverlapBegin 0x82b347c)
	void OnOverlapBegin(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnClientLoadedStateChanged (Underlying native function: OnClientLoadedStateChanged 0x82b3454)
	void OnClientLoadedStateChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.NotifyTeleportedVehicle (Underlying native function: NotifyTeleportedVehicle 0x82b33d0)
	void NotifyTeleportedVehicle(class AActor*& VehicleActor); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.NotifyTeleportedPlayerPawn (Has no native function)
	void NotifyTeleportedPlayerPawn(class AFortPlayerPawn*& PlayerPawn, bool& bTeleportedToIslandStart); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.LogIslandTeleportation (Underlying native function: LogIslandTeleportation 0x82b3338)
	void LogIslandTeleportation(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.IsRunningMatchmakingFlowToEdit (Underlying native function: IsRunningMatchmakingFlowToEdit 0x82b3158)
	bool IsRunningMatchmakingFlowToEdit(class AFortPlayerController*& PlayerToMatchmake); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.IsPortalOpenForRole (Underlying native function: IsPortalOpenForRole 0x82b30c8)
	bool IsPortalOpenForRole(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.IsPortalOpen (Underlying native function: IsPortalOpen 0x82b30a4)
	bool IsPortalOpen(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.IsPortalInteractable (Underlying native function: IsPortalInteractable 0x82b303c)
	bool IsPortalInteractable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.IsInErrorStateForRole (Underlying native function: IsInErrorStateForRole 0x82b2f68)
	bool IsInErrorStateForRole(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetVolumeDisplayName (Underlying native function: GetVolumeDisplayName 0x82b2acc)
	struct FText GetVolumeDisplayName(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetThumbnailWidth (Underlying native function: GetThumbnailWidth 0x82b2a90)
	int GetThumbnailWidth(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetThumbnailHeight (Underlying native function: GetThumbnailHeight 0x82b2a54)
	int GetThumbnailHeight(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetTagline (Underlying native function: GetTagline 0x82b29e0)
	struct FText GetTagline(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetPrivacy (Underlying native function: GetPrivacy 0x82b292c)
	enum EMMSPrivacy GetPrivacy(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetPopulation (Underlying native function: GetPopulation 0x82b2914)
	unsigned char GetPopulation(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetPlayerState (Underlying native function: GetPlayerState 0x82b28f0)
	class AFortPlayerStateAthena* GetPlayerState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetMnemonic (Underlying native function: GetMnemonic 0x82b287c)
	struct FString GetMnemonic(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetLinkedVolume (Underlying native function: GetLinkedVolume 0x82b2864)
	class AFortVolume* GetLinkedVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetIsPublishedPortal (Underlying native function: GetIsPublishedPortal 0x82b2780)
	bool GetIsPublishedPortal(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetIslandID (Underlying native function: GetIslandID 0x82b27dc)
	struct FString GetIslandID(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetIslandDescriptionTags (Underlying native function: GetIslandDescriptionTags 0x82b2798)
	struct TArray<struct FCreativeIslandDescriptionTag> GetIslandDescriptionTags(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetImageURL (Underlying native function: GetImageURL 0x82b2634)
	struct FString GetImageURL(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetHUDPointerOrigin (Underlying native function: GetHUDPointerOrigin 0x82b260c)
	struct FVector GetHUDPointerOrigin(); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetDescriptionTags (Underlying native function: GetDescriptionTags 0x82b251c)
	struct TArray<struct FString> GetDescriptionTags(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetCreatorName (Underlying native function: GetCreatorName 0x82b24a8)
	struct FText GetCreatorName(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetCachedEditIslandDataIslandName (Underlying native function: GetCachedEditIslandDataIslandName 0x5c834b0)
	struct FText GetCachedEditIslandDataIslandName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.FinishedReadingCloudFiles (Underlying native function: FinishedReadingCloudFiles 0x82b22f4)
	void FinishedReadingCloudFiles(struct FAsyncTaskResult& Result); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.ErrorStateChanged (Has no native function)
	void ErrorStateChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.DisplayNameChanged (Has no native function)
	void DisplayNameChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.CuratedPortalChanged (Has no native function)
	void CuratedPortalChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.ClientSaveStateChanged (Underlying native function: ClientSaveStateChanged 0x82b2260)
	void ClientSaveStateChanged(bool& bSaving); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.ClientSaveDisplayChanged (Has no native function)
	void ClientSaveDisplayChanged(bool& bSaving); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.Client_OnIsValkyrieEditPortalChanged (Underlying native function: Client_OnIsValkyrieEditPortalChanged 0x82b22e0)
	void ClientOnIsValkyrieEditPortalChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.CheckMinigameOnTeleportComplete (Underlying native function: CheckMinigameOnTeleportComplete 0x82b2180)
	void CheckMinigameOnTeleportComplete(class AFortPlayerPawn*& PlayerPawn, bool& bTeleportedToIslandStart); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.BP_OnOverlapEnd (Has no native function)
	void BPOnOverlapEnd(class AActor*& OtherActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.BP_OnOverlapBegin (Has no native function)
	void BPOnOverlapBegin(class AActor*& OtherActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.BlueprintUseMobileHighlight (Has no native function)
	bool BlueprintUseMobileHighlight(); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.BlueprintDisplayMobileInteractPrompt (Has no native function)
	bool BlueprintDisplayMobileInteractPrompt(); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.AttemptCancelMatchmakingToEdit (Underlying native function: AttemptCancelMatchmakingToEdit 0x82b1a08)
	void AttemptCancelMatchmakingToEdit(class AFortPlayerController*& PlayerToMatchmake); // (Final | Native | Private | BlueprintCallable)
};

