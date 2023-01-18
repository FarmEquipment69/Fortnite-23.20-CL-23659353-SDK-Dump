// Class /Script/ScoutDroneUI.DronePickUpIndicatorComponent
// Size: 0x158
class UDronePickUpIndicatorComponent : public UGameFrameworkComponent
{
	class UClass* ItemIndicatorType; // 0xa0 (0x8)
	class UClass* DbnoIndicatorType; // 0xa8 (0x8)
	struct FUserWidgetPool IndicatorPool; // 0xb0 (0x88)
	unsigned char padding_138[0x20]; // 0x138 (0x20)

	/* Functions */

	// Function /Script/ScoutDroneUI.DronePickUpIndicatorComponent.OnDroneDestroyed (Underlying native function: OnDroneDestroyed 0x5362920)
	void OnDroneDestroyed(class AActor*& DestroyedActor); // (Final | Native | Protected)

	// Function /Script/ScoutDroneUI.DronePickUpIndicatorComponent.Init (Underlying native function: Init 0x5362730)
	void Init(class AFortScoutDrone*& Drone); // (Final | Native | Protected | BlueprintCallable)
};

