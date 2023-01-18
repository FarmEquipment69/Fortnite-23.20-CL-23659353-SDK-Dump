// Class /Script/FortniteGame.FortWaterBodyCubeVolumeComponent
// Size: 0x15d0
class UFortWaterBodyCubeVolumeComponent : public UFortWaterBodyCustomComponent
{
	struct FVector VolumeExtent; // 0x1530 (0x18)
	struct FVector WaterRatio; // 0x1548 (0x18)
	struct FVector WaterOffsetRatio; // 0x1560 (0x18)
	struct FVector WaterMeshCubeDefaultExtent; // 0x1578 (0x18)
	struct FVector WaterMeshCubeDefaultOrigin; // 0x1590 (0x18)
	struct FVector WaterMeshCubeDefaultScale; // 0x15a8 (0x18)
	bool bIsWaterVisibiltyEnabled; // 0x15c0 (0x1)
	bool bIsWaterCollisionEnabled; // 0x15c1 (0x1)
	unsigned char padding_15c2[0xe]; // 0x15c2 (0xe)

	/* Functions */

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.UpdateWaterSpline (Underlying native function: UpdateWaterSpline 0x8866768)
	void UpdateWaterSpline(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.UpdateWaterMeshCube (Underlying native function: UpdateWaterMeshCube 0x8866754)
	void UpdateWaterMeshCube(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.UpdateParametersOnUnderwaterPostProcess (Underlying native function: UpdateParametersOnUnderwaterPostProcess 0x8866734)
	void UpdateParametersOnUnderwaterPostProcess(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.ShouldWaterCollide (Underlying native function: ShouldWaterCollide 0x88661a0)
	bool ShouldWaterCollide(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.ShouldWaterBeVisible (Underlying native function: ShouldWaterBeVisible 0x8866180)
	bool ShouldWaterBeVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.SetWaterVisibiltyEnabled (Underlying native function: SetWaterVisibiltyEnabled 0x8866038)
	void SetWaterVisibiltyEnabled(bool& bNewIsWaterVisibilityEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.SetWaterRatio (Underlying native function: SetWaterRatio 0x8865f2c)
	void SetWaterRatio(struct FVector& NewWaterRatio); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.SetWaterCollisionEnabled (Underlying native function: SetWaterCollisionEnabled 0x8865e20)
	void SetWaterCollisionEnabled(bool& bNewIsCollisionEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.SetVolumeSizeByFortCell (Underlying native function: SetVolumeSizeByFortCell 0x8865c98)
	void SetVolumeSizeByFortCell(struct FVector& NewFortCellSize); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.SetVolumeSize (Underlying native function: SetVolumeSize 0x8865b84)
	void SetVolumeSize(struct FVector& NewSize); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.SetVolumeExtentByFortCell (Underlying native function: SetVolumeExtentByFortCell 0x8865a70)
	void SetVolumeExtentByFortCell(struct FVector& NewFortCellExtent); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.SetVolumeExtent (Underlying native function: SetVolumeExtent 0x886595c)
	void SetVolumeExtent(struct FVector& NewExtent); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.SetParametersOnUnderwaterPostProcess (Has no native function)
	void SetParametersOnUnderwaterPostProcess(class UMaterialInstanceDynamic*& Mid); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.SetParametersOnMID (Has no native function)
	void SetParametersOnMID(class UMaterialInstanceDynamic*& Mid); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.OnWaterRatioChanged (Underlying native function: OnWaterRatioChanged 0x8862f6c)
	void OnWaterRatioChanged(struct FVector& LastWaterRatio); // (Native | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.OnVolumeExtentChanged (Underlying native function: OnVolumeExtentChanged 0x8862ee0)
	void OnVolumeExtentChanged(struct FVector& LastVolumeExtent); // (Native | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.IsWaterVisible (Underlying native function: IsWaterVisible 0x8862a30)
	bool IsWaterVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.IsWaterVisibilityEnabled (Underlying native function: IsWaterVisibilityEnabled 0x88629ec)
	bool IsWaterVisibilityEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.IsWaterCollisionEnabled (Underlying native function: IsWaterCollisionEnabled 0x88629b4)
	bool IsWaterCollisionEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.IsVolumeFilled (Underlying native function: IsVolumeFilled 0x8862974)
	bool IsVolumeFilled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.IsVolumeEmptied (Underlying native function: IsVolumeEmptied 0x886292c)
	bool IsVolumeEmptied(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.IsNullExtent (Underlying native function: IsNullExtent 0x886288c)
	bool IsNullExtent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterRatio (Underlying native function: GetWaterRatio 0x8862334)
	struct FVector GetWaterRatio(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterMeshCubeRescaleToUnitCube (Underlying native function: GetWaterMeshCubeRescaleToUnitCube 0x88622b4)
	struct FVector GetWaterMeshCubeRescaleToUnitCube(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterCubeSizeScaledFortCell (Underlying native function: GetWaterCubeSizeScaledFortCell 0x886227c)
	struct FVector GetWaterCubeSizeScaledFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterCubeSizeScaled (Underlying native function: GetWaterCubeSizeScaled 0x8862204)
	struct FVector GetWaterCubeSizeScaled(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterCubeSizeFortCell (Underlying native function: GetWaterCubeSizeFortCell 0x8862190)
	struct FVector GetWaterCubeSizeFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterCubeSize (Underlying native function: GetWaterCubeSize 0x88620f8)
	struct FVector GetWaterCubeSize(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterCubeMin (Underlying native function: GetWaterCubeMin 0x886205c)
	struct FVector GetWaterCubeMin(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterCubeMesh (Underlying native function: GetWaterCubeMesh 0x8862004)
	class UStaticMeshComponent* GetWaterCubeMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterCubeMax (Underlying native function: GetWaterCubeMax 0x8861fac)
	struct FVector GetWaterCubeMax(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterCubeExtentScaledFortCell (Underlying native function: GetWaterCubeExtentScaledFortCell 0x8861f34)
	struct FVector GetWaterCubeExtentScaledFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterCubeExtentScaled (Underlying native function: GetWaterCubeExtentScaled 0x8861ec0)
	struct FVector GetWaterCubeExtentScaled(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterCubeExtentFortCell (Underlying native function: GetWaterCubeExtentFortCell 0x8861e50)
	struct FVector GetWaterCubeExtentFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterCubeExtent (Underlying native function: GetWaterCubeExtent 0x8861dc4)
	struct FVector GetWaterCubeExtent(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterCubeCenter (Underlying native function: GetWaterCubeCenter 0x8861d34)
	struct FVector GetWaterCubeCenter(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetWaterCubeBounds (Underlying native function: GetWaterCubeBounds 0x8861c14)
	void GetWaterCubeBounds(struct FVector& min, struct FVector& max); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetVolumeSizeScaledFortCell (Underlying native function: GetVolumeSizeScaledFortCell 0x8861af8)
	struct FVector GetVolumeSizeScaledFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetVolumeSizeScaled (Underlying native function: GetVolumeSizeScaled 0x8861a84)
	struct FVector GetVolumeSizeScaled(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetVolumeSizeFortCell (Underlying native function: GetVolumeSizeFortCell 0x88619ec)
	struct FVector GetVolumeSizeFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetVolumeSize (Underlying native function: GetVolumeSize 0x8861944)
	struct FVector GetVolumeSize(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetVolumeMin (Underlying native function: GetVolumeMin 0x8861898)
	struct FVector GetVolumeMin(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetVolumeMax (Underlying native function: GetVolumeMax 0x88617d0)
	struct FVector GetVolumeMax(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetVolumeExtentScaledFortCell (Underlying native function: GetVolumeExtentScaledFortCell 0x8861734)
	struct FVector GetVolumeExtentScaledFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetVolumeExtentScaled (Underlying native function: GetVolumeExtentScaled 0x8861698)
	struct FVector GetVolumeExtentScaled(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetVolumeExtentFortCell (Underlying native function: GetVolumeExtentFortCell 0x88615fc)
	struct FVector GetVolumeExtentFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetVolumeExtent (Underlying native function: GetVolumeExtent 0x8861598)
	struct FVector GetVolumeExtent(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetVolumeCenter (Underlying native function: GetVolumeCenter 0x24a9654)
	struct FVector GetVolumeCenter(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetVolumeBounds (Underlying native function: GetVolumeBounds 0x8861458)
	void GetVolumeBounds(struct FVector& min, struct FVector& max); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolumeComponent.GetFortWaterBodyCubeVolume (Underlying native function: GetFortWaterBodyCubeVolume 0x8860c90)
	class AFortWaterBodyCubeVolume* GetFortWaterBodyCubeVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

