// Class /Script/FortniteGame.PlayspaceComponent_DeviceTracking
// Size: 0x1c8
class UPlayspaceComponent_DeviceTracking : public UPlayspaceComponent
{
	unsigned char unreflected_a0[0xa0]; // 0xa0 (0xa0) 
	struct TSet<struct FString> DeviceLabels; // 0x140 (0x50)
	unsigned char unreflected_190[0x8]; // 0x190 (0x8) 
	struct FMulticastInlineDelegate OnDeviceRemovedFromPlayspace; // 0x198 (0x10)
	struct FMulticastInlineDelegate OnDeviceAddedToPlayspace; // 0x1a8 (0x10)
	struct FMulticastInlineDelegate OnDeviceChangedInPlayspace; // 0x1b8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.PlayspaceComponent_DeviceTracking.OnDeviceEndPlay (Underlying native function: OnDeviceEndPlay 0x5d2ca10)
	void OnDeviceEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Protected)
};

