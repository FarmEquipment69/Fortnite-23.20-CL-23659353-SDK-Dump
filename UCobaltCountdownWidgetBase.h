// Class /Script/FortniteUI.CobaltCountdownWidgetBase
// Size: 0x388
class UCobaltCountdownWidgetBase : public UCobaltWidgetBase
{
	struct FText CountdownMessage; // 0x360 (0x18)
	float CountdownTime; // 0x378 (0x4)
	unsigned char padding_37c[0xc]; // 0x37c (0xc)

	/* Functions */

	// Function /Script/FortniteUI.CobaltCountdownWidgetBase.UpdateCountdownText (Has no native function)
	void UpdateCountdownText(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltCountdownWidgetBase.HandleTeleportComplete (Underlying native function: HandleTeleportComplete 0xa57e368)
	void HandleTeleportComplete(); // (Final | Native | Private)
};

