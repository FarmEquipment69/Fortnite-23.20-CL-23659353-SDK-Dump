// Class /Script/FortniteGame.FrontendAnimInstance
// Size: 0x8f0
class UFrontendAnimInstance : public UFortBaseAnimInstance
{
	unsigned char unreflected_430[0x8]; // 0x430 (0x8) 
	bool bIsSkydiving; // 0x438 (0x1)
	bool bIsSkydiveDiving; // 0x439 (0x1)
	unsigned char unreflected_43a[0x2]; // 0x43a (0x2) 
	float ContrailDiveFactor; // 0x43c (0x4)
	bool bEnableHandIK; // 0x440 (0x1)
	bool bIsPlayingEmote; // 0x441 (0x1)
	bool bIsBodyTypeManuallySet; // 0x442 (0x1)
	unsigned char unreflected_443[0x1]; // 0x443 (0x1) 
	unsigned char bLookingAtBackpack; // 0x444 (0x1)
	unsigned char bIsRebirth; // 0x444 (0x1)
	unsigned char unreflected_445[0x3]; // 0x445 (0x3) 
	struct FFortAnimInput_PelvisAdjustment PelvisAdjustmentInput; // 0x448 (0x50)
	struct FFortAnimInput_HandIK HandIKInput; // 0x498 (0x1c)
	enum EFortPlayerAnimBodyType AnimBodyType; // 0x4b4 (0x1)
	unsigned char unreflected_4b5[0x3]; // 0x4b5 (0x3) 
	struct FFortAnimInput_Facial* FacialInput; // 0x4b8 (0x8)
	struct FFortAnimInput_RandomizeMontageSection RandomizeMontageSectionInput; // 0x4c0 (0x18)
	float HandIKRetargetingWeight; // 0x4d8 (0x4)
	float RightHandIKAlpha; // 0x4dc (0x4)
	float LeftHandIKAlpha; // 0x4e0 (0x4)
	float IdlePelvisOffsetAlpha; // 0x4e4 (0x4)
	struct FVector IdlePelvisOffset; // 0x4e8 (0x18)
	float EmoteHipOffsetAlpha; // 0x500 (0x4)
	float EmoteHipOffsetInterpSpeed; // 0x504 (0x4)
	class AFortPlayerPawn* FortPlayerPawn; // 0x508 (0x8)
	struct TEnumAsByte<EFortDisplayGender> Gender; // 0x510 (0x1)
	unsigned char unreflected_511[0x7]; // 0x511 (0x7) 
	class UAnimMontage* IntroAnimationFemale; // 0x518 (0x8)
	class UAnimMontage* IntroAnimationMale; // 0x520 (0x8)
	class UAnimMontage* OutroAnimationFemale; // 0x528 (0x8)
	class UAnimMontage* OutroAnimationMale; // 0x530 (0x8)
	class UAnimMontage* SelectedAnimationFemale; // 0x538 (0x8)
	class UAnimMontage* SelectedAnimationMale; // 0x540 (0x8)
	unsigned char bCanPlayCustomAnimations; // 0x548 (0x1)
	unsigned char bDontCrossArms; // 0x548 (0x1)
	unsigned char bNoHandsOnHips; // 0x548 (0x1)
	unsigned char unreflected_549[0x7]; // 0x549 (0x7) 
	struct FGameplayTagAnimations GameplayTagAnimations; // 0x550 (0x10)
	struct FGameplayTagAnimations FemaleGameplayTagAnimations; // 0x560 (0x10)
	struct FGameplayTagAnimations MaleGameplayTagAnimations; // 0x570 (0x10)
	unsigned char unreflected_580[0x10]; // 0x580 (0x10) 
	struct FFortAnimInput_StandingPawnAnimAsset CurrentAnimSet; // 0x590 (0x28)
	struct FFortAnimInput_StandingPawnAnimAsset DefaultAnimSetMale; // 0x5b8 (0x28)
	struct FFortAnimInput_StandingPawnAnimAsset DefaultAnimSetFemale; // 0x5e0 (0x28)
	struct FFortAnimInput_PlayerGliderAnimAsset CurrentGliderAnimSet; // 0x608 (0x268)
	struct FFortAnimInput_Skydiving Skydiving; // 0x870 (0x78)
	unsigned char padding_8e8[0x8]; // 0x8e8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FrontendAnimInstance.ShouldHidePropsDuringBlend (Underlying native function: ShouldHidePropsDuringBlend 0x8a08f5c)
	bool ShouldHidePropsDuringBlend(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FrontendAnimInstance.PlaySelected (Underlying native function: PlaySelected 0x8a08680)
	void PlaySelected(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FrontendAnimInstance.PlayOutro (Underlying native function: PlayOutro 0x8a08630)
	void PlayOutro(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FrontendAnimInstance.PlayIntro (Underlying native function: PlayIntro 0x8a085e0)
	void PlayIntro(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FrontendAnimInstance.OnPlayMontageFromGameplayTagQuery (Has no native function)
	void OnPlayMontageFromGameplayTagQuery(struct FGameplayTagQuery& MatchingQuery, class UAnimMontage*& MontagePlaying); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FrontendAnimInstance.OnFocusedItemChanged (Has no native function)
	void OnFocusedItemChanged(class UFortItemDefinition*& FocusedItem, class AFortWeapon*& EquippedWeapon, class AFortPlayerParachute*& CurrentParachute); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FrontendAnimInstance.IsInLobby (Underlying native function: IsInLobby 0x8a07d9c)
	bool IsInLobby(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FrontendAnimInstance.GetGender (Underlying native function: GetGender 0x8a06930)
	struct TEnumAsByte<EFortDisplayGender> GetGender(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FrontendAnimInstance.AnimNotify_PlayFireFX (Underlying native function: AnimNotify_PlayFireFX 0x8a05a04)
	void AnimNotifyPlayFireFX(class UAnimNotify*& Notify); // (Final | Native | Public)
};

