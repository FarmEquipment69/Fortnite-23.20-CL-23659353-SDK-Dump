// Class /Script/FortniteGame.FortPhysicsTowHook
// Size: 0x6f0
class AFortPhysicsTowHook : public AActor
{
	struct TArray<struct FNetTowhookAttachState> ReplicatedAttachStates; // 0x288 (0x10)
	unsigned char unreflected_298[0x448]; // 0x298 (0x448) 
	class AActor* AlwaysAttachedActor; // 0x6e0 (0x8)
	unsigned char padding_6e8[0x8]; // 0x6e8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPhysicsTowHook.SetTowhookExtensionState (Underlying native function: SetTowhookExtensionState 0x83e2c0c)
	void SetTowhookExtensionState(enum FTowhookExtensionState& NewExtensionState); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsTowHook.OnRep_ReplicatedAttachStates (Underlying native function: OnRep_ReplicatedAttachStates 0x83ddd98)
	void OnRepReplicatedAttachStates(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPhysicsTowHook.GetStartPoint (Underlying native function: GetStartPoint 0x83dc0e8)
	bool GetStartPoint(struct FVector& OutStartPoint); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPhysicsTowHook.GetEndPoint (Underlying native function: GetEndPoint 0x83db3b0)
	bool GetEndPoint(struct FVector& OutEndPoint); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

