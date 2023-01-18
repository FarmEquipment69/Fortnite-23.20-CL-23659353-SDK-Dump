// Class /Script/FortniteGame.FortPrototypingContext
// Size: 0x78
class UFortPrototypingContext : public UBlueprintContextBase
{
	struct FMulticastInlineDelegate OnPrototypingStatusChangedEvent; // 0x30 (0x10)
	unsigned char padding_40[0x38]; // 0x40 (0x38)

	/* Functions */

	// DelegateFunction /Script/FortniteGame.FortPrototypingContext.OnPrototypingStatusChanged__DelegateSignature (Has no native function)
	void OnPrototypingStatusChangedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortPrototypingContext.HandleMcpProfilesInitialized (Underlying native function: HandleMcpProfilesInitialized 0x25847dc)
	void HandleMcpProfilesInitialized(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPrototypingContext.GetPrototypingStatus (Underlying native function: GetPrototypingStatus 0x89b8b40)
	enum EFortPrototypingStatus GetPrototypingStatus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

