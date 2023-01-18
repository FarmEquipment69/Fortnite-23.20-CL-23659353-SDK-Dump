// Class /Script/AnimGraphRuntime.SkeletalControlLibrary
// Size: 0x28
class USkeletalControlLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AnimGraphRuntime.SkeletalControlLibrary.SetAlpha (Underlying native function: SetAlpha 0x99ff22c)
	static struct FSkeletalControlReference SetAlpha(struct FSkeletalControlReference& SkeletalControl, float& Alpha); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.SkeletalControlLibrary.GetAlpha (Underlying native function: GetAlpha 0x99fc624)
	static float GetAlpha(struct FSkeletalControlReference& SkeletalControl); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure (Underlying native function: ConvertToSkeletalControlPure 0x99fc0c0)
	static void ConvertToSkeletalControlPure(struct FAnimNodeReference& Node, struct FSkeletalControlReference& SkeletalControl, bool& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl (Underlying native function: ConvertToSkeletalControl 0x99fbfa8)
	static struct FSkeletalControlReference ConvertToSkeletalControl(struct FAnimNodeReference& Node, enum EAnimNodeReferenceConversionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

