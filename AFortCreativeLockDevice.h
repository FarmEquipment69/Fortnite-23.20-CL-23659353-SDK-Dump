// Class /Script/FortniteGame.FortCreativeLockDevice
// Size: 0xf08
class AFortCreativeLockDevice : public ABuildingProp
{
	struct FMulticastInlineDelegate OnLocalPawnInventoryChanged; // 0xee8 (0x10)
	unsigned char unreflected_ef8[0x8]; // 0xef8 (0x8) 
	class AFortPlayerController* CachedLocalController; // 0xf00 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeLockDevice.HandleLocalPawnExitPreviewArea (Underlying native function: HandleLocalPawnExitPreviewArea 0x87b4200)
	void HandleLocalPawnExitPreviewArea(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeLockDevice.HandleLocalPawnEnterToPreviewArea (Underlying native function: HandleLocalPawnEnterToPreviewArea 0x87b40fc)
	void HandleLocalPawnEnterToPreviewArea(class APawn*& Pawn); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)
};

