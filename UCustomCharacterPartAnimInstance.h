// Class /Script/FortniteGame.CustomCharacterPartAnimInstance
// Size: 0x6f0
class UCustomCharacterPartAnimInstance : public UFortAnimInstance
{
	unsigned char unreflected_530[0x8]; // 0x530 (0x8) 
	struct FMulticastInlineDelegate CharacterCustomizationFinished; // 0x538 (0x10)
	class AFortWeapon* CurrentWeapon; // 0x548 (0x8)
	unsigned char bUsesDayPhaseChange; // 0x550 (0x1)
	unsigned char bIgnoreSignificanceManagerAndAlwaysTick; // 0x550 (0x1)
	unsigned char bHideUntilFirstAnimationUpdate; // 0x550 (0x1)
	unsigned char bUnhideOnNextUpdate; // 0x550 (0x1)
	unsigned char bCanPlayCustomAnimations; // 0x550 (0x1)
	unsigned char bUpdateOwnerAnimInputProperty; // 0x550 (0x1)
	unsigned char bIsRiding; // 0x550 (0x1)
	unsigned char bIsSkydiving; // 0x550 (0x1)
	unsigned char bIsParachuteOpened; // 0x551 (0x1)
	unsigned char bIsSkydiveDiveMode; // 0x551 (0x1)
	unsigned char bIsSkydiveFloating; // 0x551 (0x1)
	unsigned char bIsCrouching; // 0x551 (0x1)
	unsigned char bIsSprinting; // 0x551 (0x1)
	unsigned char bIsAccelerating2D; // 0x551 (0x1)
	unsigned char bIsMoving2D; // 0x551 (0x1)
	unsigned char bIsBackpedaling; // 0x551 (0x1)
	unsigned char bIsUsingJetpack; // 0x552 (0x1)
	unsigned char unreflected_553[0x1]; // 0x553 (0x1) 
	bool bGoopJumpExecuted; // 0x554 (0x1)
	unsigned char unreflected_555[0x3]; // 0x555 (0x3) 
	unsigned char bIsSlopeSliding; // 0x558 (0x1)
	unsigned char bIsSurfaceSwimming; // 0x558 (0x1)
	unsigned char bIsWaterJump; // 0x558 (0x1)
	unsigned char bIsSwimSprinting; // 0x558 (0x1)
	unsigned char bIsPlayingEmote; // 0x558 (0x1)
	unsigned char bIsPlayingMeleeAnim; // 0x558 (0x1)
	unsigned char bIsPlayingFullBodySlotInFrontEnd; // 0x558 (0x1)
	unsigned char bIsInFrontEnd; // 0x558 (0x1)
	unsigned char bIsInVehicle; // 0x559 (0x1)
	unsigned char bIsValetDriver; // 0x559 (0x1)
	unsigned char bIsValetPassenger; // 0x559 (0x1)
	unsigned char bIsInShoppingCart; // 0x559 (0x1)
	unsigned char bIsInCannon; // 0x559 (0x1)
	unsigned char bIsTargeting; // 0x559 (0x1)
	unsigned char bIsTargetingConsumableThrow; // 0x559 (0x1)
	unsigned char bIsCrouchSprinting; // 0x559 (0x1)
	unsigned char bIsDBNO; // 0x55a (0x1)
	unsigned char unreflected_55b[0x1]; // 0x55b (0x1) 
	unsigned char bIsOnGround; // 0x55c (0x1)
	unsigned char unreflected_55d[0x3]; // 0x55d (0x3) 
	unsigned char bIsLandingPredicted; // 0x560 (0x1)
	unsigned char bIsInVehicleSeat; // 0x560 (0x1)
	unsigned char bVehicleSeatForcesCrouch; // 0x560 (0x1)
	unsigned char bIsFerretVehicleDriver; // 0x560 (0x1)
	unsigned char bIsFerretVehiclePassenger; // 0x560 (0x1)
	unsigned char bIsGolfCartVehicleDriver; // 0x560 (0x1)
	unsigned char bIsGolfCartVehicleFrontPassenger; // 0x560 (0x1)
	unsigned char bIsGolfCartVehicleBackPassenger; // 0x560 (0x1)
	unsigned char bIsAntelopeVehicleDriver; // 0x561 (0x1)
	unsigned char bIsAntelopeVehiclePassenger; // 0x561 (0x1)
	unsigned char bIsMotorcycleDriver; // 0x561 (0x1)
	unsigned char bIsMotorcyclePassenger; // 0x561 (0x1)
	unsigned char bHasMotorcyclePassenger; // 0x561 (0x1)
	unsigned char bIsJackalVehicleDriver; // 0x561 (0x1)
	unsigned char bIsOctopusVehicleDriver; // 0x561 (0x1)
	unsigned char bIsOstrichVehicleDriver; // 0x561 (0x1)
	unsigned char bIsOstrichVehicleGunner; // 0x562 (0x1)
	unsigned char bIsMeatballDriver; // 0x562 (0x1)
	unsigned char bIsMeatballPassenger; // 0x562 (0x1)
	unsigned char bIsDBNOCarrying; // 0x562 (0x1)
	unsigned char bIsDBNOCarried; // 0x562 (0x1)
	unsigned char bIsTacticalSprinting; // 0x562 (0x1)
	unsigned char bOverrideRBANSimSpaceInFrontEnd; // 0x562 (0x1)
	unsigned char unreflected_563[0x1]; // 0x563 (0x1) 
	enum ESlotEnvironmentExposure VehicleSlotExposure; // 0x564 (0x1)
	unsigned char unreflected_565[0x3]; // 0x565 (0x3) 
	struct FGameplayTagAnimations GameplayTagAnimations; // 0x568 (0x10)
	float CrouchingWithRigidBodyEnabled; // 0x578 (0x4)
	float RidingSpeed2D; // 0x57c (0x4)
	int CurrentLOD; // 0x580 (0x4)
	unsigned char unreflected_584[0x4]; // 0x584 (0x4) 
	struct FFortAnimInput_SkydivingExternalForce SkydivingExternalForceInput; // 0x588 (0xe8)
	struct FFortAnimInput_SlopeInfo SlopeInfoInput; // 0x670 (0x60)
	enum EGliderType PlayerGliderType; // 0x6d0 (0x1)
	unsigned char unreflected_6d1[0x3]; // 0x6d1 (0x3) 
	unsigned char bRegisteredForDayPhaseChange; // 0x6d4 (0x1)
	unsigned char unreflected_6d5[0x3]; // 0x6d5 (0x3) 
	struct TEnumAsByte<EFortCustomPartType> PartType; // 0x6d8 (0x1)
	unsigned char unreflected_6d9[0x3]; // 0x6d9 (0x3) 
	struct TWeakObjectPtr<class USkeletalMeshComponent> OwnerSkeletalMeshComponent; // 0x6dc (0x8)
	unsigned char padding_6e4[0xc]; // 0x6e4 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.PreDestruction (Has no native function)
	void PreDestruction(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.PickaxeItemDefinitionHasAnyMetaTag (Underlying native function: PickaxeItemDefinitionHasAnyMetaTag 0x8815c18)
	bool PickaxeItemDefinitionHasAnyMetaTag(struct TArray<struct FGameplayTag>& Tags, bool& bRequiresEquipped); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnWeaponChanged (Has no native function)
	void OnWeaponChanged(); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnPlayMontageFromGameplayTagQuery (Has no native function)
	void OnPlayMontageFromGameplayTagQuery(struct FGameplayTagQuery& MatchingQuery, class UAnimMontage*& MontagePlaying); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnParachuteOpened (Has no native function)
	void OnParachuteOpened(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnParachuteClosed (Has no native function)
	void OnParachuteClosed(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnNotifyPartsStopped (Has no native function)
	void OnNotifyPartsStopped(struct FName& Context); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnNotifyPartsStarted (Has no native function)
	void OnNotifyPartsStarted(struct FName& Context); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnEndTargeting (Has no native function)
	void OnEndTargeting(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnEndSliding (Has no native function)
	void OnEndSliding(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnEndSkydiving (Has no native function)
	void OnEndSkydiving(); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnEndPlayingEmote (Has no native function)
	void OnEndPlayingEmote(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnEndKneeSliding (Has no native function)
	void OnEndKneeSliding(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnEndJumping (Has no native function)
	void OnEndJumping(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnEndFalling (Has no native function)
	void OnEndFalling(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnEndCrouching (Has no native function)
	void OnEndCrouching(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnEndBaseballSliding (Has no native function)
	void OnEndBaseballSliding(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnDayPhaseChanged (Has no native function)
	void OnDayPhaseChanged(enum EFortDayPhase& CurrentDayPhase, enum EFortDayPhase& PreviousDayPhase, bool& bAtCreation); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnCharacterCustomizationLoaded (Has no native function)
	void OnCharacterCustomizationLoaded(class USkeletalMeshComponent*& CustomBaseMesh, struct TArray<class UCustomCharacterPart*>& CustomParts, struct TArray<class USkeletalMeshComponentBudgeted*>& CustomMeshParts); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnBeginTargeting (Has no native function)
	void OnBeginTargeting(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnBeginSliding (Has no native function)
	void OnBeginSliding(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnBeginSkydiving (Has no native function)
	void OnBeginSkydiving(); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnBeginPlayingEmote (Has no native function)
	void OnBeginPlayingEmote(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnBeginKneeSliding (Has no native function)
	void OnBeginKneeSliding(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnBeginJumping (Has no native function)
	void OnBeginJumping(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnBeginFalling (Has no native function)
	void OnBeginFalling(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnBeginCrouching (Has no native function)
	void OnBeginCrouching(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.OnBeginBaseballSliding (Has no native function)
	void OnBeginBaseballSliding(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.MakeWaveVector (Underlying native function: MakeWaveVector 0x88159b0)
	struct FVector MakeWaveVector(struct FRotator& Amplitudes, struct FRotator& Frequencies, struct FRotator& Offsets, bool& bUseNoise, struct FVector& min, struct FVector& max); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.MakeWaveScalar (Underlying native function: MakeWaveScalar 0x8815810)
	float MakeWaveScalar(float& Amplitude, float& Frequency, float& Offset, bool& bUseNoise, struct FVector2D& MinMax); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.MakeWaveRotator (Underlying native function: MakeWaveRotator 0x88155a8)
	struct FRotator MakeWaveRotator(struct FRotator& Amplitudes, struct FRotator& Frequencies, struct FRotator& Offsets, bool& bUseNoise, struct FVector& min, struct FVector& max); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.GliderItemDefinitionHasAnyMetaTag (Underlying native function: GliderItemDefinitionHasAnyMetaTag 0x8815494)
	bool GliderItemDefinitionHasAnyMetaTag(struct TArray<struct FGameplayTag>& Tags, bool& bRequiresOpened); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.GetPartSkeletalMeshComponent (Underlying native function: GetPartSkeletalMeshComponent 0x2225dac)
	class USkeletalMeshComponent* GetPartSkeletalMeshComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.GetOwnerZVelocity (Underlying native function: GetOwnerZVelocity 0x2d014a4)
	float GetOwnerZVelocity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.GetOwnerSkeletalMeshComponent (Underlying native function: GetOwnerSkeletalMeshComponent 0x179893c)
	class USkeletalMeshComponent* GetOwnerSkeletalMeshComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.GetOwnerGender (Underlying native function: GetOwnerGender 0x881543c)
	struct TEnumAsByte<EFortCustomGender> GetOwnerGender(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.GetOwnerFrontEndAnimInstance (Underlying native function: GetOwnerFrontEndAnimInstance 0x88153f0)
	class UFrontendAnimInstance* GetOwnerFrontEndAnimInstance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.GetOwnerFortPlayerAnimInstance (Underlying native function: GetOwnerFortPlayerAnimInstance 0x2e074c8)
	class UFortPlayerAnimInstance* GetOwnerFortPlayerAnimInstance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.GetOwnerDirection (Underlying native function: GetOwnerDirection 0x88153c8)
	float GetOwnerDirection(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.GetOwnerAnimationComponent (Underlying native function: GetOwnerAnimationComponent 0x5d3ccb0)
	class UFortPlayerAnimationComponent* GetOwnerAnimationComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.GetCharacterPartType (Underlying native function: GetCharacterPartType 0x8815078)
	struct TEnumAsByte<EFortCustomPartType> GetCharacterPartType(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.GetAssociatedPlayerPawn (Underlying native function: GetAssociatedPlayerPawn 0x881503c)
	class AFortPlayerPawn* GetAssociatedPlayerPawn(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.FindChildCommponentFromAttachSocket (Underlying native function: FindChildCommponentFromAttachSocket 0x8814eb8)
	class USkeletalMeshComponent* FindChildCommponentFromAttachSocket(class USkeletalMeshComponent*& Parent, bool& bIncludeAllDescendants, struct FName& AttachSocket); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.CheckForTail (Underlying native function: CheckForTail 0x8814d88)
	void CheckForTail(bool& bHasTail); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.CheckForBackbling (Underlying native function: CheckForBackbling 0x8814c00)
	void CheckForBackbling(bool& bIsWearingBackbling, bool& bIsBackblingACape, bool& bIsBackblingLong, float& LongBackblingThreshold); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.CharacterItemDefinitionHasAnyMetaTag (Underlying native function: CharacterItemDefinitionHasAnyMetaTag 0x8814b54)
	bool CharacterItemDefinitionHasAnyMetaTag(struct TArray<struct FGameplayTag>& Tags); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance.BackpackItemDefinitionHasAnyMetaTag (Underlying native function: BackpackItemDefinitionHasAnyMetaTag 0x8814aa8)
	bool BackpackItemDefinitionHasAnyMetaTag(struct TArray<struct FGameplayTag>& Tags); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

