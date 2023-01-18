// Class /Script/MotionWarping.MotionWarpingUtilities
// Size: 0x28
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation (Underlying native function: GetMotionWarpingWindowsFromAnimation 0x7f64720)
	static void GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase*& Animation, struct TArray<struct FMotionWarpingWindowData>& OutWindows); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation (Underlying native function: GetMotionWarpingWindowsForWarpTargetFromAnimation 0x7f64458)
	static void GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase*& Animation, struct FName& WarpTargetName, struct TArray<struct FMotionWarpingWindowData>& OutWindows); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation (Underlying native function: ExtractRootMotionFromAnimation 0x7f64328)
	static struct FTransform ExtractRootMotionFromAnimation(class UAnimSequenceBase*& Animation, float& StartTime, float& EndTime); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

