// Class /Script/FortniteGame.CreativeClassOptionBlueprintLibrary
// Size: 0x28
class UCreativeClassOptionBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.CreativeClassOptionBlueprintLibrary.SetLegacyClassIndex (Underlying native function: SetLegacyClassIndex 0x87b6c18)
	static void SetLegacyClassIndex(struct FCreativeClassOption*& ClassOption, int& LegacyClassIndex); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeClassOptionBlueprintLibrary.MakeFromLegacyClassIndex (Underlying native function: MakeFromLegacyClassIndex 0x87b56fc)
	static struct FCreativeClassOption* MakeFromLegacyClassIndex(int& LegacyClassIndex); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeClassOptionBlueprintLibrary.IsClassType (Underlying native function: IsClassType 0x87b4710)
	static bool IsClassType(struct FCreativeClassOption*& ClassOption, enum ECreativeClassType& ClassType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeClassOptionBlueprintLibrary.GetLegacyClassIndex (Underlying native function: GetLegacyClassIndex 0x87b2b8c)
	static int GetLegacyClassIndex(struct FCreativeClassOption*& ClassOption); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeClassOptionBlueprintLibrary.ConvertToClassSlotIndex (Underlying native function: ConvertToClassSlotIndex 0x87b0f78)
	static unsigned char ConvertToClassSlotIndex(struct FCreativeClassOption*& ClassOption); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

