// Class /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor
// Size: 0x2b8
class ASpecialEventScriptMeshActor : public AInfo
{
	struct FDateTime* RootStartTime; // 0x288 (0x8)
	struct FString CalendarEventName; // 0x290 (0x10)
	float CalenderEventOffsetInSeconds; // 0x2a0 (0x4)
	float EncryptionKeyDeliveryTimeOffset; // 0x2a4 (0x4)
	unsigned char unreflected_2a8[0x8]; // 0x2a8 (0x8) 
	class UMeshNetworkComponent* MeshNetworkComponent; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.OnRep_RootStartTime (Underlying native function: OnRep_RootStartTime 0x76c57d4)
	void OnRepRootStartTime(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartEvent (Underlying native function: MeshRootStartEvent 0x76c3cf4)
	void MeshRootStartEvent(); // (Final | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimerOnly (Underlying native function: MeshRootStartCalendarTimerOnly 0x76c3c84)
	void MeshRootStartCalendarTimerOnly(); // (Final | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimer (Underlying native function: MeshRootStartCalendarTimer 0x76c3c70)
	void MeshRootStartCalendarTimer(); // (Final | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootResetEvent (Underlying native function: MeshRootResetEvent 0x76c3c5c)
	void MeshRootResetEvent(); // (Final | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootLogCalendarTimer (Underlying native function: MeshRootLogCalendarTimer 0x76c3c48)
	void MeshRootLogCalendarTimer(); // (Final | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootClearCalendarTimer (Underlying native function: MeshRootClearCalendarTimer 0x76c3c34)
	void MeshRootClearCalendarTimer(); // (Final | Exec | Native | Public)
};

