// Class /Script/FortniteGame.FortSkydivingShadowProxy
// Size: 0x2a8
class AFortSkydivingShadowProxy : public AActor
{
	float SkydivingHeightThreshold; // 0x288 (0x4)
	float SkydivingHeightCheckInterval; // 0x28c (0x4)
	bool bDestroyOnHide; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	class AFortPlayerController* ViewingPlayerController; // 0x298 (0x8)
	unsigned char padding_2a0[0x8]; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortSkydivingShadowProxy.ShowShadowProxy (Has no native function)
	void ShowShadowProxy(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSkydivingShadowProxy.HideShadowProxy (Has no native function)
	void HideShadowProxy(); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSkydivingShadowProxy.CheckHeight (Underlying native function: CheckHeight 0x8435210)
	void CheckHeight(); // (Final | Native | Public)
};

