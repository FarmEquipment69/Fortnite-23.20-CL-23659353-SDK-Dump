// Class /Script/FortniteGame.CreativeMoveToolTarget
// Size: 0x28
class ICreativeMoveToolTarget : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.CreativeMoveToolTarget.ShouldBlockPlacement (Has no native function)
	bool ShouldBlockPlacement(class AFortCreativeMoveTool*& MoveTool); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.CreativeMoveToolTarget.OnPreviewStart (Has no native function)
	bool OnPreviewStart(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeMoveToolTarget.OnPreviewEnd (Has no native function)
	bool OnPreviewEnd(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeMoveToolTarget.OnCreativeToolDeletion (Underlying native function: OnCreativeToolDeletion 0x6a4c7a4)
	void OnCreativeToolDeletion(); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeMoveToolTarget.IsValidPlacement (Has no native function)
	bool IsValidPlacement(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeMoveToolTarget.HasAdditionalValidPlacementLogic (Has no native function)
	bool HasAdditionalValidPlacementLogic(); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.CreativeMoveToolTarget.GetSpawnedActors (Has no native function)
	struct TArray<class AActor*> GetSpawnedActors(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeMoveToolTarget.GetScaleMin (Underlying native function: GetScaleMin 0x87b30d8)
	float GetScaleMin(float& DefaultScaleMin); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeMoveToolTarget.GetScaleMax (Underlying native function: GetScaleMax 0x87b3040)
	float GetScaleMax(float& DefaultScaleMax); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeMoveToolTarget.ForceGridAlignment (Has no native function)
	bool ForceGridAlignment(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeMoveToolTarget.AllowInverseScaling (Has no native function)
	bool AllowInverseScaling(); // (Event | Public | BlueprintEvent)
};

