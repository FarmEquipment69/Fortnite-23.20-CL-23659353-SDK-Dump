// Class /Script/FortniteGame.FortVolume
// Size: 0x6f8
class AFortVolume : public AGameplayVolume
{
	unsigned char unreflected_310[0x78]; // 0x310 (0x78) 
	class UFortVolumeObjectTrackingComponent* ObjectTrackingComponent; // 0x388 (0x8)
	class UDevicesDataTrackingComponent* DevicesDataTrackingComponent; // 0x390 (0x8)
	class UFortPlaysetItemDefinition* OverridePlayset; // 0x398 (0x8)
	unsigned char bNeverAllowSaving; // 0x3a0 (0x1)
	unsigned char bShouldTrackObjects; // 0x3a0 (0x1)
	unsigned char bShouldIgnoreTransientObjectLimits; // 0x3a0 (0x1)
	unsigned char unreflected_3a1[0x7]; // 0x3a1 (0x7) 
	struct TArray<enum EActorFilterPolicy> ActorFilterPolicies; // 0x3a8 (0x10)
	unsigned char bDestroyingActors; // 0x3b8 (0x1)
	unsigned char unreflected_3b9[0x7]; // 0x3b9 (0x7) 
	struct FMulticastInlineDelegate OnFinishVolumeClear; // 0x3c0 (0x10)
	struct FScalableFloat IsHotfixablyEnabled; // 0x3d0 (0x28)
	class UFortPlaysetItemDefinition* CurrentPlayset; // 0x3f8 (0x8)
	unsigned char unreflected_400[0x50]; // 0x400 (0x50) 
	struct FVolumeActorStats ActorStats; // 0x450 (0x50)
	unsigned char unreflected_4a0[0x10]; // 0x4a0 (0x10) 
	struct TArray<class AFortAthenaCreativePortal*> LinkedPortals; // 0x4b0 (0x10)
	unsigned char bAdjustNavInvokerSizeToVolume; // 0x4c0 (0x1)
	unsigned char bCreateNavOctreeInclusionBound; // 0x4c0 (0x1)
	unsigned char unreflected_4c1[0x7]; // 0x4c1 (0x7) 
	struct TArray<class AActor*> DeferredDestroyActors; // 0x4c8 (0x10)
	unsigned char unreflected_4d8[0x20]; // 0x4d8 (0x20) 
	enum ESpatialLoadingState VolumeState; // 0x4f8 (0x1)
	unsigned char unreflected_4f9[0x7]; // 0x4f9 (0x7) 
	class UAsyncTaskQueue* TaskQueue; // 0x500 (0x8)
	unsigned char unreflected_508[0xc8]; // 0x508 (0xc8) 
	int AIGroupEncounterID; // 0x5d0 (0x4)
	int MaxActiveAI; // 0x5d4 (0x4)
	unsigned char unreflected_5d8[0x18]; // 0x5d8 (0x18) 
	class UClass* NavInvokerClass; // 0x5f0 (0x8)
	class AAthenaNavInvokerBox* NavigationInvokerBox; // 0x5f8 (0x8)
	unsigned char unreflected_600[0x58]; // 0x600 (0x58) 
	struct TArray<class AFortMissionStormShield*> StormShields; // 0x658 (0x10)
	unsigned char unreflected_668[0x10]; // 0x668 (0x10) 
	struct TArray<class AActor*> TimerWidgetActors; // 0x678 (0x10)
	struct FMulticastInlineDelegate OnActorEnter; // 0x688 (0x10)
	struct FMulticastInlineDelegate OnActorExit; // 0x698 (0x10)
	struct FMulticastInlineDelegate OnShowHUDMessage; // 0x6a8 (0x10)
	enum EVolumeShape BoundsShape; // 0x6b8 (0x1)
	unsigned char unreflected_6b9[0x7]; // 0x6b9 (0x7) 
	struct FMulticastInlineDelegate OnUserGeneratedContentRestrictionChanged; // 0x6c0 (0x10)
	bool bUserGeneratedContentRestricted; // 0x6d0 (0x1)
	unsigned char unreflected_6d1[0x7]; // 0x6d1 (0x7) 
	class UCreativeIslandResourceManagerComponent* IslandResourceManagerComponent; // 0x6d8 (0x8)
	class UFortPlayerSaveComponent* PlayerSaveComponent; // 0x6e0 (0x8)
	class UFortVolumePersistenceOptions* FortVolumePersistenceOptions; // 0x6e8 (0x8)
	unsigned char padding_6f0[0x8]; // 0x6f0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortVolume.ServerClearVolume (Underlying native function: ServerClearVolume 0x72ed940)
	void ServerClearVolume(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolume.RemoveAthenaPawnWhenDied (Underlying native function: RemoveAthenaPawnWhenDied 0x86572bc)
	void RemoveAthenaPawnWhenDied(class AFortPlayerPawnAthena*& FortPlayerPawnAthena); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolume.RemoveActorWhenEndPlay (Underlying native function: RemoveActorWhenEndPlay 0x86571f8)
	void RemoveActorWhenEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolume.RemoveActorWhenDied (Underlying native function: RemoveActorWhenDied 0x8656fdc)
	void RemoveActorWhenDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.FortVolume.OnRep_VolumeState (Underlying native function: OnRep_VolumeState 0x8656fc8)
	void OnRepVolumeState(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolume.OnRep_UserGeneratedContentRestrictions (Underlying native function: OnRep_UserGeneratedContentRestrictions 0x8656f94)
	void OnRepUserGeneratedContentRestrictions(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolume.OnRep_ObjectTrackingComponent (Underlying native function: OnRep_ObjectTrackingComponent 0x8656f80)
	void OnRepObjectTrackingComponent(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolume.OnRep_CurrentPlayset (Underlying native function: OnRep_CurrentPlayset 0x8656f6c)
	void OnRepCurrentPlayset(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolume.IsReady (Underlying native function: IsReady 0x8656bb4)
	bool IsReady(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolume.IsReadOnly (Underlying native function: IsReadOnly 0x8656b84)
	bool IsReadOnly(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolume.IsPlayerAllowedInVolume (Underlying native function: IsPlayerAllowedInVolume 0x8656b10)
	bool IsPlayerAllowedInVolume(class AFortPlayerController*& NewUser); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolume.HasVolumeBoundsBlocked (Underlying native function: HasVolumeBoundsBlocked 0x27c9608)
	bool HasVolumeBoundsBlocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolume.GetUserGeneratedContentRestricted (Underlying native function: GetUserGeneratedContentRestricted 0x8655dd4)
	bool GetUserGeneratedContentRestricted(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolume.GetStaticMesh (Underlying native function: GetStaticMesh 0x8655da4)
	class UStaticMeshComponent* GetStaticMesh(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolume.GetObjectTrackingComponent (Underlying native function: GetObjectTrackingComponent 0x8655cb4)
	class UFortVolumeObjectTrackingComponent* GetObjectTrackingComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolume.GetNumPlayersInVolume (Underlying native function: GetNumPlayersInVolume 0x8655c90)
	int GetNumPlayersInVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolume.GetMinigame (Underlying native function: GetMinigame 0x865598c)
	class AFortMinigame* GetMinigame(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolume.GetFortVolumeType (Underlying native function: GetFortVolumeType 0x8655968)
	enum EFortVolumeType GetFortVolumeType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolume.GetFortVolumePersistenceOptions (Underlying native function: GetFortVolumePersistenceOptions 0x8655950)
	class UFortVolumePersistenceOptions* GetFortVolumePersistenceOptions(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolume.GetCurrentPlayset (Underlying native function: GetCurrentPlayset 0x8655924)
	class UFortPlaysetItemDefinition* GetCurrentPlayset(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolume.GetActorsWithinVolumeByClass (Underlying native function: GetActorsWithinVolumeByClass 0x8655598)
	struct TArray<class AActor*> GetActorsWithinVolumeByClass(class UClass*& ActorClass); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolume.GetAccountIdOwnerOfIsland (Underlying native function: GetAccountIdOwnerOfIsland 0x8655414)
	struct FString GetAccountIdOwnerOfIsland(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolume.DestroyVolume (Underlying native function: DestroyVolume 0x8655188)
	void DestroyVolume(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolume.AddSelfToVolumeManager (Underlying native function: AddSelfToVolumeManager 0x8654764)
	void AddSelfToVolumeManager(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolume.AddOrRemovePawnAfterVehicleChange (Underlying native function: AddOrRemovePawnAfterVehicleChange 0x8654574)
	void AddOrRemovePawnAfterVehicleChange(class AFortPlayerPawn*& FortPawn, class AActor*& NewVehicle, class AActor*& OldVehicle); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolume.AddActor (Underlying native function: AddActor 0x86540f8)
	void AddActor(class AActor*& ActorToAdd); // (Final | Native | Public)
};

