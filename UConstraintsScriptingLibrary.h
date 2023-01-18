// Class /Script/Constraints.ConstraintsScriptingLibrary
// Size: 0x28
class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Constraints.ConstraintsScriptingLibrary.RemoveConstraint (Underlying native function: RemoveConstraint 0x9a25a90)
	static bool RemoveConstraint(class UWorld*& InWorld, int& InIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Constraints.ConstraintsScriptingLibrary.GetManager (Underlying native function: GetManager 0x9a25a10)
	static class UConstraintsManager* GetManager(class UWorld*& InWorld); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle (Underlying native function: CreateTransformableComponentHandle 0x9a25854)
	static class UTransformableComponentHandle* CreateTransformableComponentHandle(class UWorld*& InWorld, class USceneComponent*& InSceneComponent, struct FName& InSocketName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Constraints.ConstraintsScriptingLibrary.CreateFromType (Underlying native function: CreateFromType 0x9a25668)
	static class UTickableTransformConstraint* CreateFromType(class UWorld*& InWorld, enum ETransformConstraintType& InType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Constraints.ConstraintsScriptingLibrary.AddConstraint (Underlying native function: AddConstraint 0x9a25140)
	static bool AddConstraint(class UWorld*& InWorld, class UTransformableHandle*& InParentHandle, class UTransformableHandle*& InChildHandle, class UTickableTransformConstraint*& InConstraint, bool& bMaintainOffset); // (Final | Native | Static | Public | BlueprintCallable)
};

