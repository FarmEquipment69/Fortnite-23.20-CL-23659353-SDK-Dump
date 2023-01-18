// Class /Script/VerseDevices.ScriptDevice
// Size: 0xf38
class AScriptDevice : public ABuildingProp
{
	class UVerseCreativeDevice* Script; // 0xee8 (0x8)
	unsigned char unreflected_ef0[0x8]; // 0xef0 (0x8) 
	class UVerseCreativeDevice* ScriptInstance; // 0xef8 (0x8)
	unsigned char padding_f00[0x38]; // 0xf00 (0x38)

	/* Functions */

	// Function /Script/VerseDevices.ScriptDevice.SetEnabled (Underlying native function: SetEnabled 0x6d4c5ec)
	void SetEnabled(bool& bInEnabled); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/VerseDevices.ScriptDevice.HandlePreMinigameStartedSetup (Underlying native function: HandlePreMinigameStartedSetup 0x6d4c514)
	void HandlePreMinigameStartedSetup(); // (Final | Native | Public)

	// Function /Script/VerseDevices.ScriptDevice.HandleMinigameEndGame (Underlying native function: HandleMinigameEndGame 0x6d4c414)
	void HandleMinigameEndGame(class AFortPlayerController*& PlayerController, enum EFortMinigameEnd& EndMethod, enum EFortMinigameState& NextState); // (Final | Native | Public)
};

