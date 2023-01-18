// BlueprintGeneratedClass /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C
// Size: 0x3d8
class ABP_ZipLine_Athena_Harness_Yellow_C : public ABP_ZipLine_Athena_Harness_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x390 (0x8)
	class UNiagaraComponent* NSZiplinePulleySpeedLinesConverted; // 0x398 (0x8)
	class UNiagaraComponent* NSZiplineSpeedline; // 0x3a0 (0x8)
	float AlphaNewTrack0AF34CA1D47D28FE19CCA3C98688125DE; // 0x3a8 (0x4)
	struct TEnumAsByte<ETimelineDirection> AlphaDirectionAF34CA1D47D28FE19CCA3C98688125DE; // 0x3ac (0x1)
	unsigned char unreflected_3ad[0x3]; // 0x3ad (0x3) 
	class UTimelineComponent* Alpha; // 0x3b0 (0x8)
	float SparkNewTrack0A812B2F04CB78DDF352B84A578861501; // 0x3b8 (0x4)
	struct TEnumAsByte<ETimelineDirection> SparkDirectionA812B2F04CB78DDF352B84A578861501; // 0x3bc (0x1)
	unsigned char unreflected_3bd[0x3]; // 0x3bd (0x3) 
	class UTimelineComponent* spark; // 0x3c0 (0x8)
	double BeginLocationz; // 0x3c8 (0x8)
	double Location; // 0x3d0 (0x8)

	/* Functions */

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Spark__FinishedFunc (Has no native function)
	void SparkFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Spark__UpdateFunc (Has no native function)
	void SparkUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Alpha__FinishedFunc (Has no native function)
	void AlphaFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Alpha__UpdateFunc (Has no native function)
	void AlphaUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.UpdateZiplineFX (Has no native function)
	void UpdateZiplineFX(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Update Begin Z (Has no native function)
	void UpdateBeginZ(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ResetBlue (Has no native function)
	void ResetBlue(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Gadgets/Zipline/Meshes/BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow (Has no native function)
	void ExecuteUbergraphBPZipLineAthenaHarnessYellow(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, bool& TempboolIsClosedVariable, bool& TempboolHasBeenInitdVariable, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncK2GetComponentLocationReturnValue1, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& TempboolHasBeenInitdVariable1, bool& TempboolIsClosedVariable1); // (Final | 0x00008000 | HasDefaults)
};

