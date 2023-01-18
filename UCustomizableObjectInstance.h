// Class /Script/CustomizableObject.CustomizableObjectInstance
// Size: 0x358
class UCustomizableObjectInstance : public UObject
{
	struct FMulticastInlineDelegate BeginUpdateDelegate; // 0x28 (0x10)
	unsigned char unreflected_38[0x18]; // 0x38 (0x18) 
	struct FMulticastInlineDelegate UpdatedDelegate; // 0x50 (0x10)
	unsigned char unreflected_60[0x18]; // 0x60 (0x18) 
	struct FMulticastInlineDelegate BeginDestroyDelegate; // 0x78 (0x10)
	unsigned char unreflected_88[0x68]; // 0x88 (0x68) 
	struct TArray<class USkeletalMesh*> SkeletalMeshes; // 0xf0 (0x10)
	struct FString SkeletalMeshStatus; // 0x100 (0x10)
	unsigned char unreflected_110[0x48]; // 0x110 (0x48) 
	struct FCustomizableObjectInstanceDescriptor Descriptor; // 0x158 (0x118)
	class UCustomizableInstancePrivateData* PrivateData; // 0x270 (0x8)
	unsigned char unreflected_278[0x20]; // 0x278 (0x20) 
	class UCustomizableObject* CustomizableObject; // 0x298 (0x8)
	struct TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters; // 0x2a0 (0x10)
	struct TArray<struct FCustomizableObjectIntParameterValue> IntParameters; // 0x2b0 (0x10)
	struct TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters; // 0x2c0 (0x10)
	struct TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters; // 0x2d0 (0x10)
	struct TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters; // 0x2e0 (0x10)
	struct TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters; // 0x2f0 (0x10)
	struct TMap<struct FName, struct FMultilayerProjector> MultilayerProjectors; // 0x300 (0x50)
	bool bBuildParameterDecorations; // 0x350 (0x1)
	unsigned char padding_351[0x7]; // 0x351 (0x7)

	/* Functions */

