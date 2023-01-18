// Class /Script/Engine.FXSystemComponent
// Size: 0x540
class UFXSystemComponent : public UPrimitiveComponent
{

	/* Functions */

	// Function /Script/Engine.FXSystemComponent.SetVectorParameter (Underlying native function: SetVectorParameter 0xfaf9d4)
	void SetVectorParameter(struct FName& ParameterName, struct FVector& Param); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetUseAutoManageAttachment (Underlying native function: SetUseAutoManageAttachment 0x22724ec)
	void SetUseAutoManageAttachment(bool& bAutoManage); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetIntParameter (Underlying native function: SetIntParameter 0x2877010)
	void SetIntParameter(struct FName& ParameterName, int& Param); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetFloatParameter (Underlying native function: SetFloatParameter 0x136e2bc)
	void SetFloatParameter(struct FName& ParameterName, float& Param); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetEmitterEnable (Underlying native function: SetEmitterEnable 0x9c10488)
	void SetEmitterEnable(struct FName& EmitterName, bool& bNewEnableState); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetColorParameter (Underlying native function: SetColorParameter 0xfae710)
	void SetColorParameter(struct FName& ParameterName, struct FLinearColor& Param); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetBoolParameter (Underlying native function: SetBoolParameter 0x219dfe0)
	void SetBoolParameter(struct FName& ParameterName, bool& Param); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetAutoAttachmentParameters (Underlying native function: SetAutoAttachmentParameters 0x23c2548)
	void SetAutoAttachmentParameters(class USceneComponent*& Parent, struct FName& SocketName, enum EAttachmentRule& LocationRule, enum EAttachmentRule& RotationRule, enum EAttachmentRule& ScaleRule); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.SetActorParameter (Underlying native function: SetActorParameter 0x9c0fadc)
	void SetActorParameter(struct FName& ParameterName, class AActor*& Param); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.ReleaseToPool (Underlying native function: ReleaseToPool 0x9c0fac4)
	void ReleaseToPool(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.FXSystemComponent.GetFXSystemAsset (Underlying native function: GetFXSystemAsset 0x2e074a0)
	class UFXSystemAsset* GetFXSystemAsset(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

