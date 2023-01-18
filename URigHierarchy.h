// Class /Script/ControlRig.RigHierarchy
// Size: 0x320
class URigHierarchy : public UObject
{
	unsigned char unreflected_28[0x60]; // 0x28 (0x60) 
	uint16_t TopologyVersion; // 0x88 (0x2)
	uint16_t MetadataVersion; // 0x8a (0x2)
	uint16_t MetadataTagVersion; // 0x8c (0x2)
	bool bEnableDirtyPropagation; // 0x8e (0x1)
	unsigned char unreflected_8f[0x71]; // 0x8f (0x71) 
	int TransformStackIndex; // 0x100 (0x4)
	unsigned char unreflected_104[0x6c]; // 0x104 (0x6c) 
	class URigHierarchyController* HierarchyController; // 0x170 (0x8)
	unsigned char unreflected_178[0x58]; // 0x178 (0x58) 
	struct TMap<struct FRigElementKey*, struct FRigElementKey*> PreviousNameMap; // 0x1d0 (0x50)
	unsigned char unreflected_220[0x80]; // 0x220 (0x80) 
	class URigHierarchy* HierarchyForCacheValidation; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x78]; // 0x2a8 (0x78)

	/* Functions */

	// Function /Script/ControlRig.RigHierarchy.UnsetCurveValueByIndex (Underlying native function: UnsetCurveValueByIndex 0x7a635b4)
	void UnsetCurveValueByIndex(int& InElementIndex, bool& bSetupUndo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.UnsetCurveValue (Underlying native function: UnsetCurveValue 0x7a63490)
	void UnsetCurveValue(struct FRigElementKey*& InKey, bool& bSetupUndo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SwitchToWorldSpace (Underlying native function: SwitchToWorldSpace 0x7a63380)
	bool SwitchToWorldSpace(struct FRigElementKey*& InChild, bool& bInitial, bool& bAffectChildren); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SwitchToParent (Underlying native function: SwitchToParent 0x7a63228)
	bool SwitchToParent(struct FRigElementKey*& InChild, struct FRigElementKey*& InParent, bool& bInitial, bool& bAffectChildren); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SwitchToDefaultParent (Underlying native function: SwitchToDefaultParent 0x7a63118)
	bool SwitchToDefaultParent(struct FRigElementKey*& InChild, bool& bInitial, bool& bAffectChildren); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SortKeys (Underlying native function: SortKeys 0x7a62f9c)
	struct TArray<struct FRigElementKey*> SortKeys(struct TArray<struct FRigElementKey*>& InKeys); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.SetVectorMetadata (Underlying native function: SetVectorMetadata 0x7a62dd8)
	bool SetVectorMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct FVector& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetVectorArrayMetadata (Underlying native function: SetVectorArrayMetadata 0x7a62be0)
	bool SetVectorArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct TArray<struct FVector>& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetTransformMetadata (Underlying native function: SetTransformMetadata 0x7a6297c)
	bool SetTransformMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct FTransform& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetTransformArrayMetadata (Underlying native function: SetTransformArrayMetadata 0x7a62784)
	bool SetTransformArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct TArray<struct FTransform>& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetTag (Underlying native function: SetTag 0x7a623a4)
	bool SetTag(struct FRigElementKey*& InItem, struct FName& InTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetRotatorMetadata (Underlying native function: SetRotatorMetadata 0x7a621e0)
	bool SetRotatorMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct FRotator& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetRotatorArrayMetadata (Underlying native function: SetRotatorArrayMetadata 0x7a61fec)
	bool SetRotatorArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct TArray<struct FRotator>& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetRigElementKeyMetadata (Underlying native function: SetRigElementKeyMetadata 0x7a61e28)
	bool SetRigElementKeyMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct FRigElementKey*& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata (Underlying native function: SetRigElementKeyArrayMetadata 0x7a61c34)
	bool SetRigElementKeyArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct TArray<struct FRigElementKey*>& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetQuatMetadata (Underlying native function: SetQuatMetadata 0x7a61a70)
	bool SetQuatMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct FQuat& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetQuatArrayMetadata (Underlying native function: SetQuatArrayMetadata 0x7a61878)
	bool SetQuatArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct TArray<struct FQuat>& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetPose_ForBlueprint (Underlying native function: SetPose_ForBlueprint 0x7a616e8)
	void SetPoseForBlueprint(struct FRigPose& InPose); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetParentWeightArray (Underlying native function: SetParentWeightArray 0x7a614a8)
	bool SetParentWeightArray(struct FRigElementKey*& InChild, struct TArray<struct FRigElementWeight>& InWeights, bool& bInitial, bool& bAffectChildren); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetParentWeight (Underlying native function: SetParentWeight 0x7a612ec)
	bool SetParentWeight(struct FRigElementKey*& InChild, struct FRigElementKey*& InParent, struct FRigElementWeight& InWeight, bool& bInitial, bool& bAffectChildren); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetNameMetadata (Underlying native function: SetNameMetadata 0x7a61130)
	bool SetNameMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct FName& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetNameArrayMetadata (Underlying native function: SetNameArrayMetadata 0x7a60f04)
	bool SetNameArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct TArray<struct FName>& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetLocalTransformByIndex (Underlying native function: SetLocalTransformByIndex 0x7a60c40)
	void SetLocalTransformByIndex(int& InElementIndex, struct FTransform& InTransform, bool& bInitial, bool& bAffectChildren, bool& bSetupUndo, bool& bPrintPythonCommands); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetLocalTransform (Underlying native function: SetLocalTransform 0x7a6091c)
	void SetLocalTransform(struct FRigElementKey*& InKey, struct FTransform& InTransform, bool& bInitial, bool& bAffectChildren, bool& bSetupUndo, bool& bPrintPythonCommands); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetLinearColorMetadata (Underlying native function: SetLinearColorMetadata 0x7a60760)
	bool SetLinearColorMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct FLinearColor& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetLinearColorArrayMetadata (Underlying native function: SetLinearColorArrayMetadata 0x7a60568)
	bool SetLinearColorArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct TArray<struct FLinearColor>& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetInt32Metadata (Underlying native function: SetInt32Metadata 0x7a603ac)
	bool SetInt32Metadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, int& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetInt32ArrayMetadata (Underlying native function: SetInt32ArrayMetadata 0x7a601b8)
	bool SetInt32ArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct TArray<int>& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetGlobalTransformByIndex (Underlying native function: SetGlobalTransformByIndex 0x7a5fef8)
	void SetGlobalTransformByIndex(int& InElementIndex, struct FTransform& InTransform, bool& bInitial, bool& bAffectChildren, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetGlobalTransform (Underlying native function: SetGlobalTransform 0x7a5fbd8)
	void SetGlobalTransform(struct FRigElementKey*& InKey, struct FTransform& InTransform, bool& bInitial, bool& bAffectChildren, bool& bSetupUndo, bool& bPrintPythonCommand); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetFloatMetadata (Underlying native function: SetFloatMetadata 0x7a5fa14)
	bool SetFloatMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetFloatArrayMetadata (Underlying native function: SetFloatArrayMetadata 0x7a5f820)
	bool SetFloatArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct TArray<float>& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetCurveValueByIndex (Underlying native function: SetCurveValueByIndex 0x7a5f6fc)
	void SetCurveValueByIndex(int& InElementIndex, float& InValue, bool& bSetupUndo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetCurveValue (Underlying native function: SetCurveValue 0x7a5f59c)
	void SetCurveValue(struct FRigElementKey*& InKey, float& InValue, bool& bSetupUndo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetControlVisibilityByIndex (Underlying native function: SetControlVisibilityByIndex 0x7a5f4b8)
	void SetControlVisibilityByIndex(int& InElementIndex, bool& bVisibility); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetControlVisibility (Underlying native function: SetControlVisibility 0x7a5f388)
	void SetControlVisibility(struct FRigElementKey*& InKey, bool& bVisibility); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetControlValueByIndex (Underlying native function: SetControlValueByIndex 0x7a5f0bc)
	void SetControlValueByIndex(int& InElementIndex, struct FRigControlValue& InValue, enum ERigControlValueType& InValueType, bool& bSetupUndo, bool& bPrintPythonCommands); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetControlValue (Underlying native function: SetControlValue 0x7a5ed8c)
	void SetControlValue(struct FRigElementKey*& InKey, struct FRigControlValue& InValue, enum ERigControlValueType& InValueType, bool& bSetupUndo, bool& bPrintPythonCommands); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetControlShapeTransformByIndex (Underlying native function: SetControlShapeTransformByIndex 0x7a5eb80)
	void SetControlShapeTransformByIndex(int& InElementIndex, struct FTransform& InTransform, bool& bInitial, bool& bSetupUndo); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetControlShapeTransform (Underlying native function: SetControlShapeTransform 0x7a5e924)
	void SetControlShapeTransform(struct FRigElementKey*& InKey, struct FTransform& InTransform, bool& bInitial, bool& bSetupUndo); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetControlSettingsByIndex (Underlying native function: SetControlSettingsByIndex 0x7a5e6f4)
	void SetControlSettingsByIndex(int& InElementIndex, struct FRigControlSettings& InSettings, bool& bSetupUndo, bool& bForce, bool& bPrintPythonCommands); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetControlSettings (Underlying native function: SetControlSettings 0x7a5e450)
	void SetControlSettings(struct FRigElementKey*& InKey, struct FRigControlSettings& InSettings, bool& bSetupUndo, bool& bForce, bool& bPrintPythonCommands); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex (Underlying native function: SetControlPreferredRotatorByIndex 0x7a5e2c4)
	void SetControlPreferredRotatorByIndex(int& InElementIndex, struct FRotator& InValue, bool& bInitial, bool& bFixEulerFlips); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotator (Underlying native function: SetControlPreferredRotator 0x7a5e0f0)
	void SetControlPreferredRotator(struct FRigElementKey*& InKey, struct FRotator& InValue, bool& bInitial, bool& bFixEulerFlips); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetControlOffsetTransformByIndex (Underlying native function: SetControlOffsetTransformByIndex 0x7a5de40)
	void SetControlOffsetTransformByIndex(int& InElementIndex, struct FTransform& InTransform, bool& bInitial, bool& bAffectChildren, bool& bSetupUndo, bool& bPrintPythonCommands); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetControlOffsetTransform (Underlying native function: SetControlOffsetTransform 0x7a5db34)
	void SetControlOffsetTransform(struct FRigElementKey*& InKey, struct FTransform& InTransform, bool& bInitial, bool& bAffectChildren, bool& bSetupUndo, bool& bPrintPythonCommands); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetBoolMetadata (Underlying native function: SetBoolMetadata 0x7a5d974)
	bool SetBoolMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, bool& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SetBoolArrayMetadata (Underlying native function: SetBoolArrayMetadata 0x7a5d77c)
	bool SetBoolArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct TArray<bool>& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.SendAutoKeyEvent (Underlying native function: SendAutoKeyEvent 0x7a5d678)
	void SendAutoKeyEvent(struct FRigElementKey*& InElement, float& InOffsetInSeconds, bool& bAsynchronous); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.ResetToDefault (Underlying native function: ResetToDefault 0x7a5d664)
	void ResetToDefault(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.ResetPoseToInitial (Underlying native function: ResetPoseToInitial 0x7a5d5e4)
	void ResetPoseToInitial(enum ERigElementType& InTypeFilter); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.ResetCurveValues (Underlying native function: ResetCurveValues 0x7a5d58c)
	void ResetCurveValues(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.Reset (Underlying native function: Reset 0x7a5d578)
	void Reset(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.RemoveMetadata (Underlying native function: RemoveMetadata 0x7a5d4b0)
	bool RemoveMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.RemoveAllMetadata (Underlying native function: RemoveAllMetadata 0x7a5d3c8)
	bool RemoveAllMetadata(struct FRigElementKey*& InItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.Num (Underlying native function: Num 0x7a5d3b0)
	int Num(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromVector2D (Underlying native function: MakeControlValueFromVector2D 0x7a5d048)
	static struct FRigControlValue MakeControlValueFromVector2D(struct FVector2D& InValue); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromVector (Underlying native function: MakeControlValueFromVector 0x7a5d1f8)
	static struct FRigControlValue MakeControlValueFromVector(struct FVector& InValue); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale (Underlying native function: MakeControlValueFromTransformNoScale 0x7a5ce6c)
	static struct FRigControlValue MakeControlValueFromTransformNoScale(struct FTransformNoScale& InValue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromTransform (Underlying native function: MakeControlValueFromTransform 0x7a5cc40)
	static struct FRigControlValue MakeControlValueFromTransform(struct FTransform& InValue); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromRotator (Underlying native function: MakeControlValueFromRotator 0x7a5ca88)
	static struct FRigControlValue MakeControlValueFromRotator(struct FRotator& InValue); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromInt (Underlying native function: MakeControlValueFromInt 0x7a5c910)
	static struct FRigControlValue MakeControlValueFromInt(int& InValue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromFloat (Underlying native function: MakeControlValueFromFloat 0x7a5c790)
	static struct FRigControlValue MakeControlValueFromFloat(float& InValue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromEulerTransform (Underlying native function: MakeControlValueFromEulerTransform 0x7a5c584)
	static struct FRigControlValue MakeControlValueFromEulerTransform(struct FEulerTransform& InValue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromBool (Underlying native function: MakeControlValueFromBool 0x7a5c3f0)
	static struct FRigControlValue MakeControlValueFromBool(bool& InValue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.IsValidIndex (Underlying native function: IsValidIndex 0x7a5c35c)
	bool IsValidIndex(int& InElementIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.IsSelectedByIndex (Underlying native function: IsSelectedByIndex 0x7a5c2ac)
	bool IsSelectedByIndex(int& InIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.IsSelected (Underlying native function: IsSelected 0x7a5c1bc)
	bool IsSelected(struct FRigElementKey*& InKey); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.IsProcedural (Underlying native function: IsProcedural 0x7a5c0c8)
	bool IsProcedural(struct FRigElementKey*& InKey); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.IsParentedTo (Underlying native function: IsParentedTo 0x7a5bec4)
	bool IsParentedTo(struct FRigElementKey*& InChild, struct FRigElementKey*& InParent); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.IsCurveValueSetByIndex (Underlying native function: IsCurveValueSetByIndex 0x7a5be0c)
	bool IsCurveValueSetByIndex(int& InElementIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.IsCurveValueSet (Underlying native function: IsCurveValueSet 0x7a5bd14)
	bool IsCurveValueSet(struct FRigElementKey*& InKey); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.IsControllerAvailable (Underlying native function: IsControllerAvailable 0x7a5bcfc)
	bool IsControllerAvailable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.HasTag (Underlying native function: HasTag 0x7a5ba80)
	bool HasTag(struct FRigElementKey*& InItem, struct FName& InTag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetVectorMetadata (Underlying native function: GetVectorMetadata 0x7a5b870)
	struct FVector GetVectorMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct FVector& DefaultValue); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetVectorFromControlValue (Underlying native function: GetVectorFromControlValue 0x7a5b764)
	static struct FVector GetVectorFromControlValue(struct FRigControlValue& InValue); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.GetVectorArrayMetadata (Underlying native function: GetVectorArrayMetadata 0x7a5b530)
	struct TArray<struct FVector> GetVectorArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetVector2DFromControlValue (Underlying native function: GetVector2DFromControlValue 0x7a5b410)
	static struct FVector2D GetVector2DFromControlValue(struct FRigControlValue& InValue); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue (Underlying native function: GetTransformNoScaleFromControlValue 0x7a5b2ec)
	static struct FTransformNoScale GetTransformNoScaleFromControlValue(struct FRigControlValue& InValue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.GetTransformMetadata (Underlying native function: GetTransformMetadata 0x7a5b014)
	struct FTransform GetTransformMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct FTransform& DefaultValue); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetTransformFromControlValue (Underlying native function: GetTransformFromControlValue 0x7a5aec8)
	static struct FTransform GetTransformFromControlValue(struct FRigControlValue& InValue); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.GetTransformArrayMetadata (Underlying native function: GetTransformArrayMetadata 0x7a5ac5c)
	struct TArray<struct FTransform> GetTransformArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetTags (Underlying native function: GetTags 0x7a5aa2c)
	struct TArray<struct FName> GetTags(struct FRigElementKey*& InItem); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetSelectedKeys (Underlying native function: GetSelectedKeys 0x7a5a960)
	struct TArray<struct FRigElementKey*> GetSelectedKeys(enum ERigElementType& InTypeFilter); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetRotatorMetadata (Underlying native function: GetRotatorMetadata 0x7a5a750)
	struct FRotator GetRotatorMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct FRotator& DefaultValue); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetRotatorFromControlValue (Underlying native function: GetRotatorFromControlValue 0x7a5a634)
	static struct FRotator GetRotatorFromControlValue(struct FRigControlValue& InValue); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.GetRotatorArrayMetadata (Underlying native function: GetRotatorArrayMetadata 0x7a5a3cc)
	struct TArray<struct FRotator> GetRotatorArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetRigidBodyKeys (Underlying native function: GetRigidBodyKeys 0x7a5a028)
	struct TArray<struct FRigElementKey*> GetRigidBodyKeys(bool& bTraverse); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetRigElementKeyMetadata (Underlying native function: GetRigElementKeyMetadata 0x7a59e24)
	struct FRigElementKey* GetRigElementKeyMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct FRigElementKey*& DefaultValue); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata (Underlying native function: GetRigElementKeyArrayMetadata 0x7a59bdc)
	struct TArray<struct FRigElementKey*> GetRigElementKeyArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetReferenceKeys (Underlying native function: GetReferenceKeys 0x7a59838)
	struct TArray<struct FRigElementKey*> GetReferenceKeys(bool& bTraverse); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetQuatMetadata (Underlying native function: GetQuatMetadata 0x7a5962c)
	struct FQuat GetQuatMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct FQuat& DefaultValue); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetQuatArrayMetadata (Underlying native function: GetQuatArrayMetadata 0x7a593f8)
	struct TArray<struct FQuat> GetQuatArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetPreviousParent (Underlying native function: GetPreviousParent 0x7a59324)
	struct FRigElementKey* GetPreviousParent(struct FRigElementKey*& InKey); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetPreviousName (Underlying native function: GetPreviousName 0x7a59290)
	struct FName GetPreviousName(struct FRigElementKey*& InKey); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetPose (Underlying native function: GetPose 0x7a59198)
	struct FRigPose GetPose(bool& bInitial); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetParentWeightArray (Underlying native function: GetParentWeightArray 0x7a58fa0)
	struct TArray<struct FRigElementWeight> GetParentWeightArray(struct FRigElementKey*& InChild, bool& bInitial); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetParentWeight (Underlying native function: GetParentWeight 0x7a58e88)
	struct FRigElementWeight GetParentWeight(struct FRigElementKey*& InChild, struct FRigElementKey*& InParent, bool& bInitial); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetParentTransformByIndex (Underlying native function: GetParentTransformByIndex 0x7a58d28)
	struct FTransform GetParentTransformByIndex(int& InElementIndex, bool& bInitial); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetParentTransform (Underlying native function: GetParentTransform 0x7a58b84)
	struct FTransform GetParentTransform(struct FRigElementKey*& InKey, bool& bInitial); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetParents (Underlying native function: GetParents 0x7a59080)
	struct TArray<struct FRigElementKey*> GetParents(struct FRigElementKey*& InKey, bool& bRecursive); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetNumberOfParents (Underlying native function: GetNumberOfParents 0x7a58af4)
	int GetNumberOfParents(struct FRigElementKey*& InKey); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetNullKeys (Underlying native function: GetNullKeys 0x7a58750)
	struct TArray<struct FRigElementKey*> GetNullKeys(bool& bTraverse); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetNameMetadata (Underlying native function: GetNameMetadata 0x7a58554)
	struct FName GetNameMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct FName& DefaultValue); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetNameArrayMetadata (Underlying native function: GetNameArrayMetadata 0x7a582ec)
	struct TArray<struct FName> GetNameArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetMetadataType (Underlying native function: GetMetadataType 0x7a58224)
	enum ERigMetadataType GetMetadataType(struct FRigElementKey*& InItem, struct FName& InMetadataName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.RigHierarchy.GetMetadataNames (Underlying native function: GetMetadataNames 0x7a5817c)
	struct TArray<struct FName> GetMetadataNames(struct FRigElementKey*& InItem); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/ControlRig.RigHierarchy.GetLocalTransformByIndex (Underlying native function: GetLocalTransformByIndex 0x7a58014)
	struct FTransform GetLocalTransformByIndex(int& InElementIndex, bool& bInitial); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetLocalTransform (Underlying native function: GetLocalTransform 0x7a57e64)
	struct FTransform GetLocalTransform(struct FRigElementKey*& InKey, bool& bInitial); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex (Underlying native function: GetLocalControlShapeTransformByIndex 0x7a57d10)
	struct FTransform GetLocalControlShapeTransformByIndex(int& InElementIndex, bool& bInitial); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetLocalControlShapeTransform (Underlying native function: GetLocalControlShapeTransform 0x7a57b78)
	struct FTransform GetLocalControlShapeTransform(struct FRigElementKey*& InKey, bool& bInitial); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetLinearColorMetadata (Underlying native function: GetLinearColorMetadata 0x7a57978)
	struct FLinearColor GetLinearColorMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, struct FLinearColor& DefaultValue); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetLinearColorArrayMetadata (Underlying native function: GetLinearColorArrayMetadata 0x7a5772c)
	struct TArray<struct FLinearColor> GetLinearColorArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetKeys (Underlying native function: GetKeys 0x7a575a4)
	struct TArray<struct FRigElementKey*> GetKeys(struct TArray<int>& InElementIndices); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetKey (Underlying native function: GetKey 0x7a574f8)
	struct FRigElementKey* GetKey(int& InElementIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetIntFromControlValue (Underlying native function: GetIntFromControlValue 0x7a573ec)
	static int GetIntFromControlValue(struct FRigControlValue& InValue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.GetInt32Metadata (Underlying native function: GetInt32Metadata 0x7a571f0)
	int GetInt32Metadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, int& DefaultValue); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetInt32ArrayMetadata (Underlying native function: GetInt32ArrayMetadata 0x7a56fb8)
	struct TArray<int> GetInt32ArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetIndex_ForBlueprint (Underlying native function: GetIndex_ForBlueprint 0x7a56ef4)
	int GetIndexForBlueprint(struct FRigElementKey*& InKey); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetGlobalTransformByIndex (Underlying native function: GetGlobalTransformByIndex 0x7a56d8c)
	struct FTransform GetGlobalTransformByIndex(int& InElementIndex, bool& bInitial); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetGlobalTransform (Underlying native function: GetGlobalTransform 0x7a56be0)
	struct FTransform GetGlobalTransform(struct FRigElementKey*& InKey, bool& bInitial); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex (Underlying native function: GetGlobalControlShapeTransformByIndex 0x7a56a8c)
	struct FTransform GetGlobalControlShapeTransformByIndex(int& InElementIndex, bool& bInitial); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlShapeTransform (Underlying native function: GetGlobalControlShapeTransform 0x7a568f4)
	struct FTransform GetGlobalControlShapeTransform(struct FRigElementKey*& InKey, bool& bInitial); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex (Underlying native function: GetGlobalControlOffsetTransformByIndex 0x7a567a0)
	struct FTransform GetGlobalControlOffsetTransformByIndex(int& InElementIndex, bool& bInitial); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlOffsetTransform (Underlying native function: GetGlobalControlOffsetTransform 0x7a56608)
	struct FTransform GetGlobalControlOffsetTransform(struct FRigElementKey*& InKey, bool& bInitial); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetFloatMetadata (Underlying native function: GetFloatMetadata 0x7a56404)
	float GetFloatMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, float& DefaultValue); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetFloatFromControlValue (Underlying native function: GetFloatFromControlValue 0x7a562f4)
	static float GetFloatFromControlValue(struct FRigControlValue& InValue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.GetFloatArrayMetadata (Underlying native function: GetFloatArrayMetadata 0x7a560bc)
	struct TArray<float> GetFloatArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetFirstParent (Underlying native function: GetFirstParent 0x7a56030)
	struct FRigElementKey* GetFirstParent(struct FRigElementKey*& InKey); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetEulerTransformFromControlValue (Underlying native function: GetEulerTransformFromControlValue 0x7a55ef0)
	static struct FEulerTransform GetEulerTransformFromControlValue(struct FRigControlValue& InValue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.GetDefaultParent (Underlying native function: GetDefaultParent 0x7a55e64)
	struct FRigElementKey* GetDefaultParent(struct FRigElementKey*& InKey); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetCurveValueByIndex (Underlying native function: GetCurveValueByIndex 0x7a55db4)
	float GetCurveValueByIndex(int& InElementIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetCurveValue (Underlying native function: GetCurveValue 0x7a55cc4)
	float GetCurveValue(struct FRigElementKey*& InKey); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetCurveKeys (Underlying native function: GetCurveKeys 0x7a559f8)
	struct TArray<struct FRigElementKey*> GetCurveKeys(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetControlValueByIndex (Underlying native function: GetControlValueByIndex 0x7a55778)
	struct FRigControlValue GetControlValueByIndex(int& InElementIndex, enum ERigControlValueType& InValueType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetControlValue (Underlying native function: GetControlValue 0x7a55538)
	struct FRigControlValue GetControlValue(struct FRigElementKey*& InKey, enum ERigControlValueType& InValueType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex (Underlying native function: GetControlPreferredRotatorByIndex 0x7a55418)
	struct FRotator GetControlPreferredRotatorByIndex(int& InElementIndex, bool& bInitial); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredRotator (Underlying native function: GetControlPreferredRotator 0x7a552bc)
	struct FRotator GetControlPreferredRotator(struct FRigElementKey*& InKey, bool& bInitial); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetController (Underlying native function: GetController 0x7a55968)
	class URigHierarchyController* GetController(bool& bCreateIfNeeded); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.GetControlKeys (Underlying native function: GetControlKeys 0x7a54f18)
	struct TArray<struct FRigElementKey*> GetControlKeys(bool& bTraverse); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetChildren (Underlying native function: GetChildren 0x7a54e28)
	struct TArray<struct FRigElementKey*> GetChildren(struct FRigElementKey*& InKey, bool& bRecursive); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetBoolMetadata (Underlying native function: GetBoolMetadata 0x7a54c28)
	bool GetBoolMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName, bool& DefaultValue); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetBoolArrayMetadata (Underlying native function: GetBoolArrayMetadata 0x7a549f4)
	struct TArray<bool> GetBoolArrayMetadata(struct FRigElementKey*& InItem, struct FName& InMetadataName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetBoneKeys (Underlying native function: GetBoneKeys 0x7a54650)
	struct TArray<struct FRigElementKey*> GetBoneKeys(bool& bTraverse); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.GetAllKeys_ForBlueprint (Underlying native function: GetAllKeys_ForBlueprint 0x7a54578)
	struct TArray<struct FRigElementKey*> GetAllKeysForBlueprint(bool& bTraverse); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.FindNull_ForBlueprintOnly (Underlying native function: FindNull_ForBlueprintOnly 0x7a54498)
	struct FRigNullElement FindNullForBlueprintOnly(struct FRigElementKey*& InKey); // (Final | Native | Private | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.FindControl_ForBlueprintOnly (Underlying native function: FindControl_ForBlueprintOnly 0x7a543c4)
	struct FRigControlElement FindControlForBlueprintOnly(struct FRigElementKey*& InKey); // (Final | Native | Private | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.FindBone_ForBlueprintOnly (Underlying native function: FindBone_ForBlueprintOnly 0x7a542c8)
	struct FRigBoneElement FindBoneForBlueprintOnly(struct FRigElementKey*& InKey); // (Final | Native | Private | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.RigHierarchy.CopyPose (Underlying native function: CopyPose 0x7a54124)
	void CopyPose(class URigHierarchy*& InHierarchy, bool& bCurrent, bool& bInitial, bool& bWeights, bool& bMatchPoseInGlobalIfNeeded); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.CopyHierarchy (Underlying native function: CopyHierarchy 0x7a540a4)
	void CopyHierarchy(class URigHierarchy*& InHierarchy); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.RigHierarchy.Contains_ForBlueprint (Underlying native function: Contains_ForBlueprint 0x7a53fd8)
	bool ContainsForBlueprint(struct FRigElementKey*& InKey); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

