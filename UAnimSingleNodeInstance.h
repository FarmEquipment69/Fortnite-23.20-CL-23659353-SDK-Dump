// Class /Script/Engine.AnimSingleNodeInstance
// Size: 0x360
class UAnimSingleNodeInstance : public UAnimInstance
{
	class UAnimationAsset* CurrentAsset; // 0x348 (0x8)
	struct FDelegate PostEvaluateAnimEvent; // 0x350 (0xc)
	unsigned char padding_35c[0x4]; // 0x35c (0x4)

	/* Functions */

	// Function /Script/Engine.AnimSingleNodeInstance.StopAnim (Underlying native function: StopAnim 0x9c7e660)
	void StopAnim(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetReverse (Underlying native function: SetReverse 0x9c7e314)
	void SetReverse(bool& bInReverse); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetPreviewCurveOverride (Underlying native function: SetPreviewCurveOverride 0x9c7e1f8)
	void SetPreviewCurveOverride(struct FName& PoseName, float& Value, bool& bRemoveIfZero); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetPositionWithPreviousTime (Underlying native function: SetPositionWithPreviousTime 0x9c7e0fc)
	void SetPositionWithPreviousTime(float& InPosition, float& InPreviousTime, bool& bFireNotifies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetPosition (Underlying native function: SetPosition 0x9c7e030)
	void SetPosition(float& InPosition, bool& bFireNotifies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetPlayRate (Underlying native function: SetPlayRate 0x9c7df2c)
	void SetPlayRate(float& InPlayRate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetPlaying (Underlying native function: SetPlaying 0x9c7dfb0)
	void SetPlaying(bool& bIsPlaying); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetMirrorDataTable (Underlying native function: SetMirrorDataTable 0x9c7de70)
	void SetMirrorDataTable(class UMirrorDataTable*& MirrorDataTable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetLooping (Underlying native function: SetLooping 0x9c7ddf0)
	void SetLooping(bool& bIsLooping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetBlendSpacePosition (Underlying native function: SetBlendSpacePosition 0x9c7dd10)
	void SetBlendSpacePosition(struct FVector& InPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetAnimationAsset (Underlying native function: SetAnimationAsset 0x9c7dc0c)
	void SetAnimationAsset(class UAnimationAsset*& NewAsset, bool& bIsLooping, float& InPlayRate); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.PlayAnim (Underlying native function: PlayAnim 0x9c7db00)
	void PlayAnim(bool& bIsLooping, float& InPlayRate, float& InStartPosition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.GetMirrorDataTable (Underlying native function: GetMirrorDataTable 0x9c7d7e4)
	class UMirrorDataTable* GetMirrorDataTable(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.GetLength (Underlying native function: GetLength 0x9c7d7bc)
	float GetLength(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.GetAnimationAsset (Underlying native function: GetAnimationAsset 0x9c7d4b8)
	class UAnimationAsset* GetAnimationAsset(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

