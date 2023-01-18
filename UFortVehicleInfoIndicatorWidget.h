// Class /Script/FortniteUI.FortVehicleInfoIndicatorWidget
// Size: 0x388
class UFortVehicleInfoIndicatorWidget : public UFortActorIndicatorWidget
{
	struct TWeakObjectPtr<class AActor> CurrentVehicle; // 0x378 (0x8)
	float TimeToHideWhenDamaged; // 0x380 (0x4)
	unsigned char padding_384[0x4]; // 0x384 (0x4)

	/* Functions */

	// Function /Script/FortniteUI.FortVehicleInfoIndicatorWidget.SetVehicle (Underlying native function: SetVehicle 0xa7274ec)
	void SetVehicle(class AActor*& NewVehicle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortVehicleInfoIndicatorWidget.OnVehicleHealthChanged (Underlying native function: OnVehicleHealthChanged 0x8d3be3c)
	void OnVehicleHealthChanged(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortVehicleInfoIndicatorWidget.OnVehicleChanged (Has no native function)
	void OnVehicleChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortVehicleInfoIndicatorWidget.GetControlledPawn (Underlying native function: GetControlledPawn 0xa7238b8)
	class APawn* GetControlledPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

