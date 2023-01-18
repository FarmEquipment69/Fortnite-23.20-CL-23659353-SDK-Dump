// BlueprintGeneratedClass /Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C
// Size: 0xd8
class UNPC_VoiceComponent_C : public UFortAIComponent_Voice
{
	class UFortTaggedSoundBank* DeprecatedBPSoundBank; // 0xa8 (0x8)
	class USceneComponent* AttachComponent; // 0xb0 (0x8)
	double TriggerTimeThreshold; // 0xb8 (0x8)
	double LastTriggerTime; // 0xc0 (0x8)
	class UAudioComponent* AudioComponent; // 0xc8 (0x8)
	class USoundEffectSourcePresetChain* SourceChainToApply; // 0xd0 (0x8)

	/* Functions */

	// Function /Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C.PlaySoundCue (Has no native function)
	void PlaySoundCue(class USoundCue*& SoundToPlay, class UAudioComponent*& AudioComponent, bool& Success, bool& CallFuncIsValidReturnValue, class AActor*& CallFuncGetOwnerReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C.SetSourceEffectChainToApply (Has no native function)
	void SetSourceEffectChainToApply(class USoundEffectSourcePresetChain*& SourceEffectChain); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C.Internal Get Voice Sound Bank (Has no native function)
	void InternalGetVoiceSoundBank(class UFortTaggedSoundBank*& SoundBank, class UFortTaggedSoundBank*& CallFuncGetVoiceSoundBankReturnValue, bool& CallFuncIsValidReturnValue); // (Private | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C.Deprecated Set Sound Bank (Has no native function)
	void DeprecatedSetSoundBank(class UFortTaggedSoundBank*& SoundBank); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C.PlayVoiceLine (Has no native function)
	void PlayVoiceLine(struct FGameplayTag& GameplayTag, class UAudioComponent*& AudioComponent, bool& Success, class USoundBase*& SoundToPlay, struct FGameplayTag& CurrentVOTag, class UFortTaggedSoundBank*& SoundBankToUse, class AActor*& CallFuncGetOwnerReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, class UFortTaggedSoundBank*& CallFuncInternalGetVoiceSoundBankSoundBank, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsGameplayTagValidReturnValue, double& CallFuncGetTimeSecondsReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue, struct FGameplayTagContainer& CallFuncMakeGameplayTagContainerFromTagReturnValue, double& CallFuncGetTimeSecondsReturnValue1, class USoundBase*& CallFuncGetSoundToPlayReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)
};

