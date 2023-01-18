// Class /Script/RidingCodeRuntime.RidableComponent
// Size: 0x370
class URidableComponent : public UGameFrameworkComponent
{
	struct FMulticastInlineDelegate OnRiderStartedRiding; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnRiderStoppedRiding; // 0xb0 (0x10)
	class UClass* RiderAnimLayerOverlayClass; // 0xc0 (0x8)
	struct FName AttachSocket; // 0xc8 (0x4)
	unsigned char unreflected_cc[0x4]; // 0xcc (0x4) 
	struct FVector AttachLocationOffset; // 0xd0 (0x18)
	struct FRotator AttachRotationOffset; // 0xe8 (0x18)
	struct FName ClientAttachGuideSocket; // 0x100 (0x4)
	unsigned char unreflected_104[0x4]; // 0x104 (0x4) 
	struct FVector ClientAttachGuideLocationOffset; // 0x108 (0x18)
	struct FName RidablePropAttachSocket; // 0x120 (0x4)
	unsigned char unreflected_124[0x4]; // 0x124 (0x4) 
	struct FVector RidablePropAttachLocationOffset; // 0x128 (0x18)
	struct FRotator RidablePropAttachRotationOffset; // 0x140 (0x18)
	float RidablePropAttachScale; // 0x158 (0x4)
	float RidablePropAttachRiderVerticalBuffer; // 0x15c (0x4)
	struct FRidingAttachmentBoundsOverride RiderPropAttachBoundsOverride; // 0x160 (0x38)
	bool bOverrideNoiseGeneration; // 0x198 (0x1)
	unsigned char unreflected_199[0x3]; // 0x199 (0x3) 
	struct FFortPlayerPawnAthenaMovementNoiseOverride RiderMovementNoiseOverride; // 0x19c (0xc)
	struct FGameplayTag RidableTag; // 0x1a8 (0x4)
	struct FGameplayTag EnergyDepletedTag; // 0x1ac (0x4)
	struct FDataTableRowHandle PlaylistTagBlacklistRowHandle; // 0x1b0 (0x10)
	class URiderComponent* ActiveRider; // 0x1c0 (0x8)
	class URiderComponent* LastRider; // 0x1c8 (0x8)
	class USceneComponent* RidableProp; // 0x1d0 (0x8)
	float OriginalCapsuleRadius; // 0x1d8 (0x4)
	float OriginalCapsuleHalfHeight; // 0x1dc (0x4)
	float RidingCapsuleRadius; // 0x1e0 (0x4)
	float RidingCapsuleHalfHeight; // 0x1e4 (0x4)
	bool bOriginalClientPositionSmoothingThrottlingSetting; // 0x1e8 (0x1)
	unsigned char unreflected_1e9[0x7]; // 0x1e9 (0x7) 
	struct FScalableFloat MaxHalfAimingAngle; // 0x1f0 (0x28)
	struct TArray<struct FPrimaryFireAnimMontageAnimCoreTypeOverride> PrimaryFireMontageAnimCoreTypeOverrides; // 0x218 (0x10)
	struct TArray<struct FPrimaryFireAnimMontageTagOverride> PrimaryFireMontageTagOverrides; // 0x228 (0x10)
	struct FRidingPettingData PettingData; // 0x238 (0x108)
	struct FTimerHandle* RestoreCollisionHandle; // 0x340 (0x8)
	unsigned char unreflected_348[0x10]; // 0x348 (0x10) 
	bool bIsSprinting; // 0x358 (0x1)
	unsigned char padding_359[0x17]; // 0x359 (0x17)

	/* Functions */

	// Function /Script/RidingCodeRuntime.RidableComponent.ShouldCameraFocusOnRidable (Underlying native function: ShouldCameraFocusOnRidable 0x735d724)
	bool ShouldCameraFocusOnRidable(class URiderComponent*& Rider); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.RidableComponent.OnRep_ActiveRider (Underlying native function: OnRep_ActiveRider 0x2c00be8)
	void OnRepActiveRider(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.RidableComponent.IsSprinting (Underlying native function: IsSprinting 0x735d0cc)
	bool IsSprinting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.RidableComponent.IsFlying (Underlying native function: IsFlying 0x735d030)
	bool IsFlying(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.RidableComponent.IsBeingRidden (Underlying native function: IsBeingRidden 0x735d014)
	bool IsBeingRidden(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.RidableComponent.HandleRiderStoppedRiding (Underlying native function: HandleRiderStoppedRiding 0x709e37c)
	void HandleRiderStoppedRiding(class URiderComponent*& Rider); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.RidableComponent.HandleRiderStartedRiding (Underlying native function: HandleRiderStartedRiding 0x709e2f8)
	void HandleRiderStartedRiding(class URiderComponent*& Rider); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.RidableComponent.HandleRiderEndPlay (Underlying native function: HandleRiderEndPlay 0x735cbb0)
	void HandleRiderEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.RidableComponent.GetRidingEmoteCapsuleSize (Underlying native function: GetRidingEmoteCapsuleSize 0x735c484)
	void GetRidingEmoteCapsuleSize(class URiderComponent*& Rider, float& OriginalRadius, float& OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.RidableComponent.GetRidingCapsuleSize (Underlying native function: GetRidingCapsuleSize 0x735c2e8)
	void GetRidingCapsuleSize(class URiderComponent*& Rider, float& OriginalRadius, float& OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.RidableComponent.GetRidingAttachComponent (Underlying native function: GetRidingAttachComponent 0x735c2c0)
	class USceneComponent* GetRidingAttachComponent(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.RidableComponent.GetPettingData (Underlying native function: GetPettingData 0x735c2a4)
	struct FRidingPettingData GetPettingData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.RidableComponent.CheatSetStaminaPercent (Has no native function)
	void CheatSetStaminaPercent(float& StaminaPercent); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.RidableComponent.CanRiderPlayEmote (Underlying native function: CanRiderPlayEmote 0x735be50)
	bool CanRiderPlayEmote(class URiderComponent*& Rider); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.RidableComponent.CanBeRiddenBP (Underlying native function: CanBeRiddenBP 0x735bdbc)
	bool CanBeRiddenBP(class URiderComponent*& Rider); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.RidableComponent.CanBePet (Underlying native function: CanBePet 0x735bd28)
	bool CanBePet(class URiderComponent*& Rider); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

