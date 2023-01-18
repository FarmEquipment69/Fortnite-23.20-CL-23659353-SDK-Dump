// Class /Script/Engine.StaticMeshComponent
// Size: 0x600
class UStaticMeshComponent : public UMeshComponent
{
	int ForcedLodModel; // 0x580 (0x4)
	int PreviousLODLevel; // 0x584 (0x4)
	int MinLOD; // 0x588 (0x4)
	int SubDivisionStepSize; // 0x58c (0x4)
	class UStaticMesh* StaticMesh; // 0x590 (0x8)
	struct FColor WireframeColorOverride; // 0x598 (0x4)
	unsigned char bDisallowNanite; // 0x59c (0x1)
	unsigned char bForceDisableNanite; // 0x59c (0x1)
	unsigned char bEvaluateWorldPositionOffset; // 0x59c (0x1)
	unsigned char bEvaluateWorldPositionOffsetInRayTracing; // 0x59c (0x1)
	unsigned char unreflected_59d[0x3]; // 0x59d (0x3) 
	int WorldPositionOffsetDisableDistance; // 0x5a0 (0x4)
	unsigned char bOverrideWireframeColor; // 0x5a4 (0x1)
	unsigned char bOverrideMinLOD; // 0x5a4 (0x1)
	unsigned char bOverrideNavigationExport; // 0x5a4 (0x1)
	unsigned char bForceNavigationObstacle; // 0x5a4 (0x1)
	unsigned char bDisallowMeshPaintPerInstance; // 0x5a4 (0x1)
	unsigned char bIgnoreInstanceForTextureStreaming; // 0x5a4 (0x1)
	unsigned char bOverrideLightMapRes; // 0x5a4 (0x1)
	unsigned char bCastDistanceFieldIndirectShadow; // 0x5a5 (0x1)
	unsigned char bOverrideDistanceFieldSelfShadowBias; // 0x5a5 (0x1)
	unsigned char bUseSubDivisions; // 0x5a5 (0x1)
	unsigned char bUseDefaultCollision; // 0x5a5 (0x1)
	unsigned char bSortTriangles; // 0x5a5 (0x1)
	unsigned char bReverseCulling; // 0x5a5 (0x1)
	unsigned char unreflected_5a6[0x2]; // 0x5a6 (0x2) 
	int OverriddenLightMapRes; // 0x5a8 (0x4)
	float DistanceFieldIndirectShadowMinVisibility; // 0x5ac (0x4)
	float DistanceFieldSelfShadowBias; // 0x5b0 (0x4)
	float StreamingDistanceMultiplier; // 0x5b4 (0x4)
	struct TArray<struct FStaticMeshComponentLODInfo> LodData; // 0x5b8 (0x10)
	struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; // 0x5c8 (0x10)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x5d8 (0x18)
	unsigned char padding_5f0[0x10]; // 0x5f0 (0x10)

	/* Functions */

	// Function /Script/Engine.StaticMeshComponent.SetStaticMesh (Underlying native function: SetStaticMesh 0x2587610)
	bool SetStaticMesh(class UStaticMesh*& NewMesh); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.StaticMeshComponent.SetReverseCulling (Underlying native function: SetReverseCulling 0x9d2cd84)
	void SetReverseCulling(bool& ReverseCulling); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StaticMeshComponent.SetForcedLodModel (Underlying native function: SetForcedLodModel 0x9d2c4b8)
	void SetForcedLodModel(int& NewForcedLodModel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StaticMeshComponent.SetForceDisableNanite (Underlying native function: SetForceDisableNanite 0x9d2c438)
	void SetForceDisableNanite(bool& bInForceDisableNanite); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StaticMeshComponent.SetEvaluateWorldPositionOffsetInRayTracing (Underlying native function: SetEvaluateWorldPositionOffsetInRayTracing 0x9d2c3b8)
	void SetEvaluateWorldPositionOffsetInRayTracing(bool& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StaticMeshComponent.SetEvaluateWorldPositionOffset (Underlying native function: SetEvaluateWorldPositionOffset 0x9d2c338)
	void SetEvaluateWorldPositionOffset(bool& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StaticMeshComponent.SetDistanceFieldSelfShadowBias (Underlying native function: SetDistanceFieldSelfShadowBias 0x9d2be08)
	void SetDistanceFieldSelfShadowBias(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StaticMeshComponent.OnRep_StaticMesh (Underlying native function: OnRep_StaticMesh 0x2696a40)
	void OnRepStaticMesh(class UStaticMesh*& OldStaticMesh); // (Final | Native | Public)

	// Function /Script/Engine.StaticMeshComponent.GetLocalBounds (Underlying native function: GetLocalBounds 0x9d2811c)
	void GetLocalBounds(struct FVector& min, struct FVector& max); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMeshComponent.GetInitialEvaluateWorldPositionOffset (Underlying native function: GetInitialEvaluateWorldPositionOffset 0x9d27e48)
	bool GetInitialEvaluateWorldPositionOffset(); // (Final | Native | Public | BlueprintCallable)
};

