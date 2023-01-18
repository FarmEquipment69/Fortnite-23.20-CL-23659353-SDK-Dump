// Class /Script/TargetingSystem.TargetingSelectionTask_Trace
// Size: 0xb8
class UTargetingSelectionTask_Trace : public UTargetingTask
{
	enum ETargetingTraceType TraceType; // 0x28 (0x1)
	struct TEnumAsByte<ETraceTypeQuery> TraceChannel; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	struct FCollisionProfileName CollisionProfileName; // 0x2c (0x4)
	struct FScalableFloat DefaultSweptTraceRadius; // 0x30 (0x28)
	struct FScalableFloat DefaultTraceLength; // 0x58 (0x28)
	struct FVector DefaultSourceOffset; // 0x80 (0x18)
	struct FVector ExplicitTraceDirection; // 0x98 (0x18)
	unsigned char bComplexTrace; // 0xb0 (0x1)
	unsigned char bIgnoreSourceActor; // 0xb0 (0x1)
	unsigned char bIgnoreInstigatorActor; // 0xb0 (0x1)
	unsigned char padding_b1[0x7]; // 0xb1 (0x7)

	/* Functions */

	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetTraceLength (Underlying native function: GetTraceLength 0x73121e0)
	float GetTraceLength(struct FTargetingRequestHandle& TargetingHandle); // (Native | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetTraceDirection (Underlying native function: GetTraceDirection 0x7312130)
	struct FVector GetTraceDirection(struct FTargetingRequestHandle& TargetingHandle); // (Native | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent | Const)

	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceRadius (Underlying native function: GetSweptTraceRadius 0x7311c00)
	float GetSweptTraceRadius(struct FTargetingRequestHandle& TargetingHandle); // (Native | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSourceOffset (Underlying native function: GetSourceOffset 0x7311b50)
	struct FVector GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle); // (Native | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent | Const)

	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSourceLocation (Underlying native function: GetSourceLocation 0x73119f0)
	struct FVector GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle); // (Native | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent | Const)

	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetAdditionalActorsToIgnore (Underlying native function: GetAdditionalActorsToIgnore 0x7311840)
	void GetAdditionalActorsToIgnore(struct FTargetingRequestHandle& TargetingHandle, struct TArray<class AActor*>& OutAdditionalActorsToIgnore); // (Native | Event | Protected | HasOutParms | BlueprintEvent | Const)
};

