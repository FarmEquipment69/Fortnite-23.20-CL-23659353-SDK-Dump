// Class /Script/FortniteGame.BuildingGameplayActorSentry
// Size: 0xbb0
class ABuildingGameplayActorSentry : public ABuildingGameplayActor
{
	class UStaticMeshComponent* CameraStaticMeshComp; // 0x9d8 (0x8)
	class UStaticMeshComponent* BaseStaticMeshComp; // 0x9e0 (0x8)
	class UStaticMeshComponent* AngleRaysStaticMeshComp; // 0x9e8 (0x8)
	class USpotLightComponent* SpotLightComp; // 0x9f0 (0x8)
	bool bYawLimitWhileTracking; // 0x9f8 (0x1)
	bool bDoesNotRotate; // 0x9f9 (0x1)
	bool bLocateDamagerIfHitWhileIdle; // 0x9fa (0x1)
	enum EBuildingGameplayActorSentry_State CurrentSentryState; // 0x9fb (0x1)
	unsigned char unreflected_9fc[0x4]; // 0x9fc (0x4) 
	class AFortPawn* PawnBeingTracked; // 0xa00 (0x8)
	struct FScalableFloat TrackedToAggroDelay; // 0xa08 (0x28)
	bool bIdleRotationStopped; // 0xa30 (0x1)
	unsigned char unreflected_a31[0x3]; // 0xa31 (0x3) 
	float IdleRotationPauseTime; // 0xa34 (0x4)
	float ReturnToIdlePauseTime; // 0xa38 (0x4)
	float RotationRate; // 0xa3c (0x4)
	float ReturnToIdleRotationRate; // 0xa40 (0x4)
	float TrackingRotationRate; // 0xa44 (0x4)
	float LocatingDamagerRotationRate; // 0xa48 (0x4)
	float TrackingAdditionalZLook; // 0xa4c (0x4)
	bool bGoDormantAfterPassiveIdle; // 0xa50 (0x1)
	bool bSetRayScaleOnTrackTick; // 0xa51 (0x1)
	unsigned char unreflected_a52[0x2]; // 0xa52 (0x2) 
	float AngleRaysTrackingYScale; // 0xa54 (0x4)
	float AngleRaysTrackingZScale; // 0xa58 (0x4)
	unsigned char unreflected_a5c[0x4]; // 0xa5c (0x4) 
	struct FVector AngleRaysTargetScale; // 0xa60 (0x18)
	struct FGameplayTag ReturnToIdleGameplayCueTag; // 0xa78 (0x4)
	struct FGameplayTag TrackedGameplayCueTag; // 0xa7c (0x4)
	struct FGameplayTag AggroedGameplayCueTag; // 0xa80 (0x4)
	bool bBaseFollowsTargetRotation; // 0xa84 (0x1)
	bool bWasIdleStopped; // 0xa85 (0x1)
	bool bIdleRotatingRight; // 0xa86 (0x1)
	unsigned char unreflected_a87[0x1]; // 0xa87 (0x1) 
	struct FVector LastPawnBeingTrackedLocation; // 0xa88 (0x18)
	float LastNetworkReceiveTime; // 0xaa0 (0x4)
	float DisableTickAfterNoNetworkTrafficTime; // 0xaa4 (0x4)
	float SentryPitchClampMin; // 0xaa8 (0x4)
	float SentryPitchClampMax; // 0xaac (0x4)
	struct FVector2D SpotLightDistanceMinMax; // 0xab0 (0x10)
	struct FVector2D SpotLightRadiusMinMax; // 0xac0 (0x10)
	struct FVector2D SpotLightOuterConeAngleMinMax; // 0xad0 (0x10)
	float SpotLightRadiusLerpSpeed; // 0xae0 (0x4)
	float SpotLightOuterConeAngleLerpSpeed; // 0xae4 (0x4)
	struct TArray<class AFortPlayerPawn*> PawnsInRange; // 0xae8 (0x10)
	unsigned char unreflected_af8[0x18]; // 0xaf8 (0x18) 
	struct FRotator TargetRotation; // 0xb10 (0x18)
	struct FRotator StartingIdleRotation; // 0xb28 (0x18)
	struct FRotator IdleRotationDestination; // 0xb40 (0x18)
	struct FRotator ExactIdleRotation; // 0xb58 (0x18)
	struct FRotator TargetRotationRight; // 0xb70 (0x18)
	struct FRotator TargetRotationLeft; // 0xb88 (0x18)
	struct FMulticastInlineDelegate OnSentryStateChanged; // 0xba0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingGameplayActorSentry.StopRotationSound (Has no native function)
	void StopRotationSound(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorSentry.SetSentryState (Underlying native function: SetSentryState 0x85e0fec)
	void SetSentryState(enum EBuildingGameplayActorSentry_State& InSentryState); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorSentry.SetPawnBeingTracked (Underlying native function: SetPawnBeingTracked 0x85e0d68)
	void SetPawnBeingTracked(class AFortPawn*& InPawnBeingTracked); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorSentry.SetLaserActive (Has no native function)
	void SetLaserActive(bool& bIsActive); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorSentry.PlayStoppedIdleRotationAudio (Has no native function)
	void PlayStoppedIdleRotationAudio(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorSentry.PlayStartedIdleRotationAudio (Has no native function)
	void PlayStartedIdleRotationAudio(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorSentry.OnRep_ExactIdleRotation (Underlying native function: OnRep_ExactIdleRotation 0x85dfe50)
	void OnRepExactIdleRotation(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingGameplayActorSentry.OnRep_CurrentSentryState (Underlying native function: OnRep_CurrentSentryState 0x85dfdd4)
	void OnRepCurrentSentryState(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingGameplayActorSentry.BPOnSentryStateChanged (Has no native function)
	void BPOnSentryStateChanged(); // (Event | Public | BlueprintEvent)
};

