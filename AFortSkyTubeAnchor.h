// Class /Script/FortniteGame.FortSkyTubeAnchor
// Size: 0xef0
class AFortSkyTubeAnchor : public ABuildingProp
{
	bool bEnabled; // 0xee8 (0x1)
	bool bExemptFromShutdown; // 0xee9 (0x1)
	unsigned char padding_eea[0x6]; // 0xeea (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortSkyTubeAnchor.OnEnabledChanged (Has no native function)
	void OnEnabledChanged(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSkyTubeAnchor.IsExemptFromShutdown (Underlying native function: IsExemptFromShutdown 0x88627b0)
	bool IsExemptFromShutdown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSkyTubeAnchor.IsEnabled (Underlying native function: IsEnabled 0x886274c)
	bool IsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

