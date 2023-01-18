// Class /Script/AIModule.NavLocalGridManager
// Size: 0x58
class UNavLocalGridManager : public UObject
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/AIModule.NavLocalGridManager.SetLocalNavigationGridDensity (Underlying native function: SetLocalNavigationGridDensity 0xa1daeac)
	static bool SetLocalNavigationGridDensity(class UObject*& WorldContextObject, float& CellSize); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AIModule.NavLocalGridManager.RemoveLocalNavigationGrid (Underlying native function: RemoveLocalNavigationGrid 0xa1daae8)
	static void RemoveLocalNavigationGrid(class UObject*& WorldContextObject, int& GridId, bool& bRebuildGrids); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AIModule.NavLocalGridManager.FindLocalNavigationGridPath (Underlying native function: FindLocalNavigationGridPath 0xa1d9bf8)
	static bool FindLocalNavigationGridPath(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, struct TArray<struct FVector>& PathPoints); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints (Underlying native function: AddLocalNavigationGridForPoints 0xa1d9a50)
	static int AddLocalNavigationGridForPoints(class UObject*& WorldContextObject, struct TArray<struct FVector>& Locations, int& Radius2D, float& Height, bool& bRebuildGrids); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint (Underlying native function: AddLocalNavigationGridForPoint 0xa1d98c4)
	static int AddLocalNavigationGridForPoint(class UObject*& WorldContextObject, struct FVector& Location, int& Radius2D, float& Height, bool& bRebuildGrids); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule (Underlying native function: AddLocalNavigationGridForCapsule 0xa1d96b4)
	static int AddLocalNavigationGridForCapsule(class UObject*& WorldContextObject, struct FVector& Location, float& CapsuleRadius, float& CapsuleHalfHeight, int& Radius2D, float& Height, bool& bRebuildGrids); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForBox (Underlying native function: AddLocalNavigationGridForBox 0xa1d947c)
	static int AddLocalNavigationGridForBox(class UObject*& WorldContextObject, struct FVector& Location, struct FVector& Extent, struct FRotator& Rotation, int& Radius2D, float& Height, bool& bRebuildGrids); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

