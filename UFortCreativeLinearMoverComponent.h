// Class /Script/FortniteGame.FortCreativeLinearMoverComponent
// Size: 0x208
class UFortCreativeLinearMoverComponent : public UActorComponent
{
	struct FMulticastSparseDelegate OnCreativeLinearMoverStartedDelegate; // 0xa0 (0x1)
	struct FMulticastSparseDelegate OnCreativeLinearMoverInterruptedDelegate; // 0xa1 (0x1)
	struct FMulticastSparseDelegate OnCreativeLinearMoverFinishedDelegate; // 0xa2 (0x1)
	struct FMulticastSparseDelegate OnCreativeLinearMoverTargetCollisionDelegate; // 0xa3 (0x1)
	struct FMulticastSparseDelegate OnCreativeLinearMoverTranslationTypeChangedDelegate; // 0xa4 (0x1)
	struct FMulticastSparseDelegate OnCreativeLinearMoverRotationDirectionChangedDelegate; // 0xa5 (0x1)
	unsigned char unreflected_a6[0x2]; // 0xa6 (0x2) 
	float Distance; // 0xa8 (0x4)
	float Speed; // 0xac (0x4)
	float RotationAngle; // 0xb0 (0x4)
	float RotationDuration; // 0xb4 (0x4)
	enum EFortCreativeLinearMoverRotationDirection RotationDirection; // 0xb8 (0x1)
	enum EFortCreativeLinearMoverMovementCompleteBehavior TranslationCompleteBehavior; // 0xb9 (0x1)
	enum EFortCreativeLinearMoverMovementCompleteBehavior RotationCompleteBehavior; // 0xba (0x1)
	enum EFortCreativeLinearMoverRotationAxis RotationAxis; // 0xbb (0x1)
	enum EFortCreativeLinearMoverTranslationType TranslationType; // 0xbc (0x1)
	enum EFortCreativeLinearMoverMode MovementMode; // 0xbd (0x1)
	unsigned char unreflected_be[0x2]; // 0xbe (0x2) 
	class ABuildingActor* PendingTarget; // 0xc0 (0x8)
	struct TWeakObjectPtr<class ABuildingActor> Target; // 0xc8 (0x8)
	class AFortVolume* CurrentIslandVolume; // 0xd0 (0x8)
	struct FFortCreativeLinearMoverTranslationMovementData TranslationMovementData; // 0xd8 (0x40)
	struct FFortCreativeLinearMoverRotationMovementData RotationMovementData; // 0x118 (0x40)
	struct TArray<class AActor*> ActorsToIgnoreDuringMovement; // 0x158 (0x10)
	bool bSweepOnTranslation; // 0x168 (0x1)
	bool bPerformOverlapsOnTranslation; // 0x169 (0x1)
	bool bAllDevicesTargetable; // 0x16a (0x1)
	unsigned char unreflected_16b[0x5]; // 0x16b (0x5) 
	struct FVector OriginalActorLocation; // 0x170 (0x18)
	struct FRotator OriginalActorRotation; // 0x188 (0x18)
	enum EFortCreativeLinearMoverTranslationType OriginalTranslationType; // 0x1a0 (0x1)
	enum EFortCreativeLinearMoverRotationDirection OriginalRotationDirection; // 0x1a1 (0x1)
	bool bEnableMusicSequencerBehavior; // 0x1a2 (0x1)
	bool bSkipTranslationCompleteBehavior; // 0x1a3 (0x1)
	bool bSkipRotationCompleteBehavior; // 0x1a4 (0x1)
	unsigned char unreflected_1a5[0x3]; // 0x1a5 (0x3) 
	class UFortNavModifierComponent* CachedNavModifierComponent; // 0x1a8 (0x8)
	unsigned char padding_1b0[0x58]; // 0x1b0 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.TranslateTo (Underlying native function: TranslateTo 0x8783888)
	void TranslateTo(struct FVector& TargetLocation, bool& bTeleport); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.Translate (Underlying native function: Translate 0x71a6cc4)
	void Translate(bool& bTeleport); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.StopTranslation (Underlying native function: StopTranslation 0x26daa0c)
	void StopTranslation(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.StopRotation (Underlying native function: StopRotation 0x26daa0c)
	void StopRotation(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.SetTranslationType (Underlying native function: SetTranslationType 0x8785338)
	void SetTranslationType(enum EFortCreativeLinearMoverTranslationType& InTranslationType, class AController*& Instigator); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.SetRotationDirection (Underlying native function: SetRotationDirection 0x8785274)
	void SetRotationDirection(enum EFortCreativeLinearMoverRotationDirection& InRotationDirection, class AController*& Instigator); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.RotateTo (Underlying native function: RotateTo 0x8783888)
	void RotateTo(struct FRotator& TargetRotation, bool& bTeleport); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.Rotate (Underlying native function: Rotate 0x71a6cc4)
	void Rotate(bool& bTeleport); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.ResetTranslation (Underlying native function: ResetTranslation 0x26daa0c)
	void ResetTranslation(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.ResetRotation (Underlying native function: ResetRotation 0x26daa0c)
	void ResetRotation(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.ResetActorsToIgnoreDuringMovement (Underlying native function: ResetActorsToIgnoreDuringMovement 0x52f5710)
	void ResetActorsToIgnoreDuringMovement(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.OnRep_TranslationMovementData (Underlying native function: OnRep_TranslationMovementData 0x8783008)
	void OnRepTranslationMovementData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.OnRep_Target (Underlying native function: OnRep_Target 0x8782f88)
	void OnRepTarget(struct TWeakObjectPtr<class ABuildingActor>& OldTarget); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.OnRep_RotationMovementData (Underlying native function: OnRep_RotationMovementData 0x8782f68)
	void OnRepRotationMovementData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.OnRep_ActorsToIgnoreDuringMovement (Underlying native function: OnRep_ActorsToIgnoreDuringMovement 0x5d2ce40)
	void OnRepActorsToIgnoreDuringMovement(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.OnMinigamePlayModeChanged (Underlying native function: OnMinigamePlayModeChanged 0x70dc11c)
	void OnMinigamePlayModeChanged(class AFortMinigame*& Minigame, bool& bIsInPlayMode); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.OnEnabledStateChanged (Underlying native function: OnEnabledStateChanged 0x71a6cc4)
	void OnEnabledStateChanged(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// SparseDelegateFunction /Script/FortniteGame.FortCreativeLinearMoverComponent.OnCreativeLinearMoverTranslationTypeChangedSignature__DelegateSignature (Has no native function)
	void OnCreativeLinearMoverTranslationTypeChangedSignatureDelegateSignature(class UFortCreativeLinearMoverComponent*& CreativeLinearMoverComponent, enum EFortCreativeLinearMoverTranslationType& TranslationType, class AController*& Instigator); // (MulticastDelegate | Public | Delegate)

	// SparseDelegateFunction /Script/FortniteGame.FortCreativeLinearMoverComponent.OnCreativeLinearMoverTargetCollisionSignature__DelegateSignature (Has no native function)
	void OnCreativeLinearMoverTargetCollisionSignatureDelegateSignature(class UFortCreativeLinearMoverComponent*& CreativeLinearMoverComponent, class AActor*& TargetActor, class AActor*& OtherActor); // (MulticastDelegate | Public | Delegate)

	// SparseDelegateFunction /Script/FortniteGame.FortCreativeLinearMoverComponent.OnCreativeLinearMoverStartedSignature__DelegateSignature (Has no native function)
	void OnCreativeLinearMoverStartedSignatureDelegateSignature(class UFortCreativeLinearMoverComponent*& CreativeLinearMoverComponent); // (MulticastDelegate | Public | Delegate)

	// SparseDelegateFunction /Script/FortniteGame.FortCreativeLinearMoverComponent.OnCreativeLinearMoverRotationDirectionChangedSignature__DelegateSignature (Has no native function)
	void OnCreativeLinearMoverRotationDirectionChangedSignatureDelegateSignature(class UFortCreativeLinearMoverComponent*& CreativeLinearMoverComponent, enum EFortCreativeLinearMoverRotationDirection& RotationDirection, class AController*& Instigator); // (MulticastDelegate | Public | Delegate)

	// SparseDelegateFunction /Script/FortniteGame.FortCreativeLinearMoverComponent.OnCreativeLinearMoverInterruptedSignature__DelegateSignature (Has no native function)
	void OnCreativeLinearMoverInterruptedSignatureDelegateSignature(class UFortCreativeLinearMoverComponent*& CreativeLinearMoverComponent); // (MulticastDelegate | Public | Delegate)

	// SparseDelegateFunction /Script/FortniteGame.FortCreativeLinearMoverComponent.OnCreativeLinearMoverFinishedSignature__DelegateSignature (Has no native function)
	void OnCreativeLinearMoverFinishedSignatureDelegateSignature(class UFortCreativeLinearMoverComponent*& CreativeLinearMoverComponent); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.GetNearestOverlappingBuildingActor (Underlying native function: GetNearestOverlappingBuildingActor 0x877fd30)
	class ABuildingActor* GetNearestOverlappingBuildingActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.ComponentHit (Underlying native function: ComponentHit 0x5d2c2b0)
	void ComponentHit(class UPrimitiveComponent*& HitComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Final | Native | Private | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortCreativeLinearMoverComponent.AddActorToIgnoreDuringMovement (Underlying native function: AddActorToIgnoreDuringMovement 0x5d2bd50)
	void AddActorToIgnoreDuringMovement(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)
};

