// Class /Script/FortniteGame.FortMediaRegionLockComponent
// Size: 0xe0
class UFortMediaRegionLockComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnMediaRegionLockLocaleComplete; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnRegionLockCanPlayContentInRegionComplete; // 0xb0 (0x10)
	unsigned char padding_c0[0x20]; // 0xc0 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.SetEventCallback (Underlying native function: SetEventCallback 0x89707c4)
	void SetEventCallback(bool& bSet); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshRemoveRegionValue_String (Underlying native function: MeshRemoveRegionValue_String 0x896fa78)
	static void MeshRemoveRegionValueString(struct TArray<struct FMeshRegionLockData_String>& inArray, struct FString& InRegionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshRemoveRegionValue_Int64 (Underlying native function: MeshRemoveRegionValue_Int64 0x896f568)
	static void MeshRemoveRegionValueInt64(struct TArray<struct FMeshRegionLockData_Int64>& inArray, struct FString& InRegionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshRemoveRegionValue_Int (Underlying native function: MeshRemoveRegionValue_Int 0x896f8c8)
	static void MeshRemoveRegionValueInt(struct TArray<struct FMeshRegionLockData_Int>& inArray, struct FString& InRegionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshRemoveRegionValue_Float (Underlying native function: MeshRemoveRegionValue_Float 0x896f718)
	static void MeshRemoveRegionValueFloat(struct TArray<struct FMeshRegionLockData_Float>& inArray, struct FString& InRegionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshRemoveRegionValue_DateTime (Underlying native function: MeshRemoveRegionValue_DateTime 0x896f568)
	static void MeshRemoveRegionValueDateTime(struct TArray<struct FMeshRegionLockData_DateTime>& inArray, struct FString& InRegionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshRemoveRegionValue_Bool (Underlying native function: MeshRemoveRegionValue_Bool 0x896f3b8)
	static void MeshRemoveRegionValueBool(struct TArray<struct FMeshRegionLockData_Bool>& inArray, struct FString& InRegionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshRemoveRegionTrackerValue (Underlying native function: MeshRemoveRegionTrackerValue 0x896f1f8)
	static bool MeshRemoveRegionTrackerValue(struct FMeshRegionLockData_Tracker& InTracker, struct FString& InRegionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshGetRegionValue_String (Underlying native function: MeshGetRegionValue_String 0x896efb4)
	static bool MeshGetRegionValueString(struct FString& InFind, struct TArray<struct FMeshRegionLockData_String>& inArray, struct FMeshRegionLockData_String& OutItem); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshGetRegionValue_Int64 (Underlying native function: MeshGetRegionValue_Int64 0x896ea30)
	static bool MeshGetRegionValueInt64(struct FString& InFind, struct TArray<struct FMeshRegionLockData_Int64>& inArray, struct FMeshRegionLockData_Int64& OutItem); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshGetRegionValue_Int (Underlying native function: MeshGetRegionValue_Int 0x896ecf4)
	static bool MeshGetRegionValueInt(struct FString& InFind, struct TArray<struct FMeshRegionLockData_Int>& inArray, struct FMeshRegionLockData_Int& OutItem); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshGetRegionValue_Float (Underlying native function: MeshGetRegionValue_Float 0x896e768)
	static bool MeshGetRegionValueFloat(struct FString& InFind, struct TArray<struct FMeshRegionLockData_Float>& inArray, struct FMeshRegionLockData_Float& OutItem); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshGetRegionValue_DateTime (Underlying native function: MeshGetRegionValue_DateTime 0x896e4c4)
	static bool MeshGetRegionValueDateTime(struct FString& InFind, struct TArray<struct FMeshRegionLockData_DateTime>& inArray, struct FMeshRegionLockData_DateTime& OutItem); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshGetRegionValue_Bool (Underlying native function: MeshGetRegionValue_Bool 0x896e204)
	static bool MeshGetRegionValueBool(struct FString& InFind, struct TArray<struct FMeshRegionLockData_Bool>& inArray, struct FMeshRegionLockData_Bool& OutItem); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshAddRegionValue_String (Underlying native function: MeshAddRegionValue_String 0x896de54)
	static void MeshAddRegionValueString(struct FString& InString, struct TArray<struct FMeshRegionLockData_String>& inArray, struct FString& InRegionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshAddRegionValue_Int64 (Underlying native function: MeshAddRegionValue_Int64 0x896da74)
	static void MeshAddRegionValueInt64(int64_t& InInt64, struct TArray<struct FMeshRegionLockData_Int64>& inArray, struct FString& InRegionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshAddRegionValue_Int (Underlying native function: MeshAddRegionValue_Int 0x896dc64)
	static void MeshAddRegionValueInt(int& inInt, struct TArray<struct FMeshRegionLockData_Int>& inArray, struct FString& InRegionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshAddRegionValue_Float (Underlying native function: MeshAddRegionValue_Float 0x896d880)
	static void MeshAddRegionValueFloat(float& InFloat, struct TArray<struct FMeshRegionLockData_Float>& inArray, struct FString& InRegionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshAddRegionValue_DateTime (Underlying native function: MeshAddRegionValue_DateTime 0x896d690)
	static void MeshAddRegionValueDateTime(struct FDateTime*& InDateTime, struct TArray<struct FMeshRegionLockData_DateTime>& inArray, struct FString& InRegionData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshAddRegionValue_Bool (Underlying native function: MeshAddRegionValue_Bool 0x896d49c)
	static void MeshAddRegionValueBool(bool& bInBool, struct TArray<struct FMeshRegionLockData_Bool>& inArray, struct FString& InRegionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.MeshAddRegionTrackerValue (Underlying native function: MeshAddRegionTrackerValue 0x896d2ec)
	static void MeshAddRegionTrackerValue(struct FMeshRegionLockData_Tracker& InTracker, struct FString& InRegionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.GetRegionLockApproval (Underlying native function: GetRegionLockApproval 0x896cb10)
	void GetRegionLockApproval(class AFortPlayerController*& FortPC, struct FString& UseURL, struct FString& Data); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaRegionLockComponent.GetLocale (Underlying native function: GetLocale 0x896c978)
	void GetLocale(class AFortPlayerController*& FortPC); // (Final | Native | Public | BlueprintCallable)
};

