// Class /Script/FortniteAI.FortQueryTwoPointSolver
// Size: 0x140
class UFortQueryTwoPointSolver : public UObject
{
	class UEnvQuery* QueryPointA; // 0x28 (0x8)
	class UEnvQuery* QueryPointB; // 0x30 (0x8)
	struct TArray<struct FEnvNamedValue> QueryParamsA; // 0x38 (0x10)
	struct TArray<struct FEnvNamedValue> QueryParamsB; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x68 (0x10)
	enum ETwoPointSolverRotationA RotationMode; // 0x78 (0x1)
	unsigned char unreflected_79[0x7]; // 0x79 (0x7) 
	struct FRotator MinRotationOffset; // 0x80 (0x18)
	struct FRotator MaxRotationOffset; // 0x98 (0x18)
	unsigned char bUseNegativeAngleOffsets; // 0xb0 (0x1)
	unsigned char bUsePositiveAngleOffsets; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x7f]; // 0xb1 (0x7f) 
	class UFortAISystem* AISys; // 0x130 (0x8)
	class UObject* CachedQuerier; // 0x138 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortQueryTwoPointSolver.Start (Underlying native function: Start 0xa2e788c)
	void Start(class UObject*& Querier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortQueryTwoPointSolver.SkipToNextPointA (Underlying native function: SkipToNextPointA 0xa2e7874)
	void SkipToNextPointA(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortQueryTwoPointSolver.SetCustomRotationA (Underlying native function: SetCustomRotationA 0xa2e77dc)
	void SetCustomRotationA(struct FRotator& Rotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortQueryTwoPointSolver.OnCustomRotationMode (Has no native function)
	void OnCustomRotationMode(struct FVector& InPointA, struct FVector& Querier); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteAI.FortQueryTwoPointSolver.GetRandomRotationOffset (Underlying native function: GetRandomRotationOffset 0xa2e75c4)
	struct FRotator GetRandomRotationOffset(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortQueryTwoPointSolver.AddNamedFloatParamB (Underlying native function: AddNamedFloatParamB 0xa2e74c8)
	void AddNamedFloatParamB(struct FName& ParamName, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortQueryTwoPointSolver.AddNamedFloatParamA (Underlying native function: AddNamedFloatParamA 0xa2e73cc)
	void AddNamedFloatParamA(struct FName& ParamName, float& Value); // (Final | Native | Public | BlueprintCallable)
};

