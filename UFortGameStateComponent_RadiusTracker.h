// Class /Script/FortniteGame.FortGameStateComponent_RadiusTracker
// Size: 0x108
class UFortGameStateComponent_RadiusTracker : public UGameStateComponent
{
	unsigned char unreflected_a0[0x50]; // 0xa0 (0x50) 
	struct TArray<class AActor*> UpdateQueue; // 0xf0 (0x10)
	unsigned char padding_100[0x8]; // 0x100 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.UpdateRadiusTrackingSizes (Underlying native function: UpdateRadiusTrackingSizes 0x84615f8)
	bool UpdateRadiusTrackingSizes(class AActor*& ActorTarget, float& MaxCenterOffset, float& MinimumRadius, float& MaximumRadius); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.SetRadiusTrackingViewersFromPlayerPawns (Underlying native function: SetRadiusTrackingViewersFromPlayerPawns 0x8460e30)
	void SetRadiusTrackingViewersFromPlayerPawns(struct FRadiusTrackingInitializer& RadiusTrackingInitializer, struct FRadiusTrackingInitializer& RadiusTrackingInitializerInput, struct TArray<class AFortPlayerPawn*>& ViewerPawns); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.RemoveTrackingForActorFromTrackingGroup (Underlying native function: RemoveTrackingForActorFromTrackingGroup 0x84608b4)
	void RemoveTrackingForActorFromTrackingGroup(class AActor*& TrackedActor, class AFortPlayerController*& PlayerTrackingActor, enum ERadiusTrackingGroupingType& GroupingType); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.RemoveTrackingForActorFromPlayer (Underlying native function: RemoveTrackingForActorFromPlayer 0x84607bc)
	void RemoveTrackingForActorFromPlayer(class AActor*& TrackedActor, class AFortPlayerController*& PlayerTrackingActor, enum ERadiusTrackingGroupingType& GroupingType); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.RemoveTrackingForActorAndTrackingKey (Underlying native function: RemoveTrackingForActorAndTrackingKey 0x84606f4)
	void RemoveTrackingForActorAndTrackingKey(class AActor*& TrackedActor, struct FRadiusTrackingGroupKey& TrackingKey); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.RemoveTrackingForActor (Underlying native function: RemoveTrackingForActor 0x845fea8)
	void RemoveTrackingForActor(class AActor*& TrackedActor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.RemoveOwnerSquadMemberIndexFromTracking (Underlying native function: RemoveOwnerSquadMemberIndexFromTracking 0x84605c0)
	bool RemoveOwnerSquadMemberIndexFromTracking(class AActor*& TrackedActor, class AFortPlayerController*& PlayerTrackingActor); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.RemoveFromInitializerOwnerSquadMemberIndex (Underlying native function: RemoveFromInitializerOwnerSquadMemberIndex 0x84604ac)
	static bool RemoveFromInitializerOwnerSquadMemberIndex(struct FRadiusTrackingInitializer& RadiusTrackerInitializer, class AFortPlayerStateAthena*& PlayerToRemove); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.OnTrackedActorEndPlay (Underlying native function: OnTrackedActorEndPlay 0x8460144)
	void OnTrackedActorEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.OnTrackedActorDied (Underlying native function: OnTrackedActorDied 0x845ff28)
	void OnTrackedActorDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.OnTrackedActorDestroyed (Underlying native function: OnTrackedActorDestroyed 0x845fea8)
	void OnTrackedActorDestroyed(class AActor*& DestroyedActor); // (Final | 0x00000002 | Native | Private)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.MakeRadiusTrackingInitializer (Underlying native function: MakeRadiusTrackingInitializer 0x845e734)
	static struct FRadiusTrackingInitializer MakeRadiusTrackingInitializer(float& MaxCenterOffset, float& MinimumRadius, float& MaximumRadius, float& TimeBetweenUpdatesInSeconds, float& RadiusAmountToShrinkEachUpdate, struct FLinearColor& CircleColor, class UMaterialInterface*& CircleDrawingMaterial, class AActor*& ActorTarget, struct TArray<class AFortPlayerController*>& TargetTrackers, enum ERadiusTrackingGroupingType& GroupingType); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.GetGameStateRadiusTrackerComponent (Underlying native function: GetGameStateRadiusTrackerComponent 0x845dbec)
	static class UFortGameStateComponent_RadiusTracker* GetGameStateRadiusTrackerComponent(class UObject*& WorldContextObject); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.BreakRadiusTrackingInitializer (Underlying native function: BreakRadiusTrackingInitializer 0x845d014)
	static void BreakRadiusTrackingInitializer(struct FRadiusTrackingInitializer& RadiusTrackingInitializer, float& MaxCenterOffset, float& MinimumRadius, float& MaximumRadius, float& TimeBetweenUpdatesInSeconds, float& RadiusAmountToShrinkEachUpdate, struct FLinearColor& CircleColor, class UMaterialInterface*& CircleDrawingMaterial, class AActor*& ActorTarget, struct TArray<class AFortPlayerController*>& TargetTrackers, enum ERadiusTrackingGroupingType& GroupingType); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.AddToInitializerOwnerSquadMemberIndex (Underlying native function: AddToInitializerOwnerSquadMemberIndex 0x845cbb0)
	static void AddToInitializerOwnerSquadMemberIndex(struct FRadiusTrackingInitializer& RadiusTrackerInitializer, class AFortPlayerStateAthena*& PlayerToAdd); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.AddOwnerSquadMemberIndexFromTracking (Underlying native function: AddOwnerSquadMemberIndexFromTracking 0x845ca88)
	void AddOwnerSquadMemberIndexFromTracking(class AActor*& TrackedActor, class AFortPlayerController*& PlayerTrackingActor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_RadiusTracker.AddActorTrackingInfo (Underlying native function: AddActorTrackingInfo 0x845c9c0)
	struct FRadiusTrackingGroupKey AddActorTrackingInfo(struct FRadiusTrackingInitializer& RadiusTrackingInitializer); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

