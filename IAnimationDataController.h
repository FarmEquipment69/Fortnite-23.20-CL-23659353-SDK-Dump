// Class /Script/Engine.AnimationDataController
// Size: 0x28
class IAnimationDataController : public IInterface
{

	/* Functions */

	// Function /Script/Engine.AnimationDataController.UpdateCurveNamesFromSkeleton (Underlying native function: UpdateCurveNamesFromSkeleton 0x9c06ecc)
	void UpdateCurveNamesFromSkeleton(class USkeleton*& Skeleton, enum ERawCurveTrackTypes& SupportedCurveType, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetTransformCurveKeys (Underlying native function: SetTransformCurveKeys 0x9c069e4)
	bool SetTransformCurveKeys(struct FAnimationCurveIdentifier& CurveId, struct TArray<struct FTransform>& TransformValues, struct TArray<float>& TimeKeys, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetTransformCurveKey (Underlying native function: SetTransformCurveKey 0x9c067f8)
	bool SetTransformCurveKey(struct FAnimationCurveIdentifier& CurveId, float& Time, struct FTransform& Value, bool& bShouldTransact); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetPlayLength (Underlying native function: SetPlayLength 0x9c06418)
	void SetPlayLength(float& Length, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetModel (Underlying native function: SetModel 0x83913f0)
	void SetModel(class UAnimDataModel*& InModel); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetFrameRate (Underlying native function: SetFrameRate 0x9c06034)
	void SetFrameRate(struct FFrameRate*& FrameRate, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetCurveKeys (Underlying native function: SetCurveKeys 0x9c05c28)
	bool SetCurveKeys(struct FAnimationCurveIdentifier& CurveId, struct TArray<struct FRichCurveKey>& CurveKeys, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetCurveKey (Underlying native function: SetCurveKey 0x9c05acc)
	bool SetCurveKey(struct FAnimationCurveIdentifier& CurveId, struct FRichCurveKey& Key, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetCurveFlags (Underlying native function: SetCurveFlags 0x9c059a0)
	bool SetCurveFlags(struct FAnimationCurveIdentifier& CurveId, int& Flags, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetCurveFlag (Underlying native function: SetCurveFlag 0x9c0582c)
	bool SetCurveFlag(struct FAnimationCurveIdentifier& CurveId, struct TEnumAsByte<EAnimAssetCurveFlags>& Flag, bool& bState, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetCurveColor (Underlying native function: SetCurveColor 0x9c056e8)
	bool SetCurveColor(struct FAnimationCurveIdentifier& CurveId, struct FLinearColor& Color, bool& bShouldTransact); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetBoneTrackKeys (Underlying native function: SetBoneTrackKeys 0x9c054e4)
	bool SetBoneTrackKeys(struct FName& BoneName, struct TArray<struct FVector>& PositionalKeys, struct TArray<struct FQuat>& RotationalKeys, struct TArray<struct FVector>& ScalingKeys, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.ScaleCurve (Underlying native function: ScaleCurve 0x9c05370)
	bool ScaleCurve(struct FAnimationCurveIdentifier& CurveId, float& Origin, float& Factor, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.ResizePlayLength (Underlying native function: ResizePlayLength 0x9c05230)
	void ResizePlayLength(float& NewLength, float& T0, float& T1, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.Resize (Underlying native function: Resize 0x9c050f0)
	void Resize(float& Length, float& T0, float& T1, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RenameCurve (Underlying native function: RenameCurve 0x9c04f98)
	bool RenameCurve(struct FAnimationCurveIdentifier& CurveToRenameId, struct FAnimationCurveIdentifier& NewCurveId, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveTransformCurveKey (Underlying native function: RemoveTransformCurveKey 0x9c04e64)
	bool RemoveTransformCurveKey(struct FAnimationCurveIdentifier& CurveId, float& Time, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveCurveKey (Underlying native function: RemoveCurveKey 0x9c04d30)
	bool RemoveCurveKey(struct FAnimationCurveIdentifier& CurveId, float& Time, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveCurve (Underlying native function: RemoveCurve 0x9c04c30)
	bool RemoveCurve(struct FAnimationCurveIdentifier& CurveId, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveBoneTrack (Underlying native function: RemoveBoneTrack 0x9c04b68)
	bool RemoveBoneTrack(struct FName& BoneName, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveAttributeKey (Underlying native function: RemoveAttributeKey 0x9c04a1c)
	bool RemoveAttributeKey(struct FAnimationAttributeIdentifier& AttributeIdentifier, float& Time, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveAttribute (Underlying native function: RemoveAttribute 0x9c04908)
	bool RemoveAttribute(struct FAnimationAttributeIdentifier& AttributeIdentifier, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveAllCurvesOfType (Underlying native function: RemoveAllCurvesOfType 0x9c04840)
	void RemoveAllCurvesOfType(enum ERawCurveTrackTypes& SupportedCurveType, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveAllBoneTracks (Underlying native function: RemoveAllBoneTracks 0x89eac90)
	void RemoveAllBoneTracks(bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveAllAttributesForBone (Underlying native function: RemoveAllAttributesForBone 0x9c0475c)
	int RemoveAllAttributesForBone(struct FName& BoneName, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveAllAttributes (Underlying native function: RemoveAllAttributes 0x9c046c4)
	int RemoveAllAttributes(bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.OpenBracket (Underlying native function: OpenBracket 0x9c045b0)
	void OpenBracket(struct FText& InTitle, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.InsertBoneTrack (Underlying native function: InsertBoneTrack 0x9c044b4)
	int InsertBoneTrack(struct FName& BoneName, int& DesiredIndex, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.GetModel (Underlying native function: GetModel 0x809386c)
	class UAnimDataModel* GetModel(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.FindOrAddCurveNamesOnSkeleton (Underlying native function: FindOrAddCurveNamesOnSkeleton 0x9c043b4)
	void FindOrAddCurveNamesOnSkeleton(class USkeleton*& Skeleton, enum ERawCurveTrackTypes& SupportedCurveType, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.DuplicateCurve (Underlying native function: DuplicateCurve 0x9c0425c)
	bool DuplicateCurve(struct FAnimationCurveIdentifier& CopyCurveId, struct FAnimationCurveIdentifier& NewCurveId, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.DuplicateAttribute (Underlying native function: DuplicateAttribute 0x9c040d4)
	bool DuplicateAttribute(struct FAnimationAttributeIdentifier& AttributeIdentifier, struct FAnimationAttributeIdentifier& NewAttributeIdentifier, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.CloseBracket (Underlying native function: CloseBracket 0x9c04050)
	void CloseBracket(bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.AddCurve (Underlying native function: AddCurve 0x9c03f24)
	bool AddCurve(struct FAnimationCurveIdentifier& CurveId, int& CurveFlags, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.AddBoneTrack (Underlying native function: AddBoneTrack 0x9c03e5c)
	int AddBoneTrack(struct FName& BoneName, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.AddAttribute (Underlying native function: AddAttribute 0x9c03d48)
	bool AddAttribute(struct FAnimationAttributeIdentifier& AttributeIdentifier, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)
};

