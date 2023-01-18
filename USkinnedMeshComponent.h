// Class /Script/Engine.SkinnedMeshComponent
// Size: 0x8b0
class USkinnedMeshComponent : public UMeshComponent
{
	unsigned char unreflected_580[0x8]; // 0x580 (0x8) 
	class USkeletalMesh* SkeletalMesh; // 0x588 (0x8)
	class USkinnedAsset* SkinnedAsset; // 0x590 (0x8)
	struct TWeakObjectPtr<class USkinnedMeshComponent> LeaderPoseComponent; // 0x598 (0x8)
	struct TArray<enum ESkinCacheUsage> SkinCacheUsage; // 0x5a0 (0x10)
	bool bSetMeshDeformer; // 0x5b0 (0x1)
	unsigned char unreflected_5b1[0x7]; // 0x5b1 (0x7) 
	class UMeshDeformer* MeshDeformer; // 0x5b8 (0x8)
	class UMeshDeformerInstanceSettings* MeshDeformerInstanceSettings; // 0x5c0 (0x8)
	class UMeshDeformerInstance* MeshDeformerInstance; // 0x5c8 (0x8)
	unsigned char unreflected_5d0[0x168]; // 0x5d0 (0x168) 
	class UPhysicsAsset* PhysicsAssetOverride; // 0x738 (0x8)
	int ForcedLodModel; // 0x740 (0x4)
	int MinLodModel; // 0x744 (0x4)
	unsigned char unreflected_748[0x8]; // 0x748 (0x8) 
	float StreamingDistanceMultiplier; // 0x750 (0x4)
	unsigned char unreflected_754[0xc]; // 0x754 (0xc) 
	struct TArray<struct FSkelMeshComponentLODInfo> LODInfo; // 0x760 (0x10)
	unsigned char unreflected_770[0x24]; // 0x770 (0x24) 
	enum EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption; // 0x794 (0x1)
	unsigned char unreflected_795[0x1]; // 0x795 (0x1) 
	unsigned char bOverrideMinLOD; // 0x796 (0x1)
	unsigned char bUseBoundsFromLeaderPoseComponent; // 0x796 (0x1)
	unsigned char bForceWireframe; // 0x796 (0x1)
	unsigned char bDisplayBones; // 0x796 (0x1)
	unsigned char bDisableMorphTarget; // 0x796 (0x1)
	unsigned char bHideSkin; // 0x797 (0x1)
	unsigned char bPerBoneMotionBlur; // 0x797 (0x1)
	unsigned char bComponentUseFixedSkelBounds; // 0x797 (0x1)
	unsigned char bConsiderAllBodiesForBounds; // 0x797 (0x1)
	unsigned char bSyncAttachParentLOD; // 0x797 (0x1)
	unsigned char bCanHighlightSelectedSections; // 0x797 (0x1)
	unsigned char bRecentlyRendered; // 0x797 (0x1)
	unsigned char bCastCapsuleDirectShadow; // 0x797 (0x1)
	unsigned char bCastCapsuleIndirectShadow; // 0x798 (0x1)
	unsigned char bCPUSkinning; // 0x798 (0x1)
	unsigned char bEnableUpdateRateOptimizations; // 0x798 (0x1)
	unsigned char bDisplayDebugUpdateRateOptimizations; // 0x798 (0x1)
	unsigned char bRenderStatic; // 0x798 (0x1)
	unsigned char bIgnoreLeaderPoseComponentLOD; // 0x798 (0x1)
	unsigned char bCachedLocalBoundsUpToDate; // 0x799 (0x1)
	unsigned char bCachedWorldSpaceBoundsUpToDate; // 0x799 (0x1)
	unsigned char bForceMeshObjectUpdate; // 0x799 (0x1)
	unsigned char bFollowerShouldTickPose; // 0x79a (0x1)
	unsigned char unreflected_79b[0x1]; // 0x79b (0x1) 
	float CapsuleIndirectShadowMinVisibility; // 0x79c (0x4)
	unsigned char unreflected_7a0[0x38]; // 0x7a0 (0x38) 
	struct FBoxSphereBounds CachedWorldOrLocalSpaceBounds; // 0x7d8 (0x38)
	struct FMatrix CachedWorldToLocalTransform; // 0x810 (0x80)
	unsigned char padding_890[0x20]; // 0x890 (0x20)

	/* Functions */

