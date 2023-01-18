// Class /Script/Engine.SplineMeshComponent
// Size: 0x700
class USplineMeshComponent : public UStaticMeshComponent
{
	unsigned char unreflected_600[0x8]; // 0x600 (0x8) 
	struct FSplineMeshParams SplineParams; // 0x608 (0xb0)
	struct FVector SplineUpDir; // 0x6b8 (0x18)
	float SplineBoundaryMin; // 0x6d0 (0x4)
	struct FGuid CachedMeshBodySetupGuid; // 0x6d4 (0x10)
	unsigned char unreflected_6e4[0x4]; // 0x6e4 (0x4) 
	class UBodySetup* BodySetup; // 0x6e8 (0x8)
	float SplineBoundaryMax; // 0x6f0 (0x4)
	unsigned char bAllowSplineEditingPerInstance; // 0x6f4 (0x1)
	unsigned char bSmoothInterpRollScale; // 0x6f4 (0x1)
	unsigned char bMeshDirty; // 0x6f4 (0x1)
	struct TEnumAsByte<ESplineMeshAxis> ForwardAxis; // 0x6f5 (0x1)
	unsigned char unreflected_6f6[0x2]; // 0x6f6 (0x2) 
	float VirtualTextureMainPassMaxDrawDistance; // 0x6f8 (0x4)
	unsigned char bNeverNeedsCookedCollisionData; // 0x6fc (0x1)
	unsigned char padding_6fd[0x3]; // 0x6fd (0x3)

	/* Functions */

	// Function /Script/Engine.SplineMeshComponent.UpdateMesh (Underlying native function: UpdateMesh 0x9d2e4b4)
	void UpdateMesh(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetStartTangent (Underlying native function: SetStartTangent 0x9d2dce4)
	void SetStartTangent(struct FVector& StartTangent, bool& bUpdateMesh); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetStartScale (Underlying native function: SetStartScale 0x9d2dc18)
	void SetStartScale(struct FVector2D& StartScale, bool& bUpdateMesh); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetStartRoll (Underlying native function: SetStartRoll 0x9d2db40)
	void SetStartRoll(float& StartRoll, bool& bUpdateMesh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetStartPosition (Underlying native function: SetStartPosition 0x9d2da68)
	void SetStartPosition(struct FVector& StartPos, bool& bUpdateMesh); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetStartOffset (Underlying native function: SetStartOffset 0x9d2d998)
	void SetStartOffset(struct FVector2D& StartOffset, bool& bUpdateMesh); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetStartAndEnd (Underlying native function: SetStartAndEnd 0x9d2d7b4)
	void SetStartAndEnd(struct FVector& StartPos, struct FVector& StartTangent, struct FVector& EndPos, struct FVector& EndTangent, bool& bUpdateMesh); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetSplineUpDir (Underlying native function: SetSplineUpDir 0x9d2d634)
	void SetSplineUpDir(struct FVector& InSplineUpDir, bool& bUpdateMesh); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetForwardAxis (Underlying native function: SetForwardAxis 0x9d2c544)
	void SetForwardAxis(struct TEnumAsByte<ESplineMeshAxis>& InForwardAxis, bool& bUpdateMesh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetEndTangent (Underlying native function: SetEndTangent 0x9d2c260)
	void SetEndTangent(struct FVector& EndTangent, bool& bUpdateMesh); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetEndScale (Underlying native function: SetEndScale 0x9d2c194)
	void SetEndScale(struct FVector2D& EndScale, bool& bUpdateMesh); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetEndRoll (Underlying native function: SetEndRoll 0x9d2c0bc)
	void SetEndRoll(float& EndRoll, bool& bUpdateMesh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetEndPosition (Underlying native function: SetEndPosition 0x9d2bfe4)
	void SetEndPosition(struct FVector& EndPos, bool& bUpdateMesh); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetEndOffset (Underlying native function: SetEndOffset 0x9d2bf14)
	void SetEndOffset(struct FVector2D& EndOffset, bool& bUpdateMesh); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetBoundaryMin (Underlying native function: SetBoundaryMin 0x9d2b7c8)
	void SetBoundaryMin(float& InBoundaryMin, bool& bUpdateMesh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.SetBoundaryMax (Underlying native function: SetBoundaryMax 0x9d2b6f0)
	void SetBoundaryMax(float& InBoundaryMax, bool& bUpdateMesh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SplineMeshComponent.GetStartTangent (Underlying native function: GetStartTangent 0x9d29930)
	struct FVector GetStartTangent(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineMeshComponent.GetStartScale (Underlying native function: GetStartScale 0x9d29914)
	struct FVector2D GetStartScale(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineMeshComponent.GetStartRoll (Underlying native function: GetStartRoll 0x7596858)
	float GetStartRoll(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineMeshComponent.GetStartPosition (Underlying native function: GetStartPosition 0x9d298ec)
	struct FVector GetStartPosition(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineMeshComponent.GetStartOffset (Underlying native function: GetStartOffset 0x9d298d0)
	struct FVector2D GetStartOffset(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineMeshComponent.GetSplineUpDir (Underlying native function: GetSplineUpDir 0x9d298a8)
	struct FVector GetSplineUpDir(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineMeshComponent.GetForwardAxis (Underlying native function: GetForwardAxis 0x9d27e30)
	struct TEnumAsByte<ESplineMeshAxis> GetForwardAxis(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineMeshComponent.GetEndTangent (Underlying native function: GetEndTangent 0x9d27c6c)
	struct FVector GetEndTangent(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineMeshComponent.GetEndScale (Underlying native function: GetEndScale 0x9d27c50)
	struct FVector2D GetEndScale(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineMeshComponent.GetEndRoll (Underlying native function: GetEndRoll 0x9d27c38)
	float GetEndRoll(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineMeshComponent.GetEndPosition (Underlying native function: GetEndPosition 0x9d27c10)
	struct FVector GetEndPosition(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineMeshComponent.GetEndOffset (Underlying native function: GetEndOffset 0x9d27bf4)
	struct FVector2D GetEndOffset(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineMeshComponent.GetBoundaryMin (Underlying native function: GetBoundaryMin 0x9d2738c)
	float GetBoundaryMin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SplineMeshComponent.GetBoundaryMax (Underlying native function: GetBoundaryMax 0x9d27374)
	float GetBoundaryMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

