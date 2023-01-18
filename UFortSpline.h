// Class /Script/FortniteGame.FortSpline
// Size: 0x68
class UFortSpline : public UObject
{
	bool bConstantVelocity; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FFortCatmullRomSpline Spline; // 0x30 (0x20)
	struct FInterpCurveFloat SplineLookupTable; // 0x50 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortSpline.SetupSpline (Underlying native function: SetupSpline 0x8a9345c)
	void SetupSpline(struct TArray<struct FVector>& ControlPoints, float& InDuration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSpline.SetDuration (Underlying native function: SetDuration 0x7f0424c)
	void SetDuration(float& InDuration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSpline.IsValid (Underlying native function: IsValid 0x8a93258)
	bool IsValid(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpline.GetVelocityCorrectedTime (Underlying native function: GetVelocityCorrectedTime 0x8a93140)
	float GetVelocityCorrectedTime(float& Time); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpline.GetTangentFromTime (Underlying native function: GetTangentFromTime 0x8a93098)
	struct FVector GetTangentFromTime(float& Time); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpline.GetStartPoint (Underlying native function: GetStartPoint 0x8a93058)
	struct FVector GetStartPoint(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpline.GetSplineLengthAtTime (Underlying native function: GetSplineLengthAtTime 0x8a92f90)
	float GetSplineLengthAtTime(float& Time, float& StepSize); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpline.GetSplineLength (Underlying native function: GetSplineLength 0x8a92ef8)
	float GetSplineLength(float& StepSize); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpline.GetPositionFromTime (Underlying native function: GetPositionFromTime 0x8a92e50)
	struct FVector GetPositionFromTime(float& Time); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpline.GetNormalFromTime (Underlying native function: GetNormalFromTime 0x8a92b70)
	struct FVector GetNormalFromTime(float& Time); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpline.GetEndPoint (Underlying native function: GetEndPoint 0x8a929bc)
	struct FVector GetEndPoint(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpline.GetDuration (Underlying native function: GetDuration 0x28a35b8)
	float GetDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpline.GetBinormalFromTime (Underlying native function: GetBinormalFromTime 0x8a927c8)
	struct FVector GetBinormalFromTime(float& Time); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpline.EnableConstantVelocity (Underlying native function: EnableConstantVelocity 0x8a92714)
	void EnableConstantVelocity(bool& ConstVelEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSpline.DrawDebugSpline (Underlying native function: DrawDebugSpline 0x8a924b8)
	void DrawDebugSpline(class UObject*& WorldContextObject, int& Steps, float& LifeTime, float& Thickness, bool& bPersistent, bool& bJustDrawSpline, float& BasisLength); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSpline.ClearSpline (Underlying native function: ClearSpline 0x8a924a0)
	void ClearSpline(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSpline.AddControlPoint (Underlying native function: AddControlPoint 0x8a9239c)
	void AddControlPoint(struct FVector& Point, int& Index); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

