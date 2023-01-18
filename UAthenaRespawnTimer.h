// Class /Script/FortniteUI.AthenaRespawnTimer
// Size: 0x3b8
class UAthenaRespawnTimer : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0xd8]; // 0x2d0 (0xd8) 
	float MinUpdateTime; // 0x3a8 (0x4)
	float CreativeMinUpdateTime; // 0x3ac (0x4)
	class UCommonTextBlock* TextTime; // 0x3b0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaRespawnTimer.OnTimeEnded (Has no native function)
	void OnTimeEnded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaRespawnTimer.OnTickDown (Has no native function)
	void OnTickDown(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaRespawnTimer.HandleStartedRespawn (Underlying native function: HandleStartedRespawn 0xa50a41c)
	void HandleStartedRespawn(class AFortPlayerControllerZone*& PlayerController); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRespawnTimer.AddExtensionWidget_BP (Has no native function)
	void AddExtensionWidgetBP(class UWidget*& Widget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaRespawnTimer.AddExtensionWidget (Underlying native function: AddExtensionWidget 0xa509130)
	void AddExtensionWidget(class UWidget*& Widget); // (Final | Native | Public | BlueprintCallable)
};