	// Function /Script/Engine.SkinnedMeshComponent.UnsetMeshDeformer (Underlying native function: UnsetMeshDeformer 0x5ff5ba0)
	void UnsetMeshDeformer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.UnloadSkinWeightProfile (Underlying native function: UnloadSkinWeightProfile 0x9c1d5a4)
	void UnloadSkinWeightProfile(struct FName& InProfileName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.UnHideBoneByName (Underlying native function: UnHideBoneByName 0x9c1d524)
	void UnHideBoneByName(struct FName& BoneName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.TransformToBoneSpace (Underlying native function: TransformToBoneSpace 0x9c1d360)
	void TransformToBoneSpace(struct FName& BoneName, struct FVector& InPosition, struct FRotator& InRotation, struct FVector& OutPosition, struct FRotator& OutRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.TransformFromBoneSpace (Underlying native function: TransformFromBoneSpace 0x9c1d19c)
	void TransformFromBoneSpace(struct FName& BoneName, struct FVector& InPosition, struct FRotator& InRotation, struct FVector& OutPosition, struct FRotator& OutRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.ShowMaterialSection (Underlying native function: ShowMaterialSection 0x9c1d054)
	void ShowMaterialSection(int& MaterialID, int& SectionIndex, bool& bShow, int& LODIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.ShowAllMaterialSections (Underlying native function: ShowAllMaterialSections 0x9c1cfd4)
	void ShowAllMaterialSections(int& LODIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetVertexOffsetUsage (Underlying native function: SetVertexOffsetUsage 0x76c12f0)
	void SetVertexOffsetUsage(int& LODIndex, int& Usage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetVertexColorOverride_LinearColor (Underlying native function: SetVertexColorOverride_LinearColor 0x9c1ce6c)
	void SetVertexColorOverrideLinearColor(int& LODIndex, struct TArray<struct FLinearColor>& VertexColors); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetSkinWeightProfile (Underlying native function: SetSkinWeightProfile 0x9c1cc90)
	bool SetSkinWeightProfile(struct FName& InProfileName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetSkinWeightOverride (Underlying native function: SetSkinWeightOverride 0x9c1caf0)
	void SetSkinWeightOverride(int& LODIndex, struct TArray<struct FSkelMeshSkinWeightInfo>& SkinWeights); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetSkinnedAssetAndUpdate (Underlying native function: SetSkinnedAssetAndUpdate 0x9c1cd1c)
	void SetSkinnedAssetAndUpdate(class USkinnedAsset*& NewMesh, bool& bReinitPose); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetRenderStatic (Underlying native function: SetRenderStatic 0x9c1ca70)
	void SetRenderStatic(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetPreSkinningOffsets (Underlying native function: SetPreSkinningOffsets 0x9c1c998)
	void SetPreSkinningOffsets(int& LODIndex, struct TArray<struct FVector>& Offsets); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetPostSkinningOffsets (Underlying native function: SetPostSkinningOffsets 0x9c1c998)
	void SetPostSkinningOffsets(int& LODIndex, struct TArray<struct FVector>& Offsets); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetPhysicsAsset (Underlying native function: SetPhysicsAsset 0x9c1c8cc)
	void SetPhysicsAsset(class UPhysicsAsset*& NewPhysicsAsset, bool& bForceReInit); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetMinLOD (Underlying native function: SetMinLOD 0x9c1c638)
	void SetMinLOD(int& InNewMinLOD); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetMeshDeformer (Underlying native function: SetMeshDeformer 0x9c1c5b4)
	void SetMeshDeformer(class UMeshDeformer*& InMeshDeformer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetLeaderPoseComponent (Underlying native function: SetLeaderPoseComponent 0x9c1c340)
	void SetLeaderPoseComponent(class USkinnedMeshComponent*& NewLeaderBoneComponent, bool& bForceUpdate, bool& bInFollowerShouldTickPose); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetForcedLOD (Underlying native function: SetForcedLOD 0x9c1c23c)
	void SetForcedLOD(int& InNewForcedLOD); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetCastCapsuleIndirectShadow (Underlying native function: SetCastCapsuleIndirectShadow 0x9c1c020)
	void SetCastCapsuleIndirectShadow(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetCastCapsuleDirectShadow (Underlying native function: SetCastCapsuleDirectShadow 0x9c1bf80)
	void SetCastCapsuleDirectShadow(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.SetCapsuleIndirectShadowMinVisibility (Underlying native function: SetCapsuleIndirectShadowMinVisibility 0x27a5740)
	void SetCapsuleIndirectShadowMinVisibility(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.IsUsingSkinWeightProfile (Underlying native function: IsUsingSkinWeightProfile 0x9c1bf50)
	bool IsUsingSkinWeightProfile(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.IsMaterialSectionShown (Underlying native function: IsMaterialSectionShown 0x9c1be5c)
	bool IsMaterialSectionShown(int& MaterialID, int& LODIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.IsBoneHiddenByName (Underlying native function: IsBoneHiddenByName 0x9c1bdd0)
	bool IsBoneHiddenByName(struct FName& BoneName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.HideBoneByName (Underlying native function: HideBoneByName 0x9c1bb04)
	void HideBoneByName(struct FName& BoneName, struct TEnumAsByte<EPhysBodyOp>& PhysBodyOption); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.GetVertexOffsetUsage (Underlying native function: GetVertexOffsetUsage 0x9c1ba98)
	int GetVertexOffsetUsage(int& LODIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetTwistAndSwingAngleOfDeltaRotationFromRefPose (Underlying native function: GetTwistAndSwingAngleOfDeltaRotationFromRefPose 0x2445ce8)
	bool GetTwistAndSwingAngleOfDeltaRotationFromRefPose(struct FName& BoneName, float& OutTwistAngle, float& OutSwingAngle); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetSocketBoneName (Underlying native function: GetSocketBoneName 0x9c1b974)
	struct FName GetSocketBoneName(struct FName& InSocketName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetSkinnedAsset (Underlying native function: GetSkinnedAsset 0x9c1b954)
	class USkinnedAsset* GetSkinnedAsset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetSkeletalMesh_DEPRECATED (Underlying native function: GetSkeletalMesh_DEPRECATED 0x2934158)
	class USkeletalMesh* GetSkeletalMeshDEPRECATED(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetRefPoseTransform (Underlying native function: GetRefPoseTransform 0x9c1b884)
	struct FTransform GetRefPoseTransform(int& BoneIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetRefPosePosition (Underlying native function: GetRefPosePosition 0x9c1b7e4)
	struct FVector GetRefPosePosition(int& BoneIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetPredictedLODLevel (Underlying native function: GetPredictedLODLevel 0x9c1b7cc)
	int GetPredictedLODLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetParentBone (Underlying native function: GetParentBone 0x9c1b748)
	struct FName GetParentBone(struct FName& BoneName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetNumLODs (Underlying native function: GetNumLODs 0x9c1b724)
	int GetNumLODs(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetNumBones (Underlying native function: GetNumBones 0x9c1b700)
	int GetNumBones(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetForcedLOD (Underlying native function: GetForcedLOD 0x9c1b6e8)
	int GetForcedLOD(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetDeltaTransformFromRefPose (Underlying native function: GetDeltaTransformFromRefPose 0xef57fc)
	struct FTransform GetDeltaTransformFromRefPose(struct FName& BoneName, struct FName& BaseName); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetCurrentSkinWeightProfileName (Underlying native function: GetCurrentSkinWeightProfileName 0x9c1b6d0)
	struct FName GetCurrentSkinWeightProfileName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetBoneName (Underlying native function: GetBoneName 0x9c1b64c)
	struct FName GetBoneName(int& BoneIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.GetBoneIndex (Underlying native function: GetBoneIndex 0x9c1b5c0)
	int GetBoneIndex(struct FName& BoneName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.FindClosestBone_K2 (Underlying native function: FindClosestBone_K2 0x9c1b440)
	struct FName FindClosestBoneK2(struct FVector& TestLocation, struct FVector& BoneLocation, float& IgnoreScale, bool& bRequirePhysicsAsset); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedMeshComponent.ClearVertexColorOverride (Underlying native function: ClearVertexColorOverride 0x9c1b3a4)
	void ClearVertexColorOverride(int& LODIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.ClearSkinWeightProfile (Underlying native function: ClearSkinWeightProfile 0x9c1b390)
	void ClearSkinWeightProfile(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.ClearSkinWeightOverride (Underlying native function: ClearSkinWeightOverride 0x9c1b2f4)
	void ClearSkinWeightOverride(int& LODIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkinnedMeshComponent.BoneIsChildOf (Underlying native function: BoneIsChildOf 0x9c1b234)
	bool BoneIsChildOf(struct FName& BoneName, struct FName& ParentBoneName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