	// Function /Script/CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync (Underlying native function: UpdateSkeletalMeshAsync 0x74f5468)
	void UpdateSkeletalMeshAsync(bool& bIgnoreCloseDist, bool& bForceHighPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption (Underlying native function: SetVectorParameterSelectedOption 0x74f4944)
	void SetVectorParameterSelectedOption(struct FString& VectorParamName, struct FLinearColor& VectorValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetTextureParameterSelectedOptionT (Underlying native function: SetTextureParameterSelectedOptionT 0x5629e90)
	void SetTextureParameterSelectedOptionT(struct FString& TextureParamName, class UTexture2D*& TextureValue, int& RangeIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetReplacePhysicsAssets (Underlying native function: SetReplacePhysicsAssets 0x74f53c4)
	void SetReplacePhysicsAssets(bool& bReplaceEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetRandomValues (Underlying native function: SetRandomValues 0x74f53a8)
	void SetRandomValues(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorValue (Underlying native function: SetProjectorValue 0x74f5080)
	void SetProjectorValue(struct FString& ProjectorParamName, struct FVector& OutPos, struct FVector& OutDirection, struct FVector& OutUp, struct FVector& OutScale, float& OutAngle, int& RangeIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetObject (Underlying native function: SetObject 0x74f5000)
	void SetObject(class UCustomizableObject*& InObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption (Underlying native function: SetIntParameterSelectedOption 0x74f4d64)
	void SetIntParameterSelectedOption(struct FString& ParamName, struct FString& SelectedOptionName, int& RangeIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption (Underlying native function: SetFloatParameterSelectedOption 0x74f4b90)
	void SetFloatParameterSelectedOption(struct FString& FloatParamName, float& FloatValue, int& RangeIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetCurrentState (Underlying native function: SetCurrentState 0x74f4ae4)
	void SetCurrentState(struct FString& StateName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption (Underlying native function: SetColorParameterSelectedOption 0x74f4944)
	void SetColorParameterSelectedOption(struct FString& ColorParamName, struct FLinearColor& ColorValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBuildParameterDecorations (Underlying native function: SetBuildParameterDecorations 0x74f48c4)
	void SetBuildParameterDecorations(bool& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption (Underlying native function: SetBoolParameterSelectedOption 0x74f46f8)
	void SetBoolParameterSelectedOption(struct FString& BoolParamName, bool& BoolValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromProjectorRange (Underlying native function: RemoveValueFromProjectorRange 0x74f4564)
	int RemoveValueFromProjectorRange(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromIntRange (Underlying native function: RemoveValueFromIntRange 0x74f43bc)
	int RemoveValueFromIntRange(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromFloatRange (Underlying native function: RemoveValueFromFloatRange 0x74f4220)
	int RemoveValueFromFloatRange(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveMultilayerProjector (Underlying native function: RemoveMultilayerProjector 0x74f4190)
	void RemoveMultilayerProjector(struct FName& ProjectorParamName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateVirtualLayer (Underlying native function: MultilayerProjectorUpdateVirtualLayer 0x74f4040)
	void MultilayerProjectorUpdateVirtualLayer(struct FName& ProjectorParamName, struct FName& ID, struct FMultilayerProjectorVirtualLayer& Layer); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateLayer (Underlying native function: MultilayerProjectorUpdateLayer 0x74f3efc)
	void MultilayerProjectorUpdateLayer(struct FName& ProjectorParamName, int& Index, struct FMultilayerProjectorLayer& Layer); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveVirtualLayer (Underlying native function: MultilayerProjectorRemoveVirtualLayer 0x74f3e20)
	void MultilayerProjectorRemoveVirtualLayer(struct FName& ProjectorParamName, struct FName& ID); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveLayerAt (Underlying native function: MultilayerProjectorRemoveLayerAt 0x74f3d50)
	void MultilayerProjectorRemoveLayerAt(struct FName& ProjectorParamName, int& Index); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorNumLayers (Underlying native function: MultilayerProjectorNumLayers 0x74f3cb4)
	int MultilayerProjectorNumLayers(struct FName& ProjectorParamName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayers (Underlying native function: MultilayerProjectorGetVirtualLayers 0x74f3bd8)
	struct TArray<struct FName> MultilayerProjectorGetVirtualLayers(struct FName& ProjectorParamName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayer (Underlying native function: MultilayerProjectorGetVirtualLayer 0x74f3ab0)
	struct FMultilayerProjectorVirtualLayer MultilayerProjectorGetVirtualLayer(struct FName& ProjectorParamName, struct FName& ID); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetLayer (Underlying native function: MultilayerProjectorGetLayer 0x74f3998)
	struct FMultilayerProjectorLayer MultilayerProjectorGetLayer(struct FName& ProjectorParamName, int& Index); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorFindOrCreateVirtualLayer (Underlying native function: MultilayerProjectorFindOrCreateVirtualLayer 0x74f3870)
	struct FMultilayerProjectorVirtualLayer MultilayerProjectorFindOrCreateVirtualLayer(struct FName& ProjectorParamName, struct FName& ID); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateVirtualLayer (Underlying native function: MultilayerProjectorCreateVirtualLayer 0x74f3794)
	void MultilayerProjectorCreateVirtualLayer(struct FName& ProjectorParamName, struct FName& ID); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateLayer (Underlying native function: MultilayerProjectorCreateLayer 0x74f36c4)
	void MultilayerProjectorCreateLayer(struct FName& ProjectorParamName, int& Index); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional (Underlying native function: IsParamMultidimensional 0x74f337c)
	bool IsParamMultidimensional(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.IsParameterRelevant (Underlying native function: IsParameterRelevant 0x74f34f0)
	bool IsParameterRelevant(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.HasAnySkeletalMesh (Underlying native function: HasAnySkeletalMesh 0x74f3338)
	bool HasAnySkeletalMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.HasAnyParameters (Underlying native function: HasAnyParameters 0x74f32e8)
	bool HasAnyParameters(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetVectorParameters (Underlying native function: GetVectorParameters 0x74f32cc)
	struct TArray<struct FCustomizableObjectVectorParameterValue> GetVectorParameters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureParameterSelectedOptionT (Underlying native function: GetTextureParameterSelectedOptionT 0x5629ce0)
	class UTexture2D* GetTextureParameterSelectedOptionT(struct FString& TextureParamName, int& RangeIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureParameters (Underlying native function: GetTextureParameters 0x74f32b0)
	struct TArray<struct FCustomizableObjectTextureParameterValue> GetTextureParameters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetSkeletalMesh (Underlying native function: GetSkeletalMesh 0x74f2cc8)
	class USkeletalMesh* GetSkeletalMesh(int& ComponentIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorValueRange (Underlying native function: GetProjectorValueRange 0x5629be0)
	int GetProjectorValueRange(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorValue (Underlying native function: GetProjectorValue 0x74f293c)
	void GetProjectorValue(struct FString& ProjectorParamName, struct FVector& OutPos, struct FVector& OutDirection, struct FVector& OutUp, struct FVector& OutScale, float& OutAngle, enum ECustomizableObjectProjectorType& OutType, int& RangeIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorUp (Underlying native function: GetProjectorUp 0x74f2778)
	struct FVector GetProjectorUp(struct FString& ParamName, int& RangeIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorScale (Underlying native function: GetProjectorScale 0x74f25b4)
	struct FVector GetProjectorScale(struct FString& ParamName, int& RangeIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorPosition (Underlying native function: GetProjectorPosition 0x74f23f0)
	struct FVector GetProjectorPosition(struct FString& ParamName, int& RangeIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType (Underlying native function: GetProjectorParameterType 0x74f21cc)
	enum ECustomizableObjectProjectorType GetProjectorParameterType(struct FString& ParamName, int& RangeIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorParameters (Underlying native function: GetProjectorParameters 0x74f23d4)
	struct TArray<struct FCustomizableObjectProjectorParameterValue> GetProjectorParameters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorDirection (Underlying native function: GetProjectorDirection 0x74f2008)
	struct FVector GetProjectorDirection(struct FString& ParamName, int& RangeIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorAngle (Underlying native function: GetProjectorAngle 0x74f1e5c)
	float GetProjectorAngle(struct FString& ParamName, int& RangeIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetParameterDescription (Underlying native function: GetParameterDescription 0x74f15b4)
	class UTexture2D* GetParameterDescription(struct FString& ParamName, int& DescIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption (Underlying native function: GetIntParameterSelectedOption 0x74f137c)
	struct FString GetIntParameterSelectedOption(struct FString& ParamName, int& RangeIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntParameters (Underlying native function: GetIntParameters 0x74f1598)
	struct TArray<struct FCustomizableObjectIntParameterValue> GetIntParameters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption (Underlying native function: GetFloatParameterSelectedOption 0x74f1024)
	float GetFloatParameterSelectedOption(struct FString& FloatParamName, int& RangeIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatParameters (Underlying native function: GetFloatParameters 0x74f11d0)
	struct TArray<struct FCustomizableObjectFloatParameterValue> GetFloatParameters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetCustomizableObject (Underlying native function: GetCustomizableObject 0x2d85a40)
	class UCustomizableObject* GetCustomizableObject(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetCurrentState (Underlying native function: GetCurrentState 0x74f0f9c)
	struct FString GetCurrentState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption (Underlying native function: GetColorParameterSelectedOption 0x74f0dfc)
	struct FLinearColor GetColorParameterSelectedOption(struct FString& ColorParamName); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBuildParameterDecorations (Underlying native function: GetBuildParameterDecorations 0x74f0de4)
	bool GetBuildParameterDecorations(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption (Underlying native function: GetBoolParameterSelectedOption 0x74f0c34)
	bool GetBoolParameterSelectedOption(struct FString& BoolParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBoolParameters (Underlying native function: GetBoolParameters 0x74f0dc8)
	struct TArray<struct FCustomizableObjectBoolParameterValue> GetBoolParameters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetAnimBP (Underlying native function: GetAnimBP 0x74f0b44)
	class UClass* GetAnimBP(int& ComponentIndex, int& SlotIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetAnimationGameplayTags (Underlying native function: GetAnimationGameplayTags 0x74f0c10)
	struct FGameplayTagContainer GetAnimationGameplayTags(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.ForEachAnimInstance (Underlying native function: ForEachAnimInstance 0x74f0a68)
	void ForEachAnimInstance(int& ComponentIndex, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex (Underlying native function: FindVectorParameterNameIndex 0x74f0900)
	int FindVectorParameterNameIndex(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex (Underlying native function: FindProjectorParameterNameIndex 0x74f0798)
	int FindProjectorParameterNameIndex(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex (Underlying native function: FindIntParameterNameIndex 0x74f04cc)
	int FindIntParameterNameIndex(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex (Underlying native function: FindFloatParameterNameIndex 0x74f0364)
	int FindFloatParameterNameIndex(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex (Underlying native function: FindBoolParameterNameIndex 0x74f01fc)
	int FindBoolParameterNameIndex(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.CreateMultiLayerProjector (Underlying native function: CreateMultiLayerProjector 0x74f0160)
	bool CreateMultiLayerProjector(struct FName& ProjectorParamName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.CloneStatic (Underlying native function: CloneStatic 0x74f0058)
	class UCustomizableObjectInstance* CloneStatic(class UObject*& Outer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.Clone (Underlying native function: Clone 0x74f0008)
	class UCustomizableObjectInstance* Clone(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToProjectorRange (Underlying native function: AddValueToProjectorRange 0x74efea0)
	int AddValueToProjectorRange(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToIntRange (Underlying native function: AddValueToIntRange 0x74efd38)
	int AddValueToIntRange(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToFloatRange (Underlying native function: AddValueToFloatRange 0x74efc5c)
	int AddValueToFloatRange(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable)
};

