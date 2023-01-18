// Class /Script/Engine.DataLayerSubsystem
// Size: 0x178
class UDataLayerSubsystem : public UWorldSubsystem
{
	struct FMulticastInlineDelegate OnDataLayerRuntimeStateChanged; // 0x30 (0x10)
	struct TWeakObjectPtr<class UClass> DataLayerLoadingPolicyClass; // 0x40 (0x28)
	class UDataLayerLoadingPolicy* DataLayerLoadingPolicy; // 0x68 (0x8)
	unsigned char padding_70[0x108]; // 0x70 (0x108)

	/* Functions */

	// Function /Script/Engine.DataLayerSubsystem.SetDataLayerStateByLabel (Underlying native function: SetDataLayerStateByLabel 0x9fdfbd0)
	void SetDataLayerStateByLabel(struct FName& InDataLayerLabel, enum EDataLayerState& InState); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.DataLayerSubsystem.SetDataLayerState (Underlying native function: SetDataLayerState 0x9fdfb00)
	void SetDataLayerState(struct FActorDataLayer& InDataLayer, enum EDataLayerState& InState); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.DataLayerSubsystem.SetDataLayerRuntimeStateByLabel (Underlying native function: SetDataLayerRuntimeStateByLabel 0x9fdf9ec)
	void SetDataLayerRuntimeStateByLabel(struct FName& InDataLayerLabel, enum EDataLayerRuntimeState& InState, bool& bInIsRecursive); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.DataLayerSubsystem.SetDataLayerRuntimeState (Underlying native function: SetDataLayerRuntimeState 0x9fdf8d8)
	void SetDataLayerRuntimeState(struct FActorDataLayer& InDataLayer, enum EDataLayerRuntimeState& InState, bool& bInIsRecursive); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.DataLayerSubsystem.SetDataLayerInstanceRuntimeState (Underlying native function: SetDataLayerInstanceRuntimeState 0x9fdf7dc)
	void SetDataLayerInstanceRuntimeState(class UDataLayerAsset*& InDataLayerAsset, enum EDataLayerRuntimeState& InState, bool& bInIsRecursive); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DataLayerSubsystem.GetLoadedDataLayerNames (Underlying native function: GetLoadedDataLayerNames 0x9fdf6ac)
	struct TSet<struct FName> GetLoadedDataLayerNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerStateByLabel (Underlying native function: GetDataLayerStateByLabel 0x9fdf594)
	enum EDataLayerState GetDataLayerStateByLabel(struct FName& InDataLayerLabel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerState (Underlying native function: GetDataLayerState 0x9fdf4c0)
	enum EDataLayerState GetDataLayerState(struct FActorDataLayer& InDataLayer); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerRuntimeStateByLabel (Underlying native function: GetDataLayerRuntimeStateByLabel 0x9fdf594)
	enum EDataLayerRuntimeState GetDataLayerRuntimeStateByLabel(struct FName& InDataLayerLabel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerRuntimeState (Underlying native function: GetDataLayerRuntimeState 0x9fdf4c0)
	enum EDataLayerRuntimeState GetDataLayerRuntimeState(struct FActorDataLayer& InDataLayer); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerInstanceRuntimeState (Underlying native function: GetDataLayerInstanceRuntimeState 0x9fdf404)
	enum EDataLayerRuntimeState GetDataLayerInstanceRuntimeState(class UDataLayerAsset*& InDataLayerAsset); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerInstanceFromAsset (Underlying native function: GetDataLayerInstanceFromAsset 0x9fdf34c)
	class UDataLayerInstance* GetDataLayerInstanceFromAsset(class UDataLayerAsset*& InDataLayerAsset); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerInstanceEffectiveRuntimeState (Underlying native function: GetDataLayerInstanceEffectiveRuntimeState 0x9fdf290)
	enum EDataLayerRuntimeState GetDataLayerInstanceEffectiveRuntimeState(class UDataLayerAsset*& InDataLayerAsset); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerFromName (Underlying native function: GetDataLayerFromName 0x9fdf1dc)
	class UDataLayerInstance* GetDataLayerFromName(struct FName& InDataLayerName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerFromLabel (Underlying native function: GetDataLayerFromLabel 0x9fdf150)
	class UDataLayerInstance* GetDataLayerFromLabel(struct FName& InDataLayerLabel); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerEffectiveRuntimeStateByLabel (Underlying native function: GetDataLayerEffectiveRuntimeStateByLabel 0x9fdf0ac)
	enum EDataLayerRuntimeState GetDataLayerEffectiveRuntimeStateByLabel(struct FName& InDataLayerLabel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayerEffectiveRuntimeState (Underlying native function: GetDataLayerEffectiveRuntimeState 0x9fdf014)
	enum EDataLayerRuntimeState GetDataLayerEffectiveRuntimeState(struct FActorDataLayer& InDataLayer); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetDataLayer (Underlying native function: GetDataLayer 0x9fdef4c)
	class UDataLayerInstance* GetDataLayer(struct FActorDataLayer& InDataLayer); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerSubsystem.GetActiveDataLayerNames (Underlying native function: GetActiveDataLayerNames 0x9fdef20)
	struct TSet<struct FName> GetActiveDataLayerNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

