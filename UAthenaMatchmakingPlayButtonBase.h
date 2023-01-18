// Class /Script/FortniteGame.AthenaMatchmakingPlayButtonBase
// Size: 0x1450
class UAthenaMatchmakingPlayButtonBase : public UCommonButtonLegacy
{
	class UWidgetAnimation* MobileFTUEIn; // 0x1430 (0x8)
	class UWidgetAnimation* MobileFTUEIdle; // 0x1438 (0x8)
	class UImage* MobileFTUEAnim; // 0x1440 (0x8)
	unsigned char padding_1448[0x8]; // 0x1448 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.AthenaMatchmakingPlayButtonBase.HandleCurrentlyViewedAccountInfoChanged (Underlying native function: HandleCurrentlyViewedAccountInfoChanged 0x8f9a050)
	void HandleCurrentlyViewedAccountInfoChanged(struct FFortPublicAccountInfo& NewInfo); // (Final | Native | Protected)
};

