// Class /Script/FortniteGame.FortSoundIndicatorComponent
// Size: 0x148
class UFortSoundIndicatorComponent : public UActorComponent
{
	bool bStartLoopingOnBeginPlay; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	float UpdateFrequency; // 0xa4 (0x4)
	enum EFortSoundIndicatorTypes DefaultSoundIndicatorType; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x7]; // 0xa9 (0x7) 
	struct TArray<struct FSoundIndicatorTypePicker> SoundIndicatorTypeOverrides; // 0xb0 (0x10)
	class UTexture* DefaultIconOverride; // 0xc0 (0x8)
	struct TArray<struct FSoundIndicatorIconPicker> IconOverrides; // 0xc8 (0x10)
	struct FLinearColor DefaultTintOverride; // 0xd8 (0x10)
	class USoundBase* DefaultSoundLinkedToIndicator; // 0xe8 (0x8)
	bool bUseAttenuationSettingsForMaxDistance; // 0xf0 (0x1)
	unsigned char unreflected_f1[0x7]; // 0xf1 (0x7) 
	class USoundAttenuation* AttenuationSettingsLinkedToIndicator; // 0xf8 (0x8)
	float DefaultMaxVisibilityDistance; // 0x100 (0x4)
	struct TWeakObjectPtr<class APlayerState> RequestingPlayerState; // 0x104 (0x8)
	unsigned char unreflected_10c[0x2c]; // 0x10c (0x2c) 
	class USoundBase* SoundBeingPlayed; // 0x138 (0x8)
	unsigned char padding_140[0x8]; // 0x140 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortSoundIndicatorComponent.StopSoundIndicatorLooping (Underlying native function: StopSoundIndicatorLooping 0x1318ac4)
	void StopSoundIndicatorLooping(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSoundIndicatorComponent.StartSoundIndicatorLooping (Underlying native function: StartSoundIndicatorLooping 0x131894c)
	void StartSoundIndicatorLooping(struct FVector& InSoundLocation, class USoundBase*& InSoundBeingPlayed, float& InVolumeMultiplier, class APlayerState*& InRequestingPlayerState); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortSoundIndicatorComponent.ShowSoundIndicatorForDuration (Underlying native function: ShowSoundIndicatorForDuration 0x871bcb4)
	void ShowSoundIndicatorForDuration(struct FVector& InSoundLocation, class USoundBase*& InSoundBeingPlayed, float& InVolumeMultiplier, float& InDuration, class APlayerState*& InRequestingPlayerState); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortSoundIndicatorComponent.ShowSoundIndicator (Underlying native function: ShowSoundIndicator 0x234e4a8)
	void ShowSoundIndicator(struct FVector& InSoundLocation, class USoundBase*& InSoundBeingPlayed, float& InVolumeMultiplier, class APlayerState*& InRequestingPlayerState); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortSoundIndicatorComponent.RemoveSoundIndicatorIconOverride (Underlying native function: RemoveSoundIndicatorIconOverride 0x871b76c)
	void RemoveSoundIndicatorIconOverride(struct FSoundIndicatorIconPicker& IconOverride); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortSoundIndicatorComponent.InitializeDefaultValues (Underlying native function: InitializeDefaultValues 0x871a900)
	void InitializeDefaultValues(float& InUpdateFrequency, bool& bInStartLoopingOnBeginPlay, enum EFortSoundIndicatorTypes& InDefaultSoundIndicatorType, float& InDefaultMaxVisibilityDistance, class UTexture*& InDefaultIcon, struct FLinearColor& InDefaultTint, class USoundBase*& InDefaultSoundLinkedToIndicator); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortSoundIndicatorComponent.GetPreferredSoundIndicatorType (Underlying native function: GetPreferredSoundIndicatorType 0x871a5b0)
	enum EFortSoundIndicatorTypes GetPreferredSoundIndicatorType(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSoundIndicatorComponent.GetPreferredSoundIndicatorIcon (Underlying native function: GetPreferredSoundIndicatorIcon 0x871a588)
	class UTexture* GetPreferredSoundIndicatorIcon(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSoundIndicatorComponent.AddSoundIndicatorIconOverride (Underlying native function: AddSoundIndicatorIconOverride 0x87196d0)
	void AddSoundIndicatorIconOverride(struct FSoundIndicatorIconPicker& IconOverride); // (Final | Native | Protected | HasOutParms | BlueprintCallable)
};

