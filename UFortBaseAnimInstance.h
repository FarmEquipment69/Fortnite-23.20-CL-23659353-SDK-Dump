// Class /Script/FortniteGame.FortBaseAnimInstance
// Size: 0x430
class UFortBaseAnimInstance : public UAnimInstance
{
	struct TArray<class UFortAnimInputEvent*> AnimInputEventList; // 0x350 (0x10)
	struct TMap<struct FGameplayTag, struct FBoneSet> BoneSets; // 0x360 (0x50)
	struct TArray<struct FAnimTagProperty> AnimPropertyGameplayTagBindings; // 0x3b0 (0x10)
	struct FMulticastInlineDelegate OnGameplayTagNotifyBegin; // 0x3c0 (0x10)
	struct FMulticastInlineDelegate OnGameplayTagNotifyEnd; // 0x3d0 (0x10)
	unsigned char padding_3e0[0x50]; // 0x3e0 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortBaseAnimInstance.TryGetFortPawn (Underlying native function: TryGetFortPawn 0x8236270)
	class AFortPawn* TryGetFortPawn(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortBaseAnimInstance.BlueprintProcessAnimInputEvent (Has no native function)
	void BlueprintProcessAnimInputEvent(class UFortAnimInputEvent*& AnimInputEvent); // (Event | Protected | BlueprintEvent)
};

