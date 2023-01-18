// Class /Script/Engine.GameInstance
// Size: 0x1c0
class UGameInstance : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	struct TArray<class ULocalPlayer*> LocalPlayers; // 0x38 (0x10)
	class UOnlineSession* OnlineSession; // 0x48 (0x8)
	struct TArray<class UObject*> ReferencedObjects; // 0x50 (0x10)
	unsigned char unreflected_60[0x18]; // 0x60 (0x18) 
	struct FMulticastInlineDelegate OnPawnControllerChangedDelegates; // 0x78 (0x10)
	unsigned char unreflected_88[0x18]; // 0x88 (0x18) 
	struct FMulticastInlineDelegate OnInputDeviceConnectionChange; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnUserInputDevicePairingChange; // 0xb0 (0x10)
	unsigned char padding_c0[0x100]; // 0xc0 (0x100)

	/* Functions */

	// Function /Script/Engine.GameInstance.ReceiveShutdown (Has no native function)
	void ReceiveShutdown(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.GameInstance.ReceiveInit (Has no native function)
	void ReceiveInit(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.GameInstance.HandleTravelError (Has no native function)
	void HandleTravelError(struct TEnumAsByte<ETravelFailure>& FailureType); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.GameInstance.HandleNetworkError (Has no native function)
	void HandleNetworkError(struct TEnumAsByte<ENetworkFailure>& FailureType, bool& bIsServer); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.GameInstance.DebugRemovePlayer (Underlying native function: DebugRemovePlayer 0x9d79f14)
	void DebugRemovePlayer(int& ControllerId); // (Exec | Native | Public)

	// Function /Script/Engine.GameInstance.DebugCreatePlayer (Underlying native function: DebugCreatePlayer 0x9d79e90)
	void DebugCreatePlayer(int& ControllerId); // (Exec | Native | Public)
};

