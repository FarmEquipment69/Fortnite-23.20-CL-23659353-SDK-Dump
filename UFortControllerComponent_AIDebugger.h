// Class /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger
// Size: 0xb8
class UFortControllerComponent_AIDebugger : public UFortControllerComponent
{
	class APlayerController* OwnerPC; // 0xa0 (0x8)
	class UClass* NavMeshRendererComponentClass; // 0xa8 (0x8)
	unsigned char DefaultEnabledVisualizers; // 0xb0 (0x1)
	unsigned char EnabledVisualizers; // 0xb1 (0x1)
	unsigned char NumNavMeshes; // 0xb2 (0x1)
	unsigned char padding_b3[0x5]; // 0xb3 (0x5)

	/* Functions */

	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.VisualizeNextNavMesh (Underlying native function: VisualizeNextNavMesh 0x52f5a00)
	void VisualizeNextNavMesh(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.VisualizeNavMeshID (Underlying native function: VisualizeNavMeshID 0x52f5950)
	void VisualizeNavMeshID(int& NavMeshID); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.SetVisualizationEnable (Underlying native function: SetVisualizationEnable 0x52f5780)
	void SetVisualizationEnable(enum EAIDebuggerVisualization& VisualizationType, bool& bEnable); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnRep_EnabledVisualizers (Underlying native function: OnRep_EnabledVisualizers 0x52f5730)
	void OnRepEnabledVisualizers(); // (Final | Native | Public)

	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.IsVisualizationEnabled (Underlying native function: IsVisualizationEnabled 0x52f5660)
	bool IsVisualizationEnabled(enum EAIDebuggerVisualization& VisualizationType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.GetOrCreateRenderer (Underlying native function: GetOrCreateRenderer 0x52f5630)
	class UAIDebuggerRendererComponent* GetOrCreateRenderer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

