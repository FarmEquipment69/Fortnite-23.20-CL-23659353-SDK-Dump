// Class /Script/FortniteGame.FortInGameMapManager
// Size: 0x900
class AFortInGameMapManager : public AActor
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	struct FMulticastInlineDelegate OnAllowShowMainMapChanged; // 0x298 (0x10)
	unsigned char unreflected_2a8[0x18]; // 0x2a8 (0x18) 
	struct TArray<struct FTeamMapInfo> MapData; // 0x2c0 (0x10)
	unsigned char bClearAllFog; // 0x2d0 (0x1)
	unsigned char unreflected_2d1[0x3]; // 0x2d1 (0x3) 
	struct FName StaticCaptureCameraName; // 0x2d4 (0x4)
	unsigned char unreflected_2d8[0xc]; // 0x2d8 (0xc) 
	int MapLayerSize; // 0x2e4 (0x4)
	struct FMargin MapMargin; // 0x2e8 (0x10)
	class UClass* SceneCaptureClass; // 0x2f8 (0x8)
	class UClass* SceneCaptureBlurryClass; // 0x300 (0x8)
	class UMaterialInterface* MapMaterial; // 0x308 (0x8)
	class UMaterialInstanceDynamic* MapMaterialMID; // 0x310 (0x8)
	float MapOpacityWhenWalking; // 0x318 (0x4)
	float OffsetZ; // 0x31c (0x4)
	int IconVisibilityFogThreshold; // 0x320 (0x4)
	float DelayBetweenDispersions; // 0x324 (0x4)
	float ExploredRadius; // 0x328 (0x4)
	float ExploredFalloffRadius; // 0x32c (0x4)
	float SeenRadius; // 0x330 (0x4)
	float SeenFalloffRadius; // 0x334 (0x4)
	int VisibilityMaxGradient; // 0x338 (0x4)
	int UnexploredOpacity; // 0x33c (0x4)
	struct FCurveTableRowHandle CloudBrightnessCurve; // 0x340 (0x10)
	struct FCurveTableRowHandle DesaturationFactorCurve; // 0x350 (0x10)
	float MaxPercentageMapExplored; // 0x360 (0x4)
	float MapExplorationThresholdPercentage; // 0x364 (0x4)
	float LastMapExplorationThresholdPercentageReached; // 0x368 (0x4)
	unsigned char unreflected_36c[0x4]; // 0x36c (0x4) 
	struct FMulticastInlineDelegate OnMapFullyExplored; // 0x370 (0x10)
	struct FMulticastInlineDelegate OnMapExplorationThresholdReached; // 0x380 (0x10)
	enum EMapCaptureMethod MapCaptureMethod; // 0x390 (0x4)
	unsigned char unreflected_394[0x4]; // 0x394 (0x4) 
	class ASceneCapture2D* SceneCapture; // 0x398 (0x8)
	class ASceneCapture2D* SceneCaptureBlurry; // 0x3a0 (0x8)
	unsigned char unreflected_3a8[0x2b8]; // 0x3a8 (0x2b8) 
	class UTexture2D* FogMask; // 0x660 (0x8)
	bool bUseExplorationBasedFogOfWar; // 0x668 (0x1)
	bool bShareMapWithTeam; // 0x669 (0x1)
	bool bResetMapDataOnTeamSwitch; // 0x66a (0x1)
	unsigned char unreflected_66b[0x5]; // 0x66b (0x5) 
	class UTexture2D* HeatmapMask; // 0x670 (0x8)
	unsigned char unreflected_678[0x10]; // 0x678 (0x10) 
	bool bCanUpdateHeatmapMask; // 0x688 (0x1)
	unsigned char unreflected_689[0x8b]; // 0x689 (0x8b) 
	float MapWorldScale; // 0x714 (0x4)
	unsigned char unreflected_718[0x10]; // 0x718 (0x10) 
	struct FLinearColor DefaultMapLocationFontColor[0x3]; // 0x728 (0x10) (ARRAY) 
	struct FSlateFontInfo DefaultMapLocationFont; // 0x758 (0x58)
	uint32_t MobileMapLocationFontSizeOverride; // 0x7b0 (0x4)
	unsigned char unreflected_7b4[0x4]; // 0x7b4 (0x4) 
	struct FSlateFontInfo MapLocationFont; // 0x7b8 (0x58)
	unsigned char unreflected_810[0x8]; // 0x810 (0x8) 
	struct TMap<struct FGameplayTag, struct FMapLocationRenderData> MinimapLocationRenderDataPlayer1; // 0x818 (0x50)
	struct TMap<struct FGameplayTag, struct FMapLocationRenderData> MinimapLocationRenderDataPlayer2; // 0x868 (0x50)
	unsigned char unreflected_8b8[0x18]; // 0x8b8 (0x18) 
	struct TArray<struct TWeakObjectPtr<class UClass>> ActorClassesToHide; // 0x8d0 (0x10)
	unsigned char padding_8e0[0x20]; // 0x8e0 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortInGameMapManager.ShouldShowMainMap (Underlying native function: ShouldShowMainMap 0x8947a38)
	bool ShouldShowMainMap(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortInGameMapManager.SetCaptureLocation (Underlying native function: SetCaptureLocation 0x89470ac)
	void SetCaptureLocation(struct FVector& Location); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortInGameMapManager.SetActorBoundaryData (Underlying native function: SetActorBoundaryData 0x8946c50)
	void SetActorBoundaryData(float& UpperZ, float& LowerZ, struct TArray<struct TWeakObjectPtr<class UClass>>& ClassesToHide); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortInGameMapManager.ServerClearAllFog (Underlying native function: ServerClearAllFog 0x26daa0c)
	void ServerClearAllFog(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortInGameMapManager.ResetCaptureLocation (Underlying native function: ResetCaptureLocation 0x8946670)
	void ResetCaptureLocation(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortInGameMapManager.PaintOnFog (Underlying native function: PaintOnFog 0x8943188)
	void PaintOnFog(struct FVector& WorldCoords, struct TEnumAsByte<EFortTeam>& Team); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortInGameMapManager.OnRep_MapData (Underlying native function: OnRep_MapData 0x8942f28)
	void OnRepMapData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortInGameMapManager.OnRep_ClearAllFog (Underlying native function: OnRep_ClearAllFog 0x8942ec0)
	void OnRepClearAllFog(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortInGameMapManager.GetStaticCaptureSetupComplete (Underlying native function: GetStaticCaptureSetupComplete 0x893a484)
	bool GetStaticCaptureSetupComplete(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortInGameMapManager.GetHeatmapMaskScale (Underlying native function: GetHeatmapMaskScale 0x8937524)
	float GetHeatmapMaskScale(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInGameMapManager.GetHeatmapMask (Underlying native function: GetHeatmapMask 0x893750c)
	class UTexture2D* GetHeatmapMask(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInGameMapManager.GetCurrent (Underlying native function: GetCurrent 0x8936610)
	static class AFortInGameMapManager* GetCurrent(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortInGameMapManager.BroadcastExplorationEvents (Underlying native function: BroadcastExplorationEvents 0x892d750)
	void BroadcastExplorationEvents(struct TArray<struct FTeamMapExplorationEvent>& Events); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortInGameMapManager.BPWorldLocationToMapLocation (Underlying native function: BPWorldLocationToMapLocation 0x892cbd4)
	struct FVector2D BPWorldLocationToMapLocation(struct FVector& WorldLocation, float& InMapSize); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortInGameMapManager.AllowShowMiniMap (Underlying native function: AllowShowMiniMap 0x892b58c)
	void AllowShowMiniMap(bool& bAllowShow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortInGameMapManager.AllowShowMainMap (Underlying native function: AllowShowMainMap 0x892b4f0)
	void AllowShowMainMap(bool& bAllowShow); // (Final | Native | Public | BlueprintCallable)
};

