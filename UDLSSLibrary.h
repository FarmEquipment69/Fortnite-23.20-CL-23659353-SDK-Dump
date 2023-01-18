// Class /Script/DLSSBlueprint.DLSSLibrary
// Size: 0x28
class UDLSSLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSSharpness (Underlying native function: SetDLSSSharpness 0x5bd6090)
	static void SetDLSSSharpness(float& Sharpness); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSMode (Underlying native function: SetDLSSMode 0x5bd5fa0)
	static void SetDLSSMode(class UObject*& WorldContextObject, enum UDLSSMode& DLSSMode); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSSupport (Underlying native function: QueryDLSSSupport 0x5bd5f70)
	static enum UDLSSSupport QueryDLSSSupport(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSSupported (Underlying native function: IsDLSSSupported 0x5bd5f40)
	static bool IsDLSSSupported(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported (Underlying native function: IsDLSSModeSupported 0x5bd5ea0)
	static bool IsDLSSModeSupported(enum UDLSSMode& DLSSMode); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSEnabled (Underlying native function: IsDLSSEnabled 0x5bd5e70)
	static bool IsDLSSEnabled(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLAAEnabled (Underlying native function: IsDLAAEnabled 0x5bd5dd0)
	static bool IsDLAAEnabled(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes (Underlying native function: GetSupportedDLSSModes 0x5bd5d50)
	static struct TArray<enum UDLSSMode> GetSupportedDLSSModes(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSSharpness (Underlying native function: GetDLSSSharpness 0x5bd5cd0)
	static float GetDLSSSharpness(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange (Underlying native function: GetDLSSScreenPercentageRange 0x5bd5bc0)
	static void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation (Underlying native function: GetDLSSModeInformation 0x5bd5870)
	static void GetDLSSModeInformation(enum UDLSSMode& DLSSMode, struct FVector2D& ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMode (Underlying native function: GetDLSSMode 0x5bd5840)
	static enum UDLSSMode GetDLSSMode(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion (Underlying native function: GetDLSSMinimumDriverVersion 0x5bd5710)
	static void GetDLSSMinimumDriverVersion(int& MinDriverVersionMajor, int& MinDriverVersionMinor); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode (Underlying native function: GetDefaultDLSSMode 0x5bd5d00)
	static enum UDLSSMode GetDefaultDLSSMode(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLSS (Underlying native function: EnableDLSS 0x5bd5680)
	static void EnableDLSS(bool& bEnabled); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLAA (Underlying native function: EnableDLAA 0x5bd55f0)
	static void EnableDLAA(bool& bEnabled); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)
};

