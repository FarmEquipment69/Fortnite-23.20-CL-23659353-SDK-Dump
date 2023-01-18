// Class /Script/CorruptionGameplayCodeRuntime.CubeMovementStaticPath
// Size: 0x510
class ACubeMovementStaticPath : public AScriptedObjectMovement_StaticPath
{
	float GenerationZTraceHeight; // 0x4d8 (0x4)
	float CubeSpacingFactor; // 0x4dc (0x4)
	float CubeAngleLimitDegrees; // 0x4e0 (0x4)
	unsigned char unreflected_4e4[0x4]; // 0x4e4 (0x4) 
	class UFortCorruptionSequenceData* CorruptionSequence; // 0x4e8 (0x8)
	unsigned char unreflected_4f0[0x8]; // 0x4f0 (0x8) 
	struct TArray<struct FTravelerStepCorruptionOverrideData> TravelerCorruptionStepPercentOverrides; // 0x4f8 (0x10)
	unsigned char padding_508[0x8]; // 0x508 (0x8)

	/* Functions */

	// Function /Script/CorruptionGameplayCodeRuntime.CubeMovementStaticPath.EditorGetCorruptionGenerationData (Underlying native function: EditorGetCorruptionGenerationData 0x72beac8)
	void EditorGetCorruptionGenerationData(struct FCubeMovement_CorruptionGenerationData& OutData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CorruptionGameplayCodeRuntime.CubeMovementStaticPath.ClearAllGeneratedSplinesAndLockedData (Underlying native function: ClearAllGeneratedSplinesAndLockedData 0x72be7f4)
	void ClearAllGeneratedSplinesAndLockedData(); // (Final | Native | Protected)
};

